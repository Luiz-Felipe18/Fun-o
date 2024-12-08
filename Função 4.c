#include<stdio.h>

 int Par (int a, int b, int c)
 {
     int par = 0;

     if (a % 2 == 0)
     {
         par++;
     }

         if(b % 2 == 0)
         {
             par++;
         }

             if(c % 2 == 0)
             {
                 par++;
             }



     return par;
 }

 int main()
 {
   int a, b, c;

   scanf("%d %d %d", &a, &b, &c);

   int Npar = Par(a, b, c);

   printf("%d", Npar);


  return 0;
 }
