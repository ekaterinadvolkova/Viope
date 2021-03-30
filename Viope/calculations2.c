#include <stdio.h>

int main(void){
	int choice;
	int num1;
	int num2;
	int sub;
	int add;
	int mul;


	//program asks what function to choose
  printf("1: subtraction \n");
  printf("2: addition \n");
  printf("3: multiplication \n");
  printf("Select function:");
  scanf("%d", &choice);

  printf("Enter the first number:");
  scanf("%d", &num1);
  printf("Enter the second number:");
  scanf("%d", &num2);

	switch(choice){
		case 1:
			sub = num1 - num2;
			printf("%d-%d=%d", num1, num2, sub);
		break;

		case 2:
			add = num1+num2;
			printf("%d+%d=%d", num1, num2, add);
		break;

		case 3:
			mul = num1*num2;
			printf("%d*%d=%d", num1, num2, mul);
		break;
	}
}