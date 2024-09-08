// c program to make a simple calculator
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch;
	double a,b;
	while(1){
		
		printf("Enter an operator (+,-,*,/), "
		"if want to exit press x: ");
		scanf("%c", &ch);
		
		// to exit
		if (ch=='x')
		exit(0);
		printf("Enter two first and second operand: ");
		scanf("%lf %lf", &a, &b);
		
		//switch case will help to differentiate operation based on different operator
		switch (ch){ 
		
		// For addition
		case '+':
			printf("%.1lf+%.1lf=%.1lf\n",a,b,a+b);
			break;
			
			// For subtraction
			case'-':
				printf("%.1lf-%.1lf=%.1lf\n",a,b,a-b);
				break;
				
				// For multiplication
				case'*':
					printf("%.1lf*%.1lf=%.1lf\n",a,b,a*b);
					break;
					
					// For Division
					case'/':
						printf("%.1lf/%.1lf=%.1lf\n",a,b,a/b);
						break;
						
						// If the operator doesn't match any case constant
						default:
							printf(
							"Error ! please write a valid operator\n");
			
		}
		 return 0;
		 
	}
}
