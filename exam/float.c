#include<cs50.h>
#include<stdio.h>

int main (void)
{
    float price = get_float("Whats is the Price\n");
    printf("Your Total Price is %.2f.\n",price*1.0625);
}
                    
