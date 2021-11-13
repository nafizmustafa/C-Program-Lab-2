#include<stdio.h>
int lcm(int x,int y)
{
    static int z=1;
    if(z%x==0 && z%y==0)
    {
        return z;
    }//end if
    else{
        z++;
        lcm(x,y);
        return z;
    }//end else
}//end lcm
int main()
{
    int a,b,Lcm;
    printf("Enter Two Number :");
    scanf("%d%d",&a,&b);
    Lcm=lcm(a,b);
    printf("LCM : %d",Lcm);
    return 0;
}
