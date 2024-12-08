#include<stdio.h>

 int Contando (int n)
 {
     for (int i = 1; i <= n; i++)
        printf("%d\n", i);
 }

 int main()
 {
   int n;

   scanf("%d", &n);

   Contando(n);


  return 0;
 }
