#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d\n%d\n%d", &a,&b,&c);
    printf("%d\n%d", (2*a*b+2*a*c+2*b*c), (a*b*c));
}