#include <stdio.h>

#define MAXLINE 100000
#define MAXOUT  300
/*
    Prints the longest line, function name for getline
    is changed becaue of header declaration/implementation of "getline" 
*/
int getlineME(char line[], int maxline);
void copy(char to[], char from[]);

int main(){
    int len;
    int max = 0;        // lines can now be long as hell, there is room
    char line[MAXLINE]; // current input line
    char longest[MAXLINE];  // longest line saved here

    
    while( (len = getlineME(line, MAXLINE)) > 0 ){
        if(len > max){
            max = len;
            copy(longest, line);
        }  
    }
    if(max > MAXOUT){
       printf("%s", longest);
       printf("Length of the longest string: %d\n", len);
    } 
    return 0;
}


int getlineME(char s[], int lim){
    int c, i;
    for(i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[]){
    int i = 0;
    while((to[i] = from[i]) != '\0'){
        ++i;
    }
}