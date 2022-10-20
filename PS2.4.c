#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a<0)
        printf("check input");
    else if(a%2==1)
    printf("Odd");
    else if(a%2==0)
    printf("Even");
    return 0;
}
