#include <stdio.h>

int main()
{
    int size,intesec=0,T=0,turn=0,deadend=0;
    scanf("%d",&size);
    int arr[size][size];
    int test[size][size];
    for(int i=0;i<size;i++)//讀取地圖
    {
        for(int j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}