#include <stdio.h> // Pre-processed directive to include the standard input and output funtions
#include <math.h> // Pre-processed directive to include the Mathematics funtions
 
int main(){
	float x1, y1, x2, y2, euclideanDistance;
	print("Enter x1 points: ");
	scanf("%lf", &x1);
	printf("Enter y1 points; ");
	scanf("%lf", &y1);
	print("Enter x2 points: ");
	scanf("%lf", &x2);
	printf("Enter y2 points; ");
	scanf("%lf", &x2);

	euclideanDistance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));

	printf("Euclidean distance between the given points: %lf", sqrt(euclideanDistance));

	return 0;

}        


