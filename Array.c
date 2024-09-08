#include<stdio.h>
int main() {
	int myArray[2] [3]={
	{2,3,0},
	{0,8,9}
	};
	int r,c;
	for(r=0;r<2;r++){// to iterate through rows
	for(c=0;c<3;c++){// to iterate through column
	printf("%d", myArray[r] [c]);
	}
	printf("\n");
	}
	 return 0;
	
	
	}

