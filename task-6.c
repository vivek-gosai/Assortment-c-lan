#include<stdio.h>
int main(){
   
   int a[3][3],b[3][3],c[3][3],i,j;
   
   printf("Enter first metrix\n");
   
   for(i=0; i<3; i++){
       for(j=0; j<3; j++){      
          scanf("%d", &a[i][j]);   
       }
   }
   printf("\n\nEnter second metrix\n");
   for(i=0; i<3; i++){
       for(j=0; j<3; j++){   
          scanf("%d", &b[i][j]);     
       } 
   }
   printf("\n\nfirst matrix is\n\n");
   for(i=0; i<3; i++){
       for(j=0; j<3; j++){     
          printf("%d",a[i][j]);     
       }
       printf("\n");  
   }
   printf("\n\nsecond matrix is\n\n");
   for(i=0; i<3; i++){
       for(j=0; j<3; j++){   
          printf("%d",b[i][j]);     
       }
       printf("\n");
   }
   for(i=0; i<3; i++){
      for(j=0; j<3; j++){   
          c[i][j]=a[i][j]+b[i][j];    
      }  
   }
   printf("\n\nsum two matrix\n\n");
   for(i=0; i<3; i++){
      for(j=0; j<3; j++){  
         printf("%d", c[i][j]);    
      }
      printf("\n");
   }
   return 0;
}