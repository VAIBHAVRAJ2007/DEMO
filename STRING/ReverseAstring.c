#include <stdio.h>
int main()
{
    char str[50], temp;
    int count = 0, i = 0, j = 0;
    printf("Enter a string = ");
    gets(str);
    while(str[j]!='\0')
    {
        count++;
        j++;
    }
    j = count - 1;
    while (i<j)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        i++;
        j--;
    }
    str[count] = '\0';
    printf("Reverse string = %s", str);
    return 0;
}