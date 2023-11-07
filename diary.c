//Diary or documentation program.

//Libraries
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>

//main code
int main(){
    //Variables
    FILE * FilePointer=NULL;
    char string[1000]; //string capacity.
    int flow=1;
    char change_flow;
    do
    {
        //date variable
        time_t t;
        //Calculates time.
        time(&t);

        //Checks file and creates it if doesn't exists adds at last the date and time to then close.
        if ((access("storage.txt",F_OK))==-1)
        {
            printf("File didn't exist.\nCreating storage file.");
            FilePointer=fopen("storage.txt","w");
            fclose(FilePointer);
            FilePointer=fopen("storage.txt","a");
            fputs(ctime(&t),FilePointer);
            fputs("\n",FilePointer);
            fclose(FilePointer);
        }
        else if ((access("storage.txt",F_OK))==0) //If file exists get input
        {
            printf("File exists. Recent save:");
            
            //Append date and time.
            FilePointer=fopen("storage.txt","a");
            fputs("\n",FilePointer);
            fputs(ctime(&t),FilePointer);
            fputs("\n",FilePointer);
            fclose(FilePointer);
            
            //Open to read recent content.
            FilePointer=fopen("storage.txt","r");
            char line[1000];
            while (fgets(line, sizeof(line), FilePointer) != NULL) {
                printf("%s", line); //Prints content of file.
            }
            fclose(FilePointer);

            //Saves input in storage.txt
            FilePointer=fopen("storage.txt","a");
            printf("You have 1000 characters for each input. What to save?");
            scanf(" %s",string);
            fputs(string,FilePointer);
            fclose(FilePointer);

            //Choice to continue or exit
            printf("Want to exit? Press [e] else continue and press[c]");
            scanf(" %c",&change_flow);
            if (change_flow == 'e') {
                flow = 0;
            } else {
                flow = 1;  // Reset flow to 1 to continue the loop
            }
        }
    } while (flow==1);
    return 0;
}