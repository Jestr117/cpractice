#include<stdio.h>
/*
    count the lines in input
*/
main(){
    int c, nl, nt, nb;
    nt = nb = nl = 0;

    while((c = getchar()) != EOF){
        if(c == '\n')
            ++nl;
        else if (c == '\t')
            ++nt;
        else if ( c == ' ')
            ++nb;
    }
    printf("Newlines: %d\nBlanks: %d\nTabs: %d\n", nl, nb, nt);
    printf("\n")
}