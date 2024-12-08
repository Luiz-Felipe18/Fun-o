#include<stdio.h>

 int QuadradoouRetangulo (int b, int h)
 {
     if ( b == h )
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }

 int main()
 {
    int b, h;

    scanf("%d %d", &b, &h);

    int Forma = QuadradoouRetangulo(b, h);

    printf("%d", Forma);

  return 0;
 }
