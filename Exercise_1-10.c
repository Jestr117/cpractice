#include<stdio.h>
/*
    Replacing character tabs, backspaces, and slashes with visible strings
*/

int main(){
    int c;
    while((c = getchar()) != EOF){
        if(c == '\t'){
            printf("\\t");
        }
        else if(c == '\b'){
            printf("\\b");
        }
        else if (c == '\\'){
            printf("\\\\");
        }
        else{
            putchar(c);
        }
    }
}