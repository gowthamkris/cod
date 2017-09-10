#include<stdio.h>
 
int main()
{
   int n, f1 = 0, s1 = 1, n1, c;
   scanf("%d",&n);
 for ( c = 0 ; c < n ; c++ )
   {
      if ( c <= 1 )
         n1 = c;
      else
      {
         n1 = f1 + s1;
         f1 = s1;
         s1 = n1;
      }
      printf("%d\n",n1);
   }
 
   return 0;
}
