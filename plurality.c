#include <cs50.h>
#include <string.h>
#include <stdio.h>

bool vote(string name);
void print_winner(void);

#define MAX 9

typedef struct
{
    string name;
    int vote;
}
Candidate;

Candidate candidate[MAX];

int candidate_count;

int main(int argc, string argv[])
{
    if(argc<2)
    {
        printf("Invalid input.Usage: Plurality [candidates name1,....]");
        return 1;
    }

    candidate_count=argc-1;

    if(candidate_count>MAX)
    {
        printf("Maximum number of candidate:%i\n",MAX);
        return 2;
    }

    for(int i=0; i<candidate_count; i++)
    {
        candidate[i].name=argv[i+1];
        candidate[i].vote=0;
    }

     int counting_voters=get_int("Number of voters:");
     for(int j=0; j<counting_voters; j++)
     {
         string name=get_string("VOTE:");

        if(!vote(name))
        {
         printf("Invalid Vote: Usage type name of given candidate\n");
        }
     }

     print_winner();
}

bool vote(string name)
{
   for(int i=0;i<candidate_count;i++)
     {
         if(strcmp(name,candidate[i].name)==0)
         {
         candidate[i].vote++;
         return true;
         }
     }
     return false;

}

void print_winner(void)
{
    int MaxVote=0;
    for(int i=0;i<candidate_count;i++)
    {
        if(candidate[i].vote>MaxVote)
        {
            MaxVote=candidate[i].vote;

        }
    }
    for(int i=0;i<candidate_count;i++)
    {
        if(candidate[i].vote==MaxVote)
     {
        printf("%s\n",candidate[i].name);

     }
    }
}