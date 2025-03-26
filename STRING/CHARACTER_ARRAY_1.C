#include <stdio.h>

int main()
{
    char a[10];
    for (int i = 0; i < 10;)
        scanf("%c", &a[i++]);
    printf("%s", a);
    return 0;
}