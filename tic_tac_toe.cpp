#include<iostream>
#include<ctime>
using namespace std;

void drawboard(char *spaces);
void playerMove(char *spaces, char player);
void computerMove(char *spaces, char computer);
bool checkWinner(char *spaces, char player,char computer);
bool checkTie(char *spaces);

int main(){
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool playing = true;
    cout<<"   TIC TAC TOE   ";
    drawboard(spaces);

    while(playing){
        playerMove(spaces,player);
        drawboard(spaces);
        if(checkWinner(spaces,player,computer)){
            playing = false;
            break;
        }
        else if(checkTie(spaces)){
            playing = false;
            break;
        }

        computerMove(spaces,computer);
        drawboard(spaces);
        if(checkWinner(spaces,player,computer)){
            playing = false;
            break;
        }
        else if(checkTie(spaces)){
            playing = false;
            break;
        }
    }

    cout<<"Thanks for playing ";
}

void drawboard(char *spaces){
    cout<<'\n';
    cout<<"\n     |     |     "<<'\n';
    cout<<"  " <<spaces[0]<< "  |  " <<spaces[1]<< "  |  " <<spaces[2]<< "  "<<'\n';
    cout<<"_____|_____|_____"<<'\n';
    cout<<"     |     |     "<<'\n';
    cout<<"  " <<spaces[3]<< "  |  " <<spaces[4]<< "  |  " <<spaces[5]<< "  "<<'\n';
    cout<<"_____|_____|_____"<<'\n';
    cout<<"     |     |     "<<'\n';
    cout<<"  " <<spaces[6]<< "  |  " <<spaces[7]<< "  |  " <<spaces[8]<< "  "<<'\n';
    cout<<"     |     |     "<<'\n'; 
    cout<<'\n';
}

void playerMove(char *spaces, char player){
    int num;
    do{
        cout<<"Enter a position (1 - 9): ";
        cin>>num;
        num--;
        if(spaces[num] == ' '){
            spaces[num] = player;
            break;
        }
    }while(!num > 0 || !num < 8);
}

void computerMove(char *spaces, char computer){
    int num;
    srand(time(NULL));
    while(true){
        num = rand()%9;
        if(spaces[num] == ' '){
            spaces[num] = computer;
            break;
        }
    }
}

bool checkWinner(char *spaces, char player,char computer){

    if(spaces[0]!=' ' && spaces[0]==spaces[1] && spaces[1]==spaces[2]){
        spaces[0]==player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n";
    }
    else if(spaces[3]!=' ' && spaces[3]==spaces[4] && spaces[4]==spaces[5]){
        spaces[3]==player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n";
    }
    else if(spaces[6]!=' ' && spaces[6]==spaces[7] && spaces[7]==spaces[8]){
        spaces[6]==player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n";
    }
    else if(spaces[0]!=' ' && spaces[0]==spaces[3] && spaces[3]==spaces[6]){
        spaces[0]==player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n";
    }
    else if(spaces[1]!=' ' && spaces[1]==spaces[4] && spaces[4]==spaces[7]){
        spaces[1]==player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n";
    }
    else if(spaces[2]!=' ' && spaces[2]==spaces[5] && spaces[5]==spaces[8]){
        spaces[2]==player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n";
    }
    else if(spaces[0]!=' ' && spaces[0]==spaces[4] && spaces[4]==spaces[8]){
        spaces[0]==player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n";
    }
    else if(spaces[2]!=' ' && spaces[2]==spaces[4] && spaces[4]==spaces[6]){
        spaces[2]==player ? cout<<"YOU WIN\n" : cout<<"YOU LOSE\n";
    }
    else 
        return false;
    
    return true;
}

bool checkTie(char *spaces){

    for(int i=0;i<9;i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    cout<<"IT's A TIE\n";
    return true;
}