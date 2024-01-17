#include<stdio.h>
int main()
{
    int num = 10;
    int *p1 = &num;
    int *p2 = p1;
    (*p1)++;
    (*p2) += 5;
    int r = num;
    printf("%d", r--);
    return 0;
}