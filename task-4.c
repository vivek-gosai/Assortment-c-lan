#include<stdio.h>

int main(){

   int a[10],i,max=0,min=32767;
   
   printf("Enter 10 numbers\n");
   
   for(i=0; i<10; i++){
   
      scanf("%d", &a[i]);
      if(a[i]>max){
      
         max = a[i];    
      }
      if(a[i]<min){
      
         min=a[i];     
      } 
   }
   printf("\n\n your nmaximum = %d\n\n", max);
   printf("your minimum = %d\n\n", min);

   return 0;
}