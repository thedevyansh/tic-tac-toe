#include<iostream>

char arr[] = {'1','2','3','4','5','6','7','8','9'}; //global array
void drawBoard();
int gameStatus();

int main()
{
    int status,player=1,pos;
    char mark;
    do
    {
        system("CLS");
        drawBoard();
        player= (player%2)? 1 : 2;
        mark= (player==1)? 'X' : 'O';
        std::cout<<"  Player: "<< player<<"-> Where to put your mark "<< mark<< "  ";
        std::cin>> pos;

        if(pos==1 && arr[0]=='1')
            arr[0]= mark;

        else if(pos==2 && arr[1]=='2')
            arr[1]= mark;

        else if(pos==3 && arr[2]=='3')
            arr[2]= mark;

        else if(pos==4 && arr[3]=='4')
            arr[3]= mark;

        else if(pos==5 && arr[4]=='5')
            arr[4]= mark;

        else if(pos==6 && arr[5]=='6')
            arr[5]= mark;

        else if(pos==7 && arr[6]=='7')
            arr[6]= mark;

        else if(pos==8 && arr[7]=='8')
            arr[7]= mark;

        else if(pos==9 && arr[8]=='9')
            arr[8]= mark;

        else {
            std::cout<< "  INVALID INPUT\n";

            player--;
            std::cin.ignore();
            std::cin.get();
        }

        status=gameStatus();
        player++;

        }while(status == -1);

        system("CLS");
        drawBoard();

        if(status==1)
            std::cout<< "  ---> PLAYER: "<< --player<< " WINS";
        else
            std::cout<< "  ---> GAME DRAW";

        std::cin.ignore();
        std::cin.get();
    return 0;
}

void drawBoard() {

    std::cout<< "  TIC - TAC - TOE\n";
    std::cout<< "\n";
    std::cout<< " Player:1 (X)      Player:2(O)\n\n\n";

    std::cout<< "   "<< "     |     |     \n";
    std::cout<< "   "<< "  "<< arr[0]<< "  |  "<< arr[1]<< "  |  "<< arr[2]<< "  \n";
    std::cout<< "   "<< "_____|_____|_____\n";
    std::cout<< "   "<< "     |     |     \n";
    std::cout<< "   "<< "  "<< arr[3]<< "  |  "<< arr[4]<< "  |  "<< arr[5]<< "  \n";
    std::cout<< "   "<< "_____|_____|_____\n";
    std::cout<< "   "<< "     |     |     \n";
    std::cout<< "   "<< "  "<< arr[6]<< "  |  "<< arr[7]<< "  |  "<< arr[8]<< "  \n";
    std::cout<< "   "<< "     |     |     \n";
}

int gameStatus() {

    if(arr[0] == arr[1] && arr[1] == arr[2])
        return 1;
    else if(arr[3] == arr[4] && arr[4] == arr[5])
        return 1;
    else if(arr[6] == arr[7] && arr[7] == arr[8])
        return 1;
    else if(arr[0] == arr[3] && arr[3] == arr[6])
        return 1;
    else if(arr[1] == arr[4] && arr[4] == arr[7])
        return 1;
    else if(arr[2] == arr[5] && arr[5] == arr[8])
        return 1;
    else if(arr[0] == arr[4] && arr[4] == arr[8])
        return 1;
    else if(arr[2] == arr[4] && arr[4] == arr[6])
        return 1;

    else if(arr[0] != '1' && arr[1] != '2' && arr[2] != '3' && arr[3] != '4' &&
            arr[4] != '5' && arr[5] != '6' && arr[6] != '7' && arr[7] != '8' &&
            arr[8] != '9')
                return 0;
    else
        return -1;
}
