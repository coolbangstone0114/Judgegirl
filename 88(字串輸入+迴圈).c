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
    int A_value=0, B_value=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if(s1[i] == s2[j])
            {
                if(i == j)
                    A_value++;
                else
                    B_value++;
            }
        }
    }
    printf("%dA%dB", A_value, B_value);
}