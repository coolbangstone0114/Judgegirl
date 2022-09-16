#include <stdio.h>

int check(int input)
{
    if(input%15==0 && input%7!=0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{
    int input;
    scanf("%d", &input);
    printf("%d", check(input));
}