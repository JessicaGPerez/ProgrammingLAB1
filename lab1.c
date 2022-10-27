/*
 * Implement your solution in thi file
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX_LEN 100
#define FILENAME_SIZE 1024
#define MAX_LINE 2040
char readString ()
{
    FILE *file;
    char filename[FILENAME_SIZE];
    char buffer[MAX_LINE];

    int read_line = 0;

    printf("File:");
    scanf("%s", filename);

    printf("read line: ");
    scanf("%d", &read_line);

    file = fopen(filename,"r");

    if (file == NULL)
    {
        printf("error opening file./n");
        return 1;
    }

    bool keep_going = true;
    int current_line = 1;
    do
    {
       fgets(buffer, MAX_LINE, file);

       if (feof(file))
       {
           keep_going = false;
           printf("couldnt find it %d.\n", read_line);
    }
    else if (current_line == read_line)
    {
        keep_going = false;
        printf("line:\n%s", buffer);
    }
    current_line++;
    }while (keep_going);
    fclose(file);

    //printf("line:\n%s", buffer);


    //printf("line: \n%s", file);


    char message[MAX_LEN] = "code";
//char* readString(char* fileName);
    // msgPtr is now referring to a block of memory basically an array
    // Malloc willl actually allocate space in a heap space
    char* msgPtr = (char *)malloc(MAX_LEN*sizeof(char*));

    memset(msgPtr, '\0', sizeof(char)*MAX_LEN);
    strcpy(msgPtr, message);

    printf("message is \"%s\" (%ld/%ld)\n", message, sizeof(message), strlen(message));
    printf("msgPtr is \"%s\" (%ld/%ld)\n", msgPtr, sizeof(char)*MAX_LEN, strlen(msgPtr));

    for(int index=0; index < MAX_LEN && msgPtr[index] != '\0'; index++){printf("%c -- %d\n", msgPtr[index], msgPtr[index]);
        }
    return 0;

}
char* mysteryExplode(const char* str){

}
//int mysteryExplode(){}

