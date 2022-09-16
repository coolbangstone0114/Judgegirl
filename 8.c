#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, temp, swapdone;
    int element=3;
    int goals[element];
    for(i=0; i<element; i++)
    {
        scanf("%d", &goals[i]);
    }
    while(1)
    {
        swapdone=0;
        for(i=0; i<element-1; i++)
        {
            if(goals[i]>goals[i+1])
            {
                int temp = goals[i];
                goals[i] = goals[i+1];
                goals[i+1] = temp;
                swapdone = 1;
            }
        }
        if(swapdone==0)
        {
            break;
        }
    }
    if((goals[2]<goals[0]+goals[1]))
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}