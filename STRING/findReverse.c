#include <stdio.h>
#include<string.h>
int main()
{
    char str[50], rs[50];
    int count = 0, i = 0, j = 0;
    printf("Enter a string:");
    gets(str);
    while(str[j]!='\0')
    {
        count++;
        j++;
    }
    j = count - 1;
    while(j>=0)
    {
        rs[i] = str[j];
        j--;
        i++;
    }
    rs[i] = '\0';
    printf("Reverse of %s = %s\n", str, rs);
    return 0;
}