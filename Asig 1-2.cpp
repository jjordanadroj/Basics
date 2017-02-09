#include <stdio.h>
#include <math.h>

int main(){
	
	int x;
	float y;
	
	printf("Insrt value of:\nx:");
	scanf("%d", &x);
	printf("y:");
	scanf("%f", &y);
	printf("\nx=%d\ny=%f", x, y);
	
	//"scanf"; simply put, scans. this is used to ask the user of the program for the values that are to be assigned
	//"&_"; the & before the variables (x,y) is used with scanf to assigned the inputed value to the variable with &-symbol
	//"\n"; translates to "new line", whatever follows this will be written in a line below what is before it 
}
