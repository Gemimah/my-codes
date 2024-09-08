#include<stdio.h>
#include<stdlib.h>

int arrayManipulation(int scores[12]){
	

    for( int scoreSub=0;scoreSub<12;scoreSub++){
printf("score %d is %d\n",scoreSub,scores[scoreSub]);
    }

for( int scoreSub=11;scoreSub>=0;scoreSub--){
     printf("\t\t\t\t");
printf("score %d is %d\n",scoreSub+1,scores[scoreSub]);
    }
}
int main() {
    printf("enter the size of an array:");
    
int scoreSub[12]={1,2,3,4,5,6,7,8,9,10,11};
arrayManipulation(scoreSub);
    return 0;
}
