#include <stdio.h>

int main()
{
    int size,M;
    scanf("%d",&size);
    //printf("size=%d\n",size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    scanf("%d",&M);
    printf("M=%d\n",M);
    int ouputarray[M];
    for (int i = 0; i < M; i++)//初始化
        ouputarray[i] = 0;
    for (int i = 0; i < size; i++)
    {
        int temp=0;
        temp = array[i]%M;
        ouputarray[temp] += 1;
    }
    for (int i = 0; i < M; i++)
        printf("%d\n",ouputarray[i]);
    
}