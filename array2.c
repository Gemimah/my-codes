#include<stdio.h>
int main(){
	int myArray[4] [3];//Array declaration and initialization
	
	int r,c;
	//input elements
	for(r=0;r<4;r++)//to iterate through rows
	for(c=0;c<3;c++){// to iterate through columns 
	printf("Element [%d] [%d:]",r,c);
	scanf("%d ,&myArray[r] [c]");
	
	
	printf("\n");
	
	}
	return 0;
	
}
