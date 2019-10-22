#include<stdio.h>
/*
    Program to copy input to ouput, replacing each string
    of one or more blanks by a single blank.
*/

int main(){
    int c, prev;
    while((c = getchar()) != EOF){
        if(c != ' '){
            putchar(c);
        }
        if(c == ' '){
            if(prev != ' '){
                putchar(c);
            }
        }
        prev = c;
    }
}