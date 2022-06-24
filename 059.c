#include <stdio.h>
#define PI 3.141592653589793238

int absolute(int x) {
	return (x<0) ? x * -1 : x;
}

int Mdistance(int x1, int x2, int y1, int y2) {
	return (absolute(x2-x1)+absolute(y2-y1));
}

float squareroot(float x) {
	float sqrtt,temp;
	// store the half of the given number e.g from 256 => 128
    sqrtt = x / 2;
    temp = 0;

    // Iterate until sqrt is different of temp, that is updated on the loop
    while(sqrtt != temp){
        // initially 0, is updated with the initial value of 128
        // (on second iteration = 65)
        // and so on
        temp = sqrtt;

        // Then, replace values (256 / 128 + 128 ) / 2 = 65
        // (on second iteration 34.46923076923077)
        // and so on
        sqrtt = ( x/temp + temp) / 2;
    }
    return sqrtt;
}

float Edistance(float x1, float x2, float y1, float y2) {
	return squareroot((x2-x1)+(y2-y1));
}

float area(int x1, int x2, int y1, int y2,float (*fptr)(float,float,float,float)) {
	return fptr(x1,x2,y1,y2)* fptr(x1,x2,y1,y2) * PI;
}

int main(){
	printf("// Find Area of Circle using Euclidean Circle \\\\\n");
	int a,b,c,d;
	printf("Enter x1\n");
	scanf("%d",&a);
	printf("Enter x2\n");
	scanf("%d",&b);
	printf("Enter y1\n");
	scanf("%d",&c);
	printf("Enter y2\n");
	scanf("%d",&d);
	
	float (*fptr)(float,float,float,float);
	fptr=Edistance;
	
	printf("The area is %f\n",area(a,b,c,d,fptr));
	printf("The manhattan distance is %d\n",Mdistance(a,b,c,d));
}
