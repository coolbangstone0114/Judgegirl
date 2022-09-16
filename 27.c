#include <stdio.h>

int main()
{
    int a,b,c,d,e,surface,volume;
    int A,B,C;
    scanf("%d\n%d\n%d\n%d\n%d",&a,&b,&c,&d,&e);
    A = a-2*e; //a的小邊
    B = b-2*e; //b的小邊
    C = c-2*e; //c的小邊
    surface = 2*a*c + 2*a*b + 2*b*c + (A*d*2+C*d*2)*2 + (B*d*2+C*d*2)*2 + (A*d*2+B*d*2)*2;
    volume = a*b*c - 2*A*C*d - 2*A*B*d - 2*B*C*d;
    printf("%d\n%d", surface, volume);
}