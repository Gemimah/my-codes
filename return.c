
#include<stdio.h>
#include<string.h>

int main() {
	
	char str[]="Hello, world!";
	char searchstr[] ="world";
	char *ptr;
	
	ptr =strstr(str,searchstr);
	if(ptr !=NULL) {
		printf("Found '%s' at position %ld\n",searchstr,ptr -str);
	} else {
		printf("Subtstring '%s' not found\n", searchstr);
	}
	
	return 0;
}
