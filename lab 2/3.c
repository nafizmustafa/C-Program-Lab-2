#include<stdio.h>
int take(int n)
{
    if(n>=1)
    {
        return (n + take(n-1));
    }//end if
    else{
        return n;
    }//end else
}//end fun.
int main()
{
    int num;
    printf("Enter Number :");
    scanf("%d",num);
    printf("Sum : %d",take(num));
    return 0;
}
