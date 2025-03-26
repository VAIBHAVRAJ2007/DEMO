#include <stdio.h>
#include<string.h>
char* concat(char s1[], char s2[]);
int main()
{
    char s1[50], s2[50];
    printf("Enter first string:");
    gets(s1);
    printf("Enter another string:");
    gets(s2);
    concat(s1,s2);
    printf("New string=%s", s1);
    return 0;
}
char* concat(char s1[], char s2[])
{
    int i = 0, j = 0;
    while(s1[j]!='\0')
        j++;
    while(s2[i]!='\0')
    {
        s1[j] = s2[i];
        i++;
        j++;
    }
    s1[j] = '\0';
    return s1;
}