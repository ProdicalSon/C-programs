#include <stdio.h> 
int main() { 
 int flightlevel; 
 printf(".......Flight Management System.......\n"); 
  
 for(flightlevel=123;flightlevel++;){ 
  printf("Enter flight level(0 to exit):"); 
  scanf("%d",&flightlevel); 
   
  switch(flightlevel){ 
   case 0: 
    printf("Preparing for landing.travel safe home.!\n"); 
   default: 
    printf("Rising to flight level %d000 feet.\n",flightlevel); 
    break; 
  } 
 } 
 return 0; 
}
