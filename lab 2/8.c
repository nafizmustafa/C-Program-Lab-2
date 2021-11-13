#include<stdio.h>
int function(int num1, int num2)
{
    return num1/num2;
}//end function
int memory(int num1,int num2)
{
    return num1%num2;
}//end memory
int main()
{
    int num1,num2=10000;
    printf("Enter the number between 1-32767 :");
     scanf("%d",&num1);
     while(num1!=0)
     {
         if(function(num1,num2)!=0){
            printf("%d ",function(num1,num2));
            num1=memory(num1,num2);
         }//end if
         num2/=10;
     }//end while
     return 0;
}
