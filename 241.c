#include <stdio.h>
//直接用點斜式硬爆

int CrossProduct(int vecX1, int vecY1, int vecX2, int vecY2)
{
    if(vecX1*vecY2 - vecX2*vecY1>=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int x0=0,y0=0,flag;
    int x1,y1,x2,y2,x3,y3,x4,y4;
    scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    flag = CrossProduct(x1,y1,x2,y2) + CrossProduct(x2,y2,x3,y3)+ CrossProduct(x3,y3,x4,y4)+ CrossProduct(x4,y4,x1,y1);
    if(flag==4)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
    //printf("%d %d %d %d %d %d %d %d",x1,y1,x2,y2,x3,y3,x4,y4);
}