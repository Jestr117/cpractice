#include<stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

float fahr_to_cel(float fahr);

int main(){
    printf("\t_____Fahrenheit to Celsius_____\t\n");
    for(float fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP){
        printf("\t     %3.2f F    %3.2f C   \t\n", fahr, fahr_to_cel(fahr));
    }
}

float fahr_to_cel(float fahr){
    float celsius;
    celsius = (5.0/9.0) * (fahr -32);
    return celsius;
}