#include<stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    if(a<0)
        printf("Please take a non negative integer:");
    else if (a<=30)
        printf("F");
    else if (a<=39)
        printf("D");
    else if (a<=49)
        printf("C");
    else if (a<=59)
        printf("B");
    else if (a<=69)
        printf("A-");
    else if (a<=79)
        printf("A");
    else if (a<=100)
        printf("A+");
    else
        printf("Input Error");
    return 0;
}
