#include <stdio.h>
#include <cs50.h>

 float average (int length, int array[]); // se declara q existe una funcio]n pero mas abajo de definen las acciones


int main (void)
{
    int n = get_int("Number of Scores: ");
    int scores[n];

     for (int i =  0; i < n; i++ )

     {
         scores[i] = get_int("Score %i: ",i+1);

     }

    //int score1=72;
    //int score2= 73;
    //int score3=33;

    printf("Average: %.1f\n",average(n,scores));
  }

    float average(int length, int array[])
    {
        int sum= 0;
        for (int i=0; i < length; i++ )

        {
             //sum = sum + array[i];  old school same  result like nextone ----
            sum+= array[i];
        }

        return (float) sum / (float) length;

    }


