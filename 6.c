#include <stdio.h>

int main()
{
    int input,a,b,c;
    scanf("%d",&input);
    printf("%d\n%d\n%d",((input%1000-input%100)/100),((input%100-input%10)/10),(input%10));
}