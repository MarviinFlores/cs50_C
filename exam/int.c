#include <cs50.h>
#include <stdio.h>

int main(void)
{
  int age = get_int("whats your Age?\n");
  int days = age * 365 ;
  printf ("You are least %i days Old\n", days);
}


