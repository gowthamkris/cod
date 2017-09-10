#include <stdio.h>
int main()
{
    int n1, n2, i, g1;
 scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            g1 = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, g1);

    return 0;
}
