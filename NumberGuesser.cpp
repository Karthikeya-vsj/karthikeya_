#include<iostream>
#include<ctime>
int main(){
    int num,guess,tries=0;
    srand(time(NULL));
    num=rand()%100+1;
    std::cout<<"******NUMBER GUESSER GAME*******";
    
    do{
        std::cout<<"\nEnter a number (1-100): ";
        std::cin>>guess;
        tries++;
        if(guess>num) std::cout<<"TO HIGH";
        else if(guess<num) std::cout<<"TO LOW";
        else std::cout<<"GOTCHA! #tries = "<<tries;
    }
    while(guess!=num);
    std::cout<<"\n**********************************";

}