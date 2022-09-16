#include <stdio.h>

int main()
{
    int size,count=0,intesec=0,T=0,turn=0,deadend=0,up,down,left,right;
    scanf("%d",&size);
    int arr[size][size];
    for(int i=0;i<size;i++)//讀取地圖
    {
        for(int j=0;j<size;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<size;i++)//檢查所有元素
    {
        for(int j=0;j<size;j++)
        {   
            if(arr[i][j]==1)//如果是道路
            {
                count=0,up=0,down=0,left=0,right=0;
                if((i-1>=0)&&(arr[i-1][j]==1)&&(i-1<size))
                    count++;
                if((i+1>=0)&&(arr[i+1][j]==1)&&(i+1<size))
                    count++;
                if((j-1>=0)&&(arr[i][j-1]==1)&&(j-1<size))
                    count++;
                if((j+1>=0)&&(arr[i][j+1]==1)&&(j+1<size))
                    count++;
            if(i - 1 >= 0)
            	up = 1;
            if(i + 1 < size)
            	down = 1;
            if(j - 1 >= 0)
            	left = 1;       
            if(j + 1 < size)
            	right = 1;        
            if(a[i][j] == 1)
                if(count==4)
                    intesec++;
                if(count==3)
                    T++;
                if((count==2))
                {
                    if(arr[i - 1][j] == 1 && arr[i][j - 1] == 1 && up && left
                    || arr[i - 1][j] == 1 && arr[i][j + 1] == 1 && up && right
                    || arr[i + 1][j] == 1 && arr[i][j - 1] == 1 && down && left
                    || arr[i + 1][j] == 1 && arr[i][j + 1] == 1 && down && right)                        
                        turn++;
                }
                if(count==1)
                    deadend++;
            }
        }
    }
    printf("%d\n%d\n%d\n%d",intesec,T,turn,deadend);
}