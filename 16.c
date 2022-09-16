#include <stdio.h>
int main()
{
    int LEN;
    scanf("%d", &LEN);
    int num[LEN];
    for (int i = 0; i < LEN; i++)
        scanf("%d", &num[i]);
    for (int i = 0; i < LEN; i++)
    {
        if(num[i]%2 == 1)
            printf("%d ", num[i]);
    }
    printf("\n");
    int count1 = 0, count2 = 0;;
    for (int i = 0; i < LEN; i++)
        if(num[i]%2 == 0)
            count1++;//一共幾個偶數
    //printf("count = %d\n", count1);
    for (int i = 0; i < LEN; i++)
    {
        if((count1 == count2+1) && (num[i]%2 == 0))//如果是最後一個數 後面不加上空格
        {
            printf("%d", num[i]);   
            break;
        }
        if(num[i]%2 == 0)
        {
            printf("%d ", num[i]);
            count2++;
        } 
    }
}