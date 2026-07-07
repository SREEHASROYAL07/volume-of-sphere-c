#include<stdio.h>
int main(){
    float formula = 4.0f/3.0f*3.14;
    float radius;
    float r;
    float output;
    scanf("%f", &r);
    radius = r*r*r;
    output = formula * radius;
    printf("%f", output);
    return 0;
}