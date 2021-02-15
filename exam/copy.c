#include <stdio.h>
#include  <ctype.h>
#include <cs50.h>
#include<stdlib.h>
#include<string.h>

int main (void)
{
   // string s = get_string("s:  ");

   // string t = s;
//t[0] = toupper (t[0]);

   // printf("%s\n",s);
   // printf("%s\n",t);

  char  *s = get_string("s:  ");

  char *t = malloc(strlen(s)+1); // malloc = memory allocation

  for (int i = 0, n = strlen(s); i<n+1; i++ )
   {
       t[i] = s[i];

   }

   t[1] = toupper (t[1]);

   printf("%s\n",s);
   printf("%s\n",t);
   free(t); // libera espacio de memoria // help50 valgrind ./copy = detalla la ejecucion del programa en mem
   


}
