#include<stdio.h>

int main(){
   
   int num[100],i,max;
   
   printf(" your 0
   +
   Enter number:\n");
   
   for(i=0; i<10; i++){
      
      scanf("%d", &num[i]);
   
   }  
   max=num[0];
   
   for(i=0; i<10; i++){
   
      if(num[i]>max){
   
        max = num[i]; 

      }
   } 
   printf("\n\nyour largest number value:- %d\n\n", max);
   return 0;
}