/* Arithmetic calculations in C
Author: Arif Hussain
Teacher: Prof. Rishi Gupta*/

#include <stdio.h>//pre-processed directive to include standard input output functions

int main(){        //Declaration of main function
	int num1;      //Declaration of data type variables to store data provided by user
	int num2;
	char opr;

	printf("Enter Ist number: ");    //Using calling function to take the first number from user
	scanf("%d", &num1);

	printf("\nEnter operator: ");    //Taking the operator
	scanf(" %c", &opr);

	printf("\nEnter 2nd number: ");  //Taking the second number
	scanf("%d", &num2);
	if(opr == '+'){
        printf("%d", num1 + num2);   //Using if-else function to differentiate the information
	} else if(opr == '-'){           //given by user and providing the results accordingly
        printf("%d", num1 - num2);
    } else if(opr == '*'){
        printf("%d", num1 * num2);
    } else if(opr == '/'){
        printf("%d", num1 / num2);
    } else {
        printf("Invalid Operator");  //If the user gives the a wrong operator
    }
	return 0;


}
