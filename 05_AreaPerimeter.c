/* Calculation of area & perimeter of differernt figures
Author: Arif Hussain
Teacher: Prof. Rishi Gupta*/
#include<stdio.h> //pre-processed directive to include standard input output functions

int main(){
    float radiusOfCircle, sideOfSquare, lengthOfRectangle, breadthOfRectangle; //Declaration of data type variables to store data provided by user
    float areaOfCicle, circumferenceOfCircle, areaOfSquare, perimeterOfSquare, areaOfRectangle, perimeterOfRectangle;

    //Taking input from use
    printf("Enter the radius of Circle: \n");
    scanf("%lf", &radiusOfCircle);
    printf("Enter the side of Square: \n");
    scanf("%lf", &sideOfSquare);
    printf("Enter the length of Rectangle: \n");
    scanf("%lf", &lengthOfRectangle);
    printf("Enter the breadth of Rectangle: \n");
    scanf("%lf", &breadthOfRectangle);

    //Calculation of area & perimeter of respective fig.
    areaOfCicle = 3.14 * radiusOfCircle * radiusOfCircle;
    circumferenceOfCircle = 2 * 3.14 * radiusOfCircle;
    areaOfSquare = sideOfSquare * sideOfSquare;
    perimeterOfSquare = 4 * sideOfSquare;
    areaOfRectangle = lengthOfRectangle * breadthOfRectangle;
    perimeterOfRectangle = 2 * (lengthOfRectangle + breadthOfRectangle);

    //printing the results
    printf("\nArea of Circle = %lf", areaOfCicle);
    printf("\nCircumference of Circle = %lf",  circumferenceOfCircle);
    printf("\nArea of Square = %lf", areaOfSquare);
    printf("\nPerimeter of Square = %lf", perimeterOfSquare);
    printf("\nArea of Rectangle = %lf", areaOfRectangle);
    printf("\nPerimeter of Rectangle = %lf", perimeterOfRectangle);

    return 0;
}