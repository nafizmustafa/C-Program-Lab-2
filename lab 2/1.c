#include<stdio.h>
int range(int x, int y)
{
    int i,count=0;
    for(i=x;i<=y;i++)
    {
       if(i%5==0 && i%7==0)
       {
           count++;
       }//end if
    }//end for
    return count;
}//end fun.
int main()
{
    int num1,num2;
    printf("Enter The Range :");
    scanf("%d%d",&num1,&num2);
    printf("%d",range(num1,num2));
    return 0;
}
