#include<stdio.h>

int main()
{
    int chicken,rabbit,crab;
    int s,f,t;
    scanf("%d%d%d",&s,&f,&t);
    //printf("%d %d %d",s,f,t);
    crab = s-t;
    chicken = 0.5*(-f-4*t+8*s);
    rabbit = t-chicken;
    printf("%d\n%d\n%d",chicken,rabbit,crab);
}