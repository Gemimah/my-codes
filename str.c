#include <stdio.h>

int main(){
	
	
	char buffer[50];
	int a=10, b=20, c;
	c=a+b;
	
	sprintf(buffer,"sum of %d amd %d is %d", a,b,c);
	
	printf("%s",buffer);
	
	return 0;
}
