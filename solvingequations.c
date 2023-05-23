#include<stdio.h>
#include<math.h>

int main(){
    int n;

    printf("Enter order of equation:");
    scanf("%d",&n);

    if(n==1){
        int a,b;
        printf("Enter coefficient of x and constant term:\n");
        scanf("%d %d",&a,&b);                       //ax+b=0
        printf("Root is %d",-b/a);
    }

    else if(n==2){
        int a,b,c,dis;
        float r[2];
        printf("Enter coefficients of quadratic equation:\n");
        scanf("%d %d %d",&a,&b,&c);                 //ax^2+bx+c=0
        dis=b*b-4*a*c;
        if(dis>=0){
            r[0]=(-b+sqrt(dis))/(2*a);
            r[1]=(-b-sqrt(dis))/(2*a);
            printf("Roots are %f %f",r[0],r[1]);
        }
        else printf("Roots are imaginary");
    }

    else if(n==3){
        int a,b,c,d,e,r[3],t,j;
        printf("Enter coefficients of cubic equation:");
        scanf("%d %d %d %d",&a,&b,&c,&d);           //ax^3+bx^2+cx+d=0

        for(int i=-50;i<=50;i++){
            t=a*i*i*i+b*i*i+c*i+d;
            if(t==0){
                r[0]=i;
                break;
            }
        }
        
        for(int m=r[0]+1;m<=50;m++){
            t=a*m*m*m+b*m*m+c*m+d;
            if(t==0){
                r[1]=m;
                break;
            }
        }
        for(int i=r[1]+1;i<=0;i++){
            t=a*i*i*i+b*i*i+c*i+d;
            if(t==0){
                r[2]=i;
                break;
            }
        }

        printf("%d %d %d",r[0],r[1],r[2]);

    }

}