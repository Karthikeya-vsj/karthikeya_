#include<iostream>
using namespace std;
int get_digit(const int num);
int add_odd(const string card_num);
int add_even(const string card_num);

int main(){  

    string card_num;
    int res = 0;
    cout<<"Enter a credit card number :  ";
    cin>>card_num;
    //LUHN's ALGORITHM TO VALIDATE CREDIT CARD

    res = add_even(card_num) + add_odd(card_num);
    if(res % 10 == 0) 
        cout<<"Card number is valid";
    else 
        cout<<"Card num is not valid";

    return 0;

}
int get_digit(const int num){   
    return num % 10 + (num / 10 % 10);      //CONVERT NUMBER TO CORRESPONDING SUM OF ITS DIGITS
}
int add_odd(const string card_num){
    int sum = 0;
    for(int i=card_num.size() - 1; i>=0 ;i-=2){
        sum+=card_num[i] - '0';             
    }
    return sum;
}
int add_even(const string card_num){
    int sum = 0;
    for(int i=card_num.size() - 2; i>=0 ;i-=2){
        sum+=get_digit((card_num[i] - '0')*2);
    }
    return sum;
}