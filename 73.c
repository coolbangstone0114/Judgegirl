#include <stdio.h>

int main()
{
    int size,zero=0,one=0,two=0;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%3==0){zero+=1;}
        if(arr[i]%3==1){one+=1;}
        if(arr[i]%3==2){two+=1;}
    }
    printf("%d %d %d",zero,one,two);
}