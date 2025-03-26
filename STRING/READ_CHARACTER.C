#include<stdio.h>
int main()
{
    int n, c, i=0;
    printf("Enter number of characters\n");
    scanf("%d", &n);
    char a[n];
    while((c=getchar())!='\n')
    {
        if(i<n)
            a[i++] = c;
    }
    a[i] = '\0';
    printf("%s", a);
    return 0;
}