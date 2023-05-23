#include<iostream>
#include<cmath>
using namespace std;
#define M 101  // COLUMNS-->X axis,x
#define N 51   //ROWS-->Y-axis,y
//NUMBERS OF ROWS AND COLUMS IN N+1 CAUSE 0 IS INCLUDED

void graph(char gr[M][N]);

int main(int argc, char *argv[]){

    float a,b,c;
    char gr[M][N];

    // cout<<"Enter coefficients of F(x): \n";
    // cout<<"coefficient of x^2: ";   cin>>a;
    // cout<<"coefficient of x : ";    cin>>b;
    // cout<<"coefficient of constant term: "; cin>>c;

    //a = atoi(argv[1]) ; b = atoi(argv[2]) ; c = atoi(argv[3]) ;     // g++ graph.cpp -o main
            //command line input                                     // ./main 0 1 0

    for(int i=0;i<=M-1;i++){
        for(int j=0;j<=N-1;j++){
            gr[i][j]=' ';           //INITIALISING ALL DATA POINTS WITH ' '
        }
    }

    //  f(x) = y = a2x^2 + a1x + k
    //  on x axis 0 - 100     on y axis 0 - 50

    for(int y=0;y<=N-1;y++){
        for(int x=0;x<=M-1;x++){
            if(y==(a*x*x + b*x + c)){
                gr[x][y]='*';       // ASSIGNING * TO SATISFIED POINT
            }       
        }
    }
    cout<<"Graph of "<<"y = "<<a<<"x^2"<<((b>=0)?(" + "):(" "))<<b<<'x'<<((c>=0)?(" + "):(" "))<<c<<" :\n\n";
    graph(gr);
}


void graph(char gr[M][N]){
   
    int x,y;
    for(y=N-1;y>=0;y--){
        cout<<y<<((y>9)?"| ":" | ");
        for(x=0;x<=M-1;x++){
            cout<<gr[x][y];
        }
        cout<<'\n';
    }
    cout <<"   ";

    for(int t=0;t<=M-1;t++){
        cout<<"_";
    }
    cout<<" X --->";
    
}