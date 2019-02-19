//ARRAYS
   //double balance[10] = {1000.0, 2.0, 3.4, 7.0, 50.0};
   
   //double balance[] = {1000.0, 2.0, 3.4, 7.0, 50.0}; 
   
   #include <stdio.h>
   
   int main(){
       int n[10]; 
       int i,j;
       
       for(i=0; i<10; i++){
           n[i] = i + 100;
       }
       
       for (j=0;j<10;j++){
           printf("Element[%d]=%d\n", j, n[j]);
       }
       
       return 0;
   }