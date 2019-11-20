#include <stdio.h>
#define size 50
double array [2][50]={{0},{0}};

void openAcount(double money)
{
	int IsOff=0;
	int i=0;
	while( (i<size) && (IsOff==0))
     {  
		if (array[1][i]==0)
        {
			IsOff=1;
			array[0][i] = money;
			array[1][i] = 1;
			printf("The account number is : %d \n", i+901); 
		}
		 i++;
	}
	 if (IsOff==0)
		printf("Our bank is full\n");
	return;
}

void balanceAcount(int numA)
{
	if (array[1][numA-901]==1)
	{
   		 printf("The balance of this account is:   %0.2f\n", array[0][numA-901]);
	}
	else
    	printf("The acount is close\n ");

	return ;
}


void depositAcount (double dep, int numA)
{
    if (array[1][numA-901]==1)
    {
        array[0][numA-901]+=dep;
        printf("The new balance of this account is:   %0.2f\n ", array[0][numA-901]);
    }
    else
        printf("The acount is close\n ");

return;
}


void WithdrawalAcount (double wit, int numA)
{
    if (array[1][numA-901]==1 )
    {
	    if (array[0][numA-901]-wit>=0 )
	    {
		    array[0][numA-901]-=wit;
		    printf("The new balance of this account is:   %0.2f\n ", array[0][numA-901]);
	    }
    else 
        printf("you dont have enough money\n");
	}
	else
   	 printf("The acount is close\n ");

return;
}

void closeAcount (int numA)
{
	if (array[1][numA-901]==1 )
	{
        array[0][numA-901]=0;
		array[1][numA-901]=0;
        }
    else
        printf("this account is already close\n");

return;
}


void interestAcount(double rate )
{
	double r;
	for (int i=0; i<size; i++)
	{
		if (array[1][i]==1 )
		{
			r= (array[0][i])*(rate/100);
			array[0][i]+=r;
		}
	}
	printf("We update the balance for everyone\n");
return;
}

void printAllAcount ()
{
    for (int i=0; i<size; i++)
    {
	    if (array[1][i]==1 )
	    {
	    	printf("The account number is :  %d  the balans is:   %0.2f\n" , i+901 , array[0][i]) ;
	    }
    }

return;
}


void closeAllAcount ()
{
    for (int i=0; i<size; i++)
    {
	    if (array[1][i]==1 )
	    {
	    	closeAcount(i+901);
	    }
	}
return;
}



