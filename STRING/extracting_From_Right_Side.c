#include <stdio.h>
#include<string.h>
int main()
{
    char str[50], substr[50];
    int i, j, n,l;
    printf("Enter a string:");
    gets(str);
    l=strlen(str);
    printf("Enter length of substring:");
    scanf("%d", &n);
    i = l-n, j = 0;
    while (str[i] != '\0')
    {
        substr[j] = str[i];
        i++,j++;
    }
    substr[j] = '\0';
    printf("Substring is = %s", substr);
    return 0;
}