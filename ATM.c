#include<stdio.h>
int main(){
    int num,code,amount,ID,cash,choice,s=1,c=0,acc,pin;
    char option;
    printf("<><><><>><><><>< WELCOME <><><><><><><><>\n");
    printf(":::::::::enter your card::::::::: \n");
    printf("----FOR VERIFYING BARCODE---\n");
     scanf("%d",&code);
     printf("please wait for verify the code\n ");
     printf("*************************************\n");
    if(code!=1000000000){
    printf("verified!\n");
    }
    else{
        printf("please check your card\n");
    }
    printf("   NATIONAL OR INTERNATIONAL\n   ");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~\n");
    int NATIONAL=1;
    int INTERNATIONAL=0;
    printf("'1' FOR NATIONAL & '0' FOR INTERNATIONAL\n ");
    printf("Enter your choice: ");
    scanf("%d", &choice);
     if (choice == 1) {
        printf("NATIONAL\n");
    }
    else if (choice == 0) {
        printf("INTERNATIONAL\n");
    }
    else {
        printf("criteria not match\n");
        printf("please take your card\n");
    }
    printf("ENTER YOUR 4 DIGIT PIN NUMBER::\n");
    scanf("%d",&num);
    if(num<=10000){
        printf("-----please wait-----\n");
    }
    else{
        printf("Invaild PIN number\n");
        printf("please re check your PIN number\n");
    }
    printf("select your options\n");
    printf("1-WITHDRAWAL\t ");
    printf("2-BANKING\t ");
    printf("3-PIN CHANGE\t ");
    printf("4-BALANCE INQUIRY\t ");
    printf("5-FUND TRANSFER\t ");
    printf("6-DEPOSITS\t ");
    printf("7-SERVICE\n");
    scanf("%d",&option);
    switch(option){
      case 1: 
                printf("<><><><>><><><><WELCOME <><><><><><><><>\n");
                printf("WITHDRAWAL\n");
                printf("****************\n");
                printf("account type\n");
                printf("savings\n");
                printf("current\n");
                printf("'1' FOR SAVINGS & '0' FOR CURRENT\n");
                if(s==1){
                    scanf("%d",&s);
                    printf("savings\n");
                }
                else if(c==0){
                    scanf("%d",&c);
                    printf("current\n");
                }
                printf("available ATM Balance 500000$\n");
                printf("AMOUNT\n");
                scanf("%d",&amount);
                if(amount>=500000){
                        printf("unavilable amount\n");
                }
                else{
                     printf("please wait\n");
                }
                printf("TAKE YOUR CASH AND CARD\n");
                printf("THANK YOU\n");
                break;
        case 2:  
                printf("<><><><>><><><><WELCOME <><><><><><><><>\n");
                printf("BANKING\n  ");
                printf("****************\n");
                printf("SET PIN\t  ");
                printf("MINI STATEMENT\n");
                 printf("for SET PIN--click '1'\n");
                printf("for MINI STATEMENT--click '0'\n");
                printf("enter your choice\n");
                scanf("%d",&choice);
                if(choice==1){
                  printf("enter your 10 digit account number\n");
               scanf("%d",&acc);
               printf("ENTER THE 6 DIGIT OTP\n");
               scanf("%d",&num);
               printf("SET NEW PIN\n");
               scanf("%d",&pin);
               printf("SUCCESFULLY PIN CHANGE\n");
                }
                else if(choice==0){
                    printf("ENTER YOUR  4 DIGIT PIN NUMBER\n");
                    scanf("%d",&num);
                    printf("*****PLEASE WAIT******\n");
                    printf("COLLECT YOUR RECIPT\n");
                    printf("THANK YOU\n");
                }
                    else {
                        printf("temporary issu\n");
                    printf("/////////////////\n");
                    printf("TAKE YOUR CARD\n");
                    printf("PLEASE TRY LATER\n");
                    }
                    break;
        case 3:
                printf("<><><><>><><><><WELCOME <><><><><><><><>\n");
                printf ("PIN CHANGE\n");
                printf("*****************\n");
                printf("ENTER THE OLD 4 DIGIT PIN NUMBER\n");
                scanf("%d",&num);
                printf("ENTER THE NEW 4 DIGIT PIN NUMBER\n");
                scanf("%d",&num);
                printf("PIN CHANGE SUCCESFUL1\n");
                printf("TAKE YOUR CARD\n");
                printf("THANK YOU\n");
                break;
        case 4:
                printf("<><><><>><><><><WELCOME <><><><><><><><>\n");
                printf("BALANCE INQUIRY\n");
                printf("******************\n");
                printf("account type\n");
                printf("savings\n");
                printf("current\n");
                printf("'1' FOR SAVINGS & '0' FOR CURRENT\n");
                if(s==1){
                    scanf("%d",&s);
                    printf("savings\n");
                }
                else if(c==0){
                    scanf("%d",&c);
                    printf("current\n");
                }
                printf("ENTER THE PIN NUMBER\n");
                scanf("%d",&num);
                printf("PRINT RECIPT\n");
                printf("FOR YES PRESS '1'\n");
                printf("FOR NO PRESS '0'\n");
                printf("ENTER YOUR CHOICE::\n");
                scanf("%d",&choice);
                if(choice==1){
                     printf("PLEASE WAIT RECIPT WILL BE PRINTING\n");
                     printf("####################\n");
                }
                else if(choice==0){
                        printf("PLEASE WAIT\n");
                        printf("###################\n");
                }
                printf("YOUR BALANCE\n");
                printf("$$$$$$$\n");
                printf("TAKE YOUR CARD\n");
                printf("THANK YOU\n");
                break;
        case 5:
                printf("<><><><>><><><><WELCOME <><><><><><><><>\n");
                printf("FUND TRANSFER\n");
                printf("******************\n");
                printf("ENTER YOUR ACCOUNT NUMBER\n");
                scanf("%d",&num);
                printf("TRANSDER ID\n");
                scanf("%d",&ID);
                printf("Select Amount\n");
                scanf("%d",&amount);
                printf("ENTER YOUR 4 DIGIT PIN NUMBER\n");
                scanf("%d",&num);
                if(amount<=300000){
                    printf("please wait\n");
                    printf("~~~~~~~~~~~~~~~\n");
                    printf("TRANSFER SUCCESFUL\n");
                }
                else{
                    printf("please check your amount\n");
                }
                printf("TAKE YOUR CARD\n");
                printf("THANK YOU\n");
                break;
        case 6:
                printf("<><><><>><><><><WELCOME <><><><><><><><>\n");
                printf("DEPOSITS\n");
                printf("*************\n");
                printf("ACCOUNT TYPE\n");
                printf("SAVINGS\t    ");
                printf("CURRENT\n");
                printf("'1' FOR SAVINGS & '0' FOR CURRENT\n");
                if(s==1){
                    scanf("%d",&s);
                    printf("savings\n");
                }
                else if(c==0){
                    scanf("%d",&c);
                    printf("current\n");
                }
                printf("AMOUNT\n");
                scanf("%d",&amount);
                printf("ENTER YOUR 4 DIGIT PIN NUMBER\n");
                scanf("%d",&num);
                if(amount<=1000000){
                    printf("please wait\n");
                    printf("~~~~~~~~~~~~~~~~\n");
                    printf("DEPOSITS SUCCESFUL\n");
                }
                else{
                    printf("PLEASE CHECK YOUR AMOUNT\n");
                    printf("!!!!!!!!!!!!!!!!!!!!!\n");
                    }
                printf("TAKE YOUR CARD\n");
                printf("THANK YOU\n");
                break;
        case 7:
                printf("<><><><>><><><><WELCOME <><><><><><><><>\n");
                printf("SERVICE\n");
                printf("************\n");
                printf("ACCOUNT TYPE\n");
                printf("SAVINGS\t ");
                printf("CURRENT\n");
                printf("'1' FOR SAVINGS & '0' FOR CURRENT\n");
                if(s==1){
                    scanf("%d",&s);
                    printf("savings\n");
                }
                else if(c==0){
                    scanf("%d",&c);
                    printf("current\n");
                }
                printf("CASH DETAILS\t  ");
                printf("BANKING DETAILS\t ");
                printf("AVAILABLE CASH\n");
                printf("'0' FOR CASH DETAILS::\t");
                printf("'1' FOR BANKING DETAILS::\t");
                printf("'2' FOR AVAILABLE CASH::\n");
                printf("ENTER YOUR CHOICE::\n");
                scanf("%d",&choice);
                if(choice==0){
                printf("ENTER YOUR 4 DIGIT PIN NUMBER\n");
                 scanf("%d",&num);
                 printf("PLEASE WAIT\n");
                 printf("CURRENT CASH\n");
                 printf("________________\n");
                 printf("$$$$$$\n");
                }
                else if(choice==1){
                printf("ENTER YOUR 4 DIGIT PIN NUMBER\n ");
                scanf("%d",&num);
                printf("GO THE MAIN MENU AND SELECT THE OPTION\n ");
                printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
                }
                else if(choice==2){
                    printf("SEVINGS\t ");
                     printf("CURRENT\n");
                printf("'1' FOR SAVINGS & '0' FOR CURRENT\n");
                if(s==1){
                    scanf("%d",&s);
                    printf("savings\n");
                }
                else if(c==0){
                    scanf("%d",&c);
                    printf("current\n");
                }
                 printf("ENTER YOUR 4 DIGIT PIN NUMBER\n");
                 scanf("%d",&num);
                 printf("please wait\n");
                 printf("______________________\n");
                 printf("CURRENT AVAILABLE CASH\n");
                  printf("$$$$$$\n");
                }
                else{
                    printf("PLEASE CHECK YOUR OPTION\n");
                }
                printf("TAKE YOUR CARD\n");
                printf("THANK YOU\n");
                break;
        default: 
                printf("*********!!**!!**!!**!!**!!**!!!!!!*********\n");
                printf("we regret that this\n");
                printf("terminal is temporarily\n");
                printf("OUT OF SERVICE\n");
                printf("do not re enter your PIN number\n");
                printf("PLEASE RE CHECK YOUR OPTION\n");
                printf("THANK YOU\n");        
        }
        return 0;
}