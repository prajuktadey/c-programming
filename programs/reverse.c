//wap to find the reverse of any number
#include<stdio.h>  
int main()    
{    
   int num,rev,sum=0,copy;   

   printf("Enter a number: ");    
   scanf("%d",&num); 

   copy=num; 

   while(copy>0)    
   {    
     rev=copy%10;    
     sum=(sum*10)+rev;    
     copy=copy/10;    
   }    

   printf("The reverse of a number is: %d", sum);    
   
   return 0;

}   
