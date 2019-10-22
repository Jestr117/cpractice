#include <stdio.h>

#define MAXLINE 1000

int getlineME(char line[], int maxline);
void reverseME(char line[]);

int main()
{
    char line[MAXLINE];
    int c;
    while(getlineME(line, MAXLINE) > 0 ){
        reverseME(line);
        printf("%s", line);
    }
    return 0;
}

int getlineME(char line[], int maxline)
{
    int c, i;   
    for(i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        line[i] = c;
    }
    if(c == '\n'){
        line[i] = c;
        ++i;
    }
    line[i] = '\0';
    return i;
}
void reverseME(char line[])
{
    int j = 0;
    int i = 0;
    char swap;
    for(i; line[i] != '\0'; ++i){
        ;
    }
    --i; // back up from null char
    if(line[i] == '\n'){
        --i;    // check to see if last char was newline
    }

    while(j < i){
        swap = line[j];
        line[j] = line[i];
        line[i] = swap;
        
        --i;
        ++j;
    }
}