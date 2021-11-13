#include<stdio.h>
int i;
int PrimeNumber(int n)
{
    if(i==1)
    {
        return 1;
    }//end if
    else if(n%i==0)
    {
        return 0;
    }//end else if
    else{
        i=i-1;
        PrimeNumber(n);
    }//end else
}//end PrimeNumber
int main()
{
    int n,prime;
    printf("Enter The Number :");
    scanf("%d",&n);
    i=n/2;
    prime=PrimeNumber(n);
    if(prime==1)
    {
        printf("%d is a prime number\n",n);
    }//end if
    else{
        printf("%d is not a prime number\n",n);

    }//end else
    return 0;
}
