#include<stdio.h>

int main()
{
    int chicken,rabbit,crab;
    int s,f,t;
    scanf("%d%d%d",&s,&f,&t);
    if(f%2==1)
    {
        printf("0");//出現小數
        return 0;
    }
    //printf("%d %d %d",s,f,t);
    crab = s-t;
    chicken = 0.5*(-f-4*t+8*s);
    rabbit = t-0.5*(-f-4*t+8*s);
    if(chicken<0 || rabbit<0 || crab<0)
    {
        printf("0");
    }
    else
    {
        printf("%d\n%d\n%d",chicken,rabbit,crab);
    }
}