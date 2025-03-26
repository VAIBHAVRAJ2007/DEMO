#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of character");
    scanf("%d", &n);
    char a[n];
    fgets(a,n+1,stdin);
    puts(a);

    return 0;
}