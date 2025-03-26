#include <stdio.h>
#include<string.h>
int countchar(char string[]);
int main()
{
    char string[50], l;
    printf("Enter a string:");
    gets(string);
    l = countchar(string);
    printf("No. of character in string = %d", l);
    return 0;
}
int countchar(char string[])
{
    int i = 0, count = 0;
    while(string[i]!='\0'){
        
        i++;
    }
    return i;
}