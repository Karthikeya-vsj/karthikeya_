#include<stdio.h>

void main(){

    float units;
    
    printf("Enter number of units :");
    scanf("%f",&units);

    // ELECTRICITY BILL FOR DOMESTIC HOUSEHOLD IN TELANGANA BASED ON SLABS UPTO 800 UNITS.
    // COST OF ELECTRICITY PER UNIT DEPENDS ON THE AREA OF THE CONNECTION.

    if(units > 0 && units <= 100){
        if(units > 0 && units <= 50){
            printf("Energy charges = %.1f",units * 1.45);}                      //FIXED CHARGES = 50 Rs.
        else if(units > 50 && units <=100){
            printf("Energy charges = %.1f",50*1.45 + (units-50)*2.60);}}

    if(units > 100 && units <=200){
        printf("Energy charges = %.1f",100*3.30 + (units-100)*4.30);}
    
    if(units > 200 ){
        if(units > 200 && units <= 300){
            printf("Energy charges = %.1f",200*5 + (units-200)*7.20);}
        else if(units > 300 && units <= 400){
            printf("Energy charges = %.1f",200*5.00 + 100*7.20 + (units-300)*8.5);}
        else if(units > 400 && units <= 800){
            printf("Energy charges = %.1f",200*5.00 + 100*7.20 + 100*8.50 + (units-400)*9);}      
        else if(units > 800){
            printf("Energy charges = %.1f",200*5.00 + 100*7.20 + 100*8.50 + 400*9.00 + (units-800)*9.50);}
    }
    
          
    

}

