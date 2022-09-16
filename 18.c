#include <stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int map[row][col];
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            scanf("%d",&map[i][j]);
    int up,down,left,right;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int target = map[i][j];
            up=0,down=0,left=0,right=0;
            if(j-1<0 || target>map[i][j-1])
                up=1;
            if(j+1==col || target>map[i][j+1])
                down=1;
            if(i-1<0 || target>map[i-1][j])
                left=1;
            if(i+1==row || target>map[i+1][j])
                right=1;
            if(up && down && left && right)
                printf("%d\n",map[i][j]);
        }
    }
    
}