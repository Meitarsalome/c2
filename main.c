#include <stdio.h>
#include "myBank.h"

int main()
{
    printf("welcome\n");
    char func;
    int numberA;
    double rate;
    double amount;
    int  flagExit=0;

    do
    {
       printf("Transaction type? 'O','B','D', 'W', 'C', 'I', 'P', 'E'  : \n");
        scanf(" %c",&func);
        switch (func)
        {
            case 'O':
            printf("initial deposit:\n");
            scanf("%lf", &amount);
            openAcount(amount);
            break;
           
            case 'B':
            printf("Account Number? \n");
            scanf("%d",&numberA);
            balanceAcount(numberA);
            break;

            case 'D':
            printf("Account Number?\n ");
            scanf("%d",&numberA);
             printf("Amount? \n");
            scanf("%lf",&amount);
            depositAcount(amount, numberA);
            break;
            
            case 'W':
            printf("Account Number?\n ");
            scanf("%d",&numberA);
             printf("Amount? ");
            scanf("%lf",&amount);
            WithdrawalAcount(amount, numberA);
            break;

            case 'C':
            printf("Account Number? \n");
            scanf("%d",&numberA);
            closeAcount( numberA);
            printf("We close your account \n");
            break;

            case 'I':
            printf("Ilterest rate? \n");
            scanf("%lf",&rate);
            interestAcount( rate);
            break;

            case 'P':
            printAllAcount( );
            break;
        
            case 'E':
            flagExit=1;
            closeAllAcount( );
            printf("We close all your opens accounts\n");
             printf("See You Soon :)\n");
            
            break;

         default :
          printf("the Transaction isn't exist\n");
          break;
        }
    }while(flagExit==0);
    return 0;
}