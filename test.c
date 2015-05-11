#include "stdio.h"
#include "string.h"
int main (){
  /*char *test="12345678";*/
  char *test[10];
  test[0]="123";
  /*printf("%s", test[0]);*/
  char str[]="00:22:33:4B:55:5A";
  char str1[]="aa:bb";
  char *delim = ":";
  char * pch;
  int i=0;
  printf ("Splitting string \"%s\" into tokens:\n",str);
  pch = strtok(str,delim);
  printf ("%s\n",pch);
  //while (pch != NULL)
  {
    printf ("%s\n",pch);
    pch = strtok (NULL, delim);
  for(i=0;i<5;i++)
    printf("%c\n",pch[i]);
    pch = strtok (NULL, delim);
    printf ("%s\n",pch);
  for(i=0;i<5;i++)
    printf("%c\n",pch[i]);
  }
  return 0;

}
