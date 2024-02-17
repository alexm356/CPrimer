/*
Write a program that accepts an integer as input and then displays all the prime
numbers smaller than or equal to that number.
*/

#include <stdio.h>
int main(){

    int num, i, count, n;
    printf("Enter max range: ");
    scanf("%d",&n);

    for(num = 1;num<=n;num++){

         count = 0;

         for(i=2;i<=num/2;i++){
             if(num%i==0){
                 count++;
                 break;
             }
        }
        
         if(count==0 && num!= 1)
             printf("%d ",num);
    }
  
   return 0;
}