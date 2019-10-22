#include<stdio.h>

/*
    Prints input as one word per line.
*/

int main(){
    int c;
    int state = OUT;
    while((c = getchar()) != EOF){
        if(c == ' ')
            putchar('\n');
        else
        {
            putchar(c);
        }   
    }
}