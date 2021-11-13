#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,d1,d2;
    srand(time(0));
    scanf("%d",&n);
    if(n>=1 && n<=6)
    {
        printf("The 1st disk : %d\n",d1=(1+(rand()%6)));
        printf("The 2nd disk : %d\n",d2=(1+(rand()%6)));
        if(n==d1 && n==d2)
        {
            printf("WIN\n");
        }//end if
        else{
            printf("LOST\n");
        }//end else
    }//end main if
    else{
        printf("Enter valid number (1-6)");
    }//end main else
    return 0;
}
