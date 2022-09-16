#include <stdio.h>
#define STRINGLEN 10
int main()
{
    char s1[STRINGLEN], s2[STRINGLEN];
    scanf("%s", &s1);
    scanf("%s", &s2);
    //printf("%s ", s1);
    //printf("%s", s2);
    //printf("%c", s2[1]);
    int count=0;
    for (int i = 0; i < 6; i++)
        if(s1[0]==s2[i] && s1[1]==s2[i+1])
            count++;
    printf("%d", count);
}