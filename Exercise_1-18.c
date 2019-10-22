#include <stdio.h>

#define MAXLINE 1000

int getlineMe(char line[], int maxline);
int remove(char s[]);

int main(){
    char line[MAXLINE];
    while(getlineMe(line, MAXLINE) > 0 ){
        if(remove(line) > 0){
            printf("%s", line);
        }
    }
    return 0;
}
int remove(char s[]){
    int i = 0;
    while(s[i] != '\n'){        // find the newline character in the string
        ++i;
    }
    --i;
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t')){
        --i;
    }
    if(i >= 0){
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
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