#include<iostream>
#include<ctime>
using namespace std;

char Userchoice();
char Computerchoice();
void showchoice(char choice);
void winner(char player,char computer);

int main(){
    char player,computer;
    do{ 
      player=Userchoice();
      cout<<"Your choice: ";
      showchoice(player);

      computer=Computerchoice();
      cout<<"\nComputer's choice: ";
      showchoice(computer);
      
      cout<<'\n';    
      winner(player,computer);
      cout<<'\n'<<'\n';
    }   while(player!='q');
    
}

char Userchoice(){
    char player;
    cout<<"ROCK - PAPER - SCISSORS SHOOT\n";
    do{
        cout<<"Choose one of the following\n";
        cout<<"***************************\n";
        cout<<"r for rock\n";
        cout<<"p for paper\n";
        cout<<"s for scissors\n";
        cout<<"q to  quit\n";
        cin >>player;
    }
    while(player!='r' && player!='p' && player!='s' && player!='q');
    return player;
}

char Computerchoice(){

    srand(time(NULL));
    int num=rand()%3+1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }  
}

void showchoice(char choice){

    switch(choice){
        case 'r': cout<<"ROCK";
        break;
        case 'p': cout<<"PAPER";
        break;
        case 's': cout<<"SCISSORS";
        break;
    }

}

void winner(char player,char computer){ 

    switch(player){
        case 'r':{ if(computer == 'r'){
                    cout<<"IT's A TIE!\n";
                    }
                  else if(computer == 'p'){
                    cout<<"YOU LOSE!\n";
                  }
                  else{
                    cout<<"YOU WIN!\n";
                  }
            break;  }
        case 'p':{ if(computer == 'r'){
                    cout<<"YOU WIN!\n";
                    }
                  else if(computer == 'p'){
                    cout<<"IT's A TIE!\n";
                  }
                  else{
                    cout<<"YOU LOSE!\n";
                  }
            break;  }
        case 's':{ if(computer == 'r'){
                    cout<<"YOU LOSE!\n";
                    }
                  else if(computer == 'p'){
                    cout<<"YOU WIN!\n";
                  }
                  else{
                    cout<<"IT's A TIE!\n";
                  }
            break;  }
        case 'q':{
                cout<<"Thanks for playing!";
            break;
        }
    }

}