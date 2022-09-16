#include<stdio.h>
#define ARRAYLEN 100
int main()
{
    int x[ARRAYLEN], y[ARRAYLEN], count=0, i=0, temp;
    while (scanf("%d", &temp) != EOF)
    {
        if(i%2==0)
            x[i] = temp;
        else
            y[i] = temp;
        i++;
    }
    count = i/2;//點數量
    printf("count : %d\n", count);
    for (int i = 0; i < count; i++)
        printf("(%d, %d)\n", x[i], y[i]);
    
}