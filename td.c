#include<stdio.h>
int main(){
   //initializing the array
   int sum = 0;
   int arr[5][5] ={
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25}
   };
   //printing the array
   for(int i = 0;i<5;i++){
    for(int j = 0;i<5;i++){
        printf("%d\t%d\t", arr[5][5]);
    }
   }
   // row addition
   for(int i = 0;i<5;i++){
    for(int j = 0;j<5;j++){
        sum += arr[i][j];
    }
    printf("%d\t", sum);
    sum = 0;
   }
   return 0;
}