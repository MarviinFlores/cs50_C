#include <cs50.h>
#include <stdio.h>

// mi propia funcion
void cough(void); // truco para q C reconozca la funcion declarada posteriomente


int main(void)

{
    for ( int i = 0; i <5; i++ )
{
   cough();

}

}

// funcion declarada  fuera de posicion normal
void cough(void)
{
    printf("Cough\n");
}
