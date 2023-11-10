//Basic counter for lower cases in the given string from user input. 
//Also gives a pointer to the first lower case letter so the first lower case letter and afterwards are shown.
#include<ctype.h>
#include<stdio.h>

int counter(char s[]);
char* first_lower_letter(char s[]);

//Main function.
int main(){
  char str[100];
  printf("You have maximum 100 characters to write, which I will how many lower cased letters there are: ");
  gets(str);
  printf("%s\n",str);
  int counted = counter(str);
  printf("There are %d lower cased letters in %s.\n",counted,str);
  printf("%s",first_lower_letter(str));
  return 0;
}

//Counter function
int counter(char s[]){
  int i = 0;
  int counted=0;
  int first=0;
  while(s[i] != '\0'){
    if(islower(s[i])>0){
      if(first==0){
        first=1;
        printf("\nThe first lower case is %c.\n",s[i]);
      } else{counted++;}
    }
    i++;
  }
  return counted;
}

//Function for first lower case letter with afterwards letters shown.
char* first_lower_letter(char s[]){
    int i = 0;
  int counted=0;
  int first=0;
  char* first_lower=NULL;
  while(s[i] != '\0'){
    if(islower(s[i])>0){
      if(first==0){
        first=1;
        first_lower=&(s[i]);
        break;
      } else{counted++;}
    }
    i++;
  }
  return first_lower;
}