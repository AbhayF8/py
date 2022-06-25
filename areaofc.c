#include <stdio.h>
#include <math.h>
#define PI 3.141592653589793238

float Edistance(float x1, float x2, float y1, float y2) {
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}

int Mdistance(int x1, int x2, int y1, int y2) {
	return (fabs(x2-x1)+fabs(y2-y1));
}

float area(float x1, float x2, float y1, float y2, float (*fptr)(float x1, float x2, float y1, float y2))  // (float x1, float x2, float y1, float y2) is same as (float,float,float,float)
	{
	return fptr(x1,x2,y1,y2)*PI*fptr(x1,x2,y1,y2);
}

int main() {
	float x1,x2,y1,y2;
	float (*fptr)(float,float,float,float);
	fptr=Edistance;
	printf("Enter x1\n");
	scanf("%f",&x1);
	printf("Enter x2\n");
	scanf("%f",&x2);
	printf("Enter y1\n");
	scanf("%f",&y1);
	printf("Enter y2\n");
	scanf("%f",&y2);
	
	printf("The Euclidean Distance between the points is %f\n",Edistance(x1,x2,y1,y2));
	printf("The Manhattan Distance between the points is %d\n",Mdistance(x1,x2,y1,y2));
	
	printf("The area of circle considering Euclidean Distance between the points is %f",area(x1,x2,y1,y2,fptr));
}
