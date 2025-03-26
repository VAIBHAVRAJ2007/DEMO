#include <stdio.h>

int main()
{
    char str[50], substr[50];
    int i, j, n;
    printf("Enter a string:");
    gets(str);
    printf("Enter length of substring:");
    scanf("%d", &n);
    i = 0, j = 0;
    while (i < n && str[i] != '\0')
    {
        substr[j] = str[i];
        i++;
        j++;
    }
    substr[j] = '\0';
    printf("Substring is = %s", substr);
    return 0;
}