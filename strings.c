#include<stdio.h>
#include<string.h>

int main(){

	char a[5]="abdce", b[6]="anbfbf";
	printf("%d \n",strlen(a));
	printf("%s \n",strcpy(a,b));// coping b to a
	printf("%s \n",strcat(a,b));// concatenate a and b
	printf("%s \n",strcmp(a,b));
	printf("%d\n",strcmp("mee","meeyy"));// compare mee and meeyy
	pritnf("%s\n",strupr(b));// convert string b to upper case
	
	return 0;
	
}
