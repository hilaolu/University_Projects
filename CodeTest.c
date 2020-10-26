#include <stdio.h>
#include <math.h>
#include <stdlib.h>
long Fact(int n)
{
    int i;
    long result = 1;
    for (i = 2; i <= n;i++)
    {
        result = result * i;
    }
    return result;
}
int main()
{
    int a, b;
    long G;
    LJK:
        printf("Please input a and b:\n");
        scanf("%d,%d", &a, &b);
        if ((scanf("%d,%d", &a, &b) == 2) && (a >= b))
            G = Fact(a) / (Fact(b) * Fact(a - b));
        else
            goto LJK;
        printf("%ld", G);
        return 0;
}