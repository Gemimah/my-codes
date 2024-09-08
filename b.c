#include<stdio.h>
#include<stdlib.h>

int main(){
	double firstnumber,secondnumber,thirdnumber, fourthnumber, sum; // %d, %f, %lf, %c
	
	printf("enter the first number");
	scanf("%lf", &firstnumber);
	printf("enter the second number");
	scanf("%lf", &secondnumber);
	printf("enter the third number");
	scanf("%lf", &thirdnumber);
	printf("enter the fourth number ");
	scanf("%lf", &fourthnumber);
	
	sum=firstnumber+secondnumber+thirdnumber+fourthnumber;
	
	printf("The sum of %lf,%lf,%lf and %lf is %lf", firstnumber, secondnumber, thirdnumber, fourthnumber, sum);
	 
	 return 0;
}
