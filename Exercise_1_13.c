#include<stdio.h>

int main(){
    
    int num_char = 0, c;
    int num[11];
    for(int i = 1; i < 11; ++i){
        num[i] = 0;
    }
    while ((c = getchar()) != EOF){
        if(c == ' ' || c == '\n' || c == '\t' || c == '.'){
            for(int x = 1; x < 11; ++x){
                if(num_char == x && num_char > 0){
                    ++num[num_char];
                }
            }
            num_char = 0;
        }
        else{
            ++num_char;
        }
    }
    printf("Lengths of words\n");
    for(int y = 1; y < 11; ++y){
        printf("[%d]", y);
        for(int val = 0; val < num[y]; ++val){
            printf("#");
        }
        printf("\n");  
    }
    printf("\n");   
}