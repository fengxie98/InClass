//Pointers

#include <stdio.h>
   
   int main(){
       int var = 20;
       int x = 10;
       int *ip;
       
       ip = NULL;
       
       ip = &var;
       
       x = x + *ip;
       
       ip = &x; 
       
       ip = ip + 3;
       
       printf("Address of var variables: %x\n", &var);
       
       printf("Address stored in ip variables: %x\n", ip);
       
       printf("Value of ip variable: %d\n", *ip);
       
       return 0;
   }