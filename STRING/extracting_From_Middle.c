#include <stdio.h>
#include<string.h>
int main()
{
    char str[50], substr[50];
    int i, j, n,pos;
    printf("Enter a string:");
    gets(str);
    printf("Enter length of substring:");
    scanf("%d", &n);
    printf("Enter position of substring:");
    scanf("%d", &pos);
    i = pos-1, j = 0;
    if (pos <= 0 || pos > strlen(str)) {
    printf("Invalid position!\n");
    return 1; 
}

    while (str[i] != '\0' && n > 0)
    {
        substr[j] = str[i];
        i++,j++,n--;
    }
    substr[j] = '\0';
    printf("Substring is = %s", substr);
    return 0;
}