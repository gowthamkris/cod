
#include <stdio.h>
int main()
{
    int n11, n21, minMultiple1;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n11, &n21);
    minMultiple = (n1>n2) ? n11 : n21;
    while(1)
    {
        if( minMultiple1%n11==0 && minMultiple1%n21==0 )
        {
            printf("The LCM of %d and %d is %d.", n11, n21,minMultiple1);
            break;
        }
        ++minMultiple1;
    }
    return 0;
}
