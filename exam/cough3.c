#include <cs50.h>
#include <stdio.h>

// mi propia funcion
void cough(int n); // truco para q C reconozca la funcion declarada posteriomente


int main(void)

{
   

   cough(3);

 

}

// funcion declarada  fuera de posicion normal
void cough( int n)

{
    for (int i =0; i <n; i++ )
    {
    printf("Cough\n");
    }
}
