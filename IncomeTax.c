#include<stdio.h>
int main(){

    int income;
    printf("Enter your Income :");
    scanf("%d",&income);

     // THIS IS ONLY INCOME TAX FOR THE NET INCOME.
     // 4% PERCENT OF INCOME WILL BE DEDUCTED FOR EDUCATION AND HEALTH AS CESS INCLUDED WITH TAX.
     // TAX FORMAT -->    [ TAX FROM INCOME BY TAX SLAB + SURCHARGE + CESS ]    (CESS = 4% OF INCOME TAX).
     // TAX IS LEVIED ON ADDITIONAL AMOUNT. ( eg for 600000 income , 100000 is tax at 10% and surcharge of 12500 is added).
    
    if(income <= 250000){
        printf("Net income is %d\n",income);
        printf("Tax for the income is 0\n");               // No income tax for 0 to 250000.
        printf("Income per month is %d\n",income / 12);}

    else if(income > 250000  &&  income <= 500000){
        int tax5=((income-250000)/20);
        printf("Net income is %d\n",income - tax5);  
        printf("Tax for the income is %d\n",tax5);    // 5% tax for 250000 to 500000 (this 5% can be redebated making no tax) ,   NO CESS CHARGE AND SURCHARGE
        printf("5%% tax slab\n");
        printf("Income per month is %d\n",(income - tax5)/12);}

    else if(income > 500000  &&  income <= 750000){
        int tax10=(((income-500000)/10)+12500);
        printf("Net income is %d\n",income - tax10 + tax10/25);
        printf("Tax for the income is %d\n",tax10 + tax10/25);      // 10% tax for 500000 to 750000    +  12500(surcharge)
        printf("10%% tax slab\n");
        printf("Income per month is %d\n",(income - tax10 + tax10/25)/12);}

    else if(income > 750000  &&  income <= 1000000){
        int tax15=((((income-750000)*15)/100)+37500);
        printf("Net income is %d\n",income - (tax15 + tax15/25));
        printf("Tax for the income is %d\n",tax15 + tax15/25);        // 15% tax for 750000 to 1000000   +  37500(surcharge)
        printf("15%% tax slab\n");
        printf("Income per month is %d\n",(income - (tax15 + tax15/25))/12);}

    else if(income > 1000000  &&  income <= 1250000){
        int tax20=(((income-1000000)/5)+75000);
        printf("Net income is %d\n",income - (tax20 + tax20/25));
        printf("Tax for the income is %d\n",tax20 + tax20/25);         // 20% tax for 1000000 to 1250000   +  75000(surcharge)
        printf("20%% tax slab\n");
        printf("Income per month is %d\n",(income - (tax20 + tax20/25))/12);}

    else if(income > 1250000  &&  income <= 1500000){
        int tax25=(((income-1250000)/4)+125000);
        printf("Net income is %d\n",income - (tax25 + tax25/25));
        printf("Tax for the income is %d\n",tax25 + tax25/25);        // 25% tax for 1250000 to 1500000   +  125000(surcharge)
        printf("25%% tax slab\n");
        printf("Income per month is %d\n",(income - (tax25 + tax25/25))/12);}

    else if(income > 1500000){
        int tax30=((((income-1500000)*3)/10)+187500);
        printf("Net income is %d\n",income - (tax30 + tax30/25));
        printf("Tax for the income is %d\n",tax30 + tax30/25);         //30% tax for more than 1500000  +  187500(surcharge)
        printf("30%% tax slab\n");
        printf("Income per month is %d\n",(income - (tax30 + tax30/25))/12);}
    
    
    return 0;

}