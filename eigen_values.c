#include<stdio.h>
#include<math.h>
#define s 4
void eigen();
void main(){
    int n,a[s][s];
    printf("Enter order of the matrix :");
    scanf("%d",&n);

    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){
    //         printf("Enter a[%d][%d] = ",i,j);
    //         scanf("%d",&a[i][j]);
    //     }
    // }

    FILE *fp = fopen ("inputmatrix.txt","r");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            fscanf(fp,"%d",&a[i][j]);           //READING MATRIX FROM FILE.
        }
    }

    printf("Matrix is :\n");
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf(" %d ",a[i][j]);             //PRINTING INPUT MATRIX
        }
        printf("\n");
    }
    eigen(n,a);

}


void eigen(int n,int a[s][s]){
    if(n==2){
        int A,B,C,D;               // HERE A,B,C, ARE COEFFICIENTS OF QUADRATIC EQUATION OF CHARECTERISTIC EQUATION.
            float lambda[2];
            A = 1;
            B = -(a[1][1]+a[2][2]);
            C = (a[1][1]*a[2][2]-a[1][2]*a[2][1]);
            D = B*B - 4*A*C;

            printf("Charecteristic equation is = %d %d %d \n\n",A,B,C);       //Ax^2 + Bx + C.
            
            if(D>0){
                lambda[0]= (sqrt(D)-B)/(2*A);       // SOLVING THE QUADRATIC EQUATION.
                lambda[1]=-(sqrt(D)+B)/(2*A);

                printf("Eigen values are : %.3f %.3f ",lambda[0],lambda[1]);  
            }
            else printf("Lambda values are imaginary");
    }

    else if(n==3){
        int A,B,C,D,d;     
            
            A = 1;
            B = -(a[1][1]+a[2][2]+a[3][3]);
            C = -(-a[1][1]*a[2][2] - a[1][1]*a[3][3] - a[2][2]*a[3][3] + a[3][2]*a[2][3] + a[1][2]*a[2][1] + a[3][1]*a[1][3]);
            D = -(a[1][1]*(a[2][2]*a[3][3] - a[3][2]*a[2][3]) + a[1][2]*(a[3][1]*a[2][3] - a[2][1]*a[3][3]) + 
                a[1][3]*(a[2][1]*a[3][2]-a[3][1]*a[2][2]));
            
            printf("Characteristic equation : %d %d %d %d\n",A,B,C,D);

            /* EQUATION REDUCTION METHOD */
            
            // int r1,r2,r3;
            // for(int i=-50;i<=50;i++){
            //     d = A*i*i*i + B*i*i + C*i + D;
            //     if(d==0){
            //         r1=i;                    // GETTING FIRST ROOT OF CUBIC EQUATION.
            //         break;
            //     }
            // }
            // int a=1,b,c;

            // b=B+A*r1;                        // REDUCING THE MATRIX TO QUADRATIC EQUATION
            // c=C+(B+A*r1)*r1;                 // OF FORM ax^2 + bx + c = 0
            
            // d=sqrt(b*b-4*a*c);
            // r2 = (-b+d)/2*a;                 // SOLVING QUADRATIC EQUATIONS.
            // r3 = (-b-d)/2*a;

            // printf("EIGEN VALUES ARE : %d , %d , %d ",r1,r2,r3);


            /* FINDING ROOT BY LOOPS METHOD */

            int r[3],z;

            for(int i=-50;i<=50;i++){
                z=A*i*i*i+B*i*i+C*i+D;
                if(z==0){
                    r[0]=i;
                    break;
                }
            }

            for(int j=r[0]+1;j<=50;j++){
                z=A*j*j*j+B*j*j+C*j+D;
                if(z==0){
                    r[1]=j;
                    break;
                }
            }
            
            for(int k=r[1]+1;k<=50;k++){
                z=A*k*k*k+B*k*k+C*k+D;
                if(z==0){
                    r[2]=k;
                    break;
                }
            }

            printf("Eigen values are %d %d %d ",r[0],r[1],r[2]);

    }
}