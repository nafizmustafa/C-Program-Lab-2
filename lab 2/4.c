#include<stdio.h>
int AREA(float x);
float circle(float r)
{
  return 3.14159*r*r;
}//end circle
int main()
{
    float Area,r;
    printf("Radius of Circle :");
    scanf("%f",&r);
    Area=circle(r);
    AREA(Area);
    return 0;
}
int AREA(float x)
{
    if(x>25)
    {
        printf("Greater Than 25\n");

    }//end if
    if(x<25){
        printf("Less Than 25\n");
    }//end if
    return x;
}// end area

