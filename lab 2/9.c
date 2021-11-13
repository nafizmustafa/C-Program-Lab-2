#include<stdio.h>
int gcd(int num1,int num2)
{
    if(num2!=0)
    {
        return gcd(num2,num1%num2);
    }//end if
    else{
        return num1;
    }//end else
}//end gcd
int main()
{
    int num1,num2;
    printf("Enter two Number :");
    scanf("%d%d",&num1,&num2);
    printf("GCD = %d",gcd(num1,num2));
    return 0;
}
