#include<stdio.h>
int print(int num)
{
    if(num<1)
    {
        return 0;
    }//end if
    else{
        printf("Hello World\n");
        print(num-1);
    }//end else
}//end print
int main()
{
    int n;
    scanf("%d",&n);
    print(n);
}//end
