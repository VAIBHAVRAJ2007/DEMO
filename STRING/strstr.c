#include <stdio.h>
#include<string.h>
int main()
{
    char s1[50], s2[50];
    printf("Enter first string:");
    gets(s1);
    printf("Enter another string:");
    gets(s2);
    char *result = strstr(s1,s2);
    printf("%d", result-s1);

    return 0;
}