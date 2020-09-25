#include <cs50.h>
#include <stdio.h>

int main()
{
    int n;
    do
    {
        n=get_int("height:");
    }

    while(n>8 || n<1);

           for(int i=0; i<n; i++)//for row
            {
                    for(int k=(n-1);k>i;k--)//space
                    {
                        printf(" ");
                    }
              for(int j=0;j<i;j++)     //after spaces print #
                {
                printf("#");
                }
            printf("\n");
            }

}