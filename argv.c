#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    printf("hello, ");
    if(argc==2)
    {
    for(int i=0, n=strlen(argv[1]); i<n ; i++)
      {
        printf("%c",argv[1][i]);
      }
    }
    
}