#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a&&b>c)
        printf("A & B both are bigger");
    else if (a&&c>b)
    printf("A & C both are bigger");
    else if(b&&c>a)
        printf("B & C both are bigger");
    return 0;
}
