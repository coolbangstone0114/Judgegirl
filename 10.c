#include<stdio.h>

int Power(int n,int power)
{
    int sum=1;
    if(power==0)
    {
        return 1;
    }
    else
    {
        for(int i=0;i<power;i++)
        {
            sum = sum*n;
        }
        if(power<0)
        {
            return (1/sum);
        }
        else
        {
            return sum;
        }
    }
}

int main()
{
    int n,power;
    scanf("%d\n%d",&n,&power);
    printf("%d",Power(n,power));
}