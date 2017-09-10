#include <stdio.h>
int main()
{
    int n, r1 = 0, r2;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        remainder = n%10;
        r1= r1*10 + r2;
        n /= 10;
    }

    printf("Reversed Number = %d", r1);

    return 0;
}
