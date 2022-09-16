#include<stdio.h>

int TriLen(int x1,int y1,int x2,int y2)//計算邊長平方
{
    return ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

int main()
{
    int n;
    scanf("%d",&n);
    int triangle[n][6]; //n*6矩陣
    for(int i=0;i<n;i++)//讀取矩陣
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&(triangle[i][j]));
        }
    }
    int len[3][n]; //紀錄三角形三邊長
    for(int i=0;i<n;i++)
    {
            len[0][i] = TriLen(triangle[i][0],triangle[i][1],triangle[i][2],triangle[i][3]);
            len[1][i] = TriLen(triangle[i][0],triangle[i][1],triangle[i][4],triangle[i][5]);
            len[2][i] = TriLen(triangle[i][4],triangle[i][5],triangle[i][2],triangle[i][3]);
    }
    int temp;
    for(int i=0;i<n;i++)//只將最大放最後
    {
        for(int j=0; j<2; j++)
        {
            if(len[j][i]>len[j+1][i])
            {
                temp = len[j][i];
                len[j][i] = len[j+1][i];
                len[j+1][i] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(len[2][i]==len[1][i] || len[1][i]==len[0][i] || len[2][i]==len[0][i])//等腰
        {
            printf("isosceles\n");
            continue;
        }
        else if(len[2][i]<(len[1][i]+len[0][i]))//銳角
        {
            printf("acute\n");
            continue;
        }
        else if (len[2][i]==len[1][i]+len[0][i])//直角
        {
            printf("right\n");
            continue;
        }
        else if(len[2][i]>(len[1][i]+len[0][i]))//鈍角
        {
            printf("obtuse\n");
            continue;
        }
    }
}