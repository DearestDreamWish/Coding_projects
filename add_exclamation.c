//Add an exclamation after the input.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *shout(char s[]);


int main(void){
  char str[100];
  printf("You have maximum 100 characters to write, which I will add an exclamation to: ");
  gets(str);
  printf("You wrote: %s",str);
  printf("\n[+]Adding exclamation.\n");
  char *str2 = shout(str);
  printf("%s",str2);
  free(str2);
  return 0;
}

//Function adds an exclamation at the least significant.
char *shout(char s[]){
  char *s2 = (char *) malloc(strlen(s)+2);
  if(s2 == NULL){
    printf("Error!\n");
    exit(EXIT_FAILURE);
  }
  int i;
  for(i=0;s[i]!='\0';i++){
    s2[i]=s[i];
  }
  s2[i]='!';
  s2[i+1]='\0';
  
  return s2;
}