#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if(a>b)
        printf("A is bigger");
    else if(a<b)
        printf("B is bigger");
    else if(a==b)
        printf("They are equal");
    return 0;
}
