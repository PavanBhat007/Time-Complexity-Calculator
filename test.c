#include <stdio.h>

void main()
{
    printf("Hello world !!");

    for(int i=0; i<10; i++)
    {
      printf(i+1);
    }

    for(int j=0; j<10; j++)
    {
      for(int k=10; k>0; k--)
      {
        printf(j, k);
      }
    }
}