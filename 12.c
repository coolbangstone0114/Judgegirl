#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        printf("%d\n",i);
    }
    printf("%d\n",n);
    for(int i=n-1;i>0;i--)
    {
        printf("%d\n",i);
    }
}