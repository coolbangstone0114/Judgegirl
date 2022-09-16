#include <stdio.h>
//利用建立坐標系將終點設為(0,0) 每次遞迴向下或向左-1

int FindAllWays(int x, int y)
{
    if(x==0)
    {
        return 0;
    }
    if (y==0)
    {
        return 0;
    }
    
    return 1 + FindAllWays(x-1,y) + FindAllWays(x,y-1);
}

int main()
{
    int x, y, output;
    scanf("%d %d",&x,&y);
    output = FindAllWays(x-1,y-1)+1;
    printf("%d",output);
}