#include <stdio.h> 

int main(void){
  int inte;
  printf("Enter an integer: ");
  scanf("%d", inte);
	
  for(int i=0; i <= inte; i++){
	  printf("$d \n", i);
  } 
  return 0;
} 