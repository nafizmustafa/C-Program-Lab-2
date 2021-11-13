#include<stdio.h>
int function(int base,int power)
{
    if(power>=1){
        return (base*function(base,power-1));
    }//end if
    else{
        return 1;
    }//end else
}//end function
int main()
{
    int base,power,result;
    printf("Enter Base & Power Number :");
    scanf("%d%d",&base,&power);
    result= function(base,power);
    printf("Answer = %d",result);
    return 0;
}
