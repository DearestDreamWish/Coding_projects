//Takes a word and finds the plural version and gives the single and plural forms.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* plural(char s[]);

int main(){
    char str[100];
    gets(str);
    printf("Single: '%s'\n",str);
    char* str_plural=plural(str);
    printf("Plural: '%s'",str_plural);
    free(str_plural);
}

char* plural(char s[]){
    int max_extension_len = 3; 
    int len = strlen(s);
    char * out = (char *) malloc(len + max_extension_len);

    // Copy string
    // "chair\0"
    // out = "chair   "
    int cur = 0;
    for (cur = 0; cur < len; cur++) {
        out[cur] = s[cur];
    }

    if(s[len-1] == 'y'){
        out[len-1]='i';
        out[len]='e';
        out[len+1]='s';
        out[len+2]='\0';
    } else if (s[len-2]=='c' && s[len-1]=='h'){
        out[len]='e';
        out[len+1]='s';
        out[len+2]='\0'; 
    } else if (s[len-2]=='s' && s[len-1]=='h'){
        out[len]='e';
        out[len+1]='s';
        out[len+2]='\0';
    }
    else if (s[len-1]=='s'){
        out[len]='e';
        out[len+1]='s';
        out[len+2]='\0';
    }
    else{
        out[len]='s';
        out[len+1]='\0';        
    }
  return out;
}