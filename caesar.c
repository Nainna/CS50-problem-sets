#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>


int main(int argc,string argv[])
{
    if(argc>=2 )

   {

    int a= atoi(argv[1]);
       argv[1] =get_string("Plaintext:");
       printf("Cipertext:");

       {
            for(int i=0, n=strlen (argv[1]); i<n; i++)
            {
               if( isalpha (argv[1][i] )) //alphabet
                {
                   if(isupper (argv[1][i])) //uppercase
                     {
                      printf("%c",(argv[1][i]+a-65)%26+65);
                     }
                   else
                   {
                    printf("%c",(argv[1][i]+a-97)%26+97);
                   }
                }
            else  //for non-alphabet
               {
                printf("%c",argv[1][i]);
               }

            }
       }


    }

   else //error in argument
   {
        printf("Usage: ./caesar key number");
    }
 printf("\n");


}
