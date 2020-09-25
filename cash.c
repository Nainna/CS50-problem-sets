#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main()
{
    float n;
      int coin=0,cents,size;
    do
    {
        n=get_float("changed owed= ");
    }
    while( n<0);
    cents=round(n*100);
    int denomination[]={25,10,5,1};
    size=sizeof(denomination)/sizeof(int);
    for(int i=0;i<size;i++)
    {
        coin+=cents/denomination[i];
        cents%=denomination[i];
        printf("%i\n",coin);
        if(cents==0)//wont let waste of in further calculation by terminating loop
        {
         i=size;
        }
    }


}

