#include <stdio.h>
#include<cs50.h>
#include<string.h>

// define la estructura del arreglo multidemensional
typedef struct
{
    string name;
    string number;

}
person;

int main(void)
{
   person people[4];

   people[0].name= "EMMA";
   people[0].number= "6468465555111465";

   people[1].name= "RODRIGO";
   people[1].number= "6444465465";

   people[2].name= "BRIAN";
   people[2].number= "646855465";

   people[3].name= "DAVID";
   people[3].number= "6436565465";




    for (int i =0; i<4; i++)
    {
        if (strcmp ( people[i].name,"EMMA")==0)
        printf("found %s\n", people[i].number);
        return 0;
    }

    printf("Not Found\n");
    return 1;

}