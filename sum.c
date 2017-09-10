include <stdio.h>
int main()

{

        printf("Sum Calculator\n");
        printf("==============\n");
        printf("Enter the numbers you would like to calculate the sum of.\n");
        printf("When done, type '0' to output the results and quit.\n");

   float sum11,num11;

   do  

   {                                    
        printf("Enter a number:");
        scanf("%f",&num11);
        sum11+=num11;      
   }
  while (num11!=0);


   printf("The sum of the numbers is %.6f\n",sum11);

return 0;
}
