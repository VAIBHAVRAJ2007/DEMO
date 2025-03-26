#include <stdio.h>
#include<string.h>
char *copy(char s1[], char s2[]);
int countchar(char s2[]);
int main()
{
    char s1[50], s2[50];
    int l;
    printf("Enter a string:");
    gets(s2);
    copy(s1,s2);
    l = countchar(s2);
    printf("First string s2=%s\n", s2);
    printf("Second string s1=%s\n", s1);
    printf("No. of character in string = %d", l);
    return 0;
}
char* copy(char s1[],char s2[])
{
    int i = 0;
    while(s2[i]!='\0'){
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return s1;
}
int countchar(char s2[])
{
    int i = 0, count = 0;
    while(s2[i]!='\0'){
        i++;
    }
    return i;
}