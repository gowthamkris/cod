#include <stdio.h>
 
int hcf(int, int);
 
int main()
{
    int a1, b1, r1;
 printf("Enter the two numbers to find their HCF: ");
    scanf("%d%d", &a1, &b1);
    result = hcf(a1, b1);
    printf("The HCF of %d and %d is %d.\n", a1, b1, r1);
 
    return 0;
}
 
int hcf(int a1, int b1)
{
    while (a1 != b1)
    {
        if (a1 > b1)
        {
            a1 = a1 - b1;
        }
        else
        {
            b1 = b1 - a1;
        }
    }
    return a1;
}
