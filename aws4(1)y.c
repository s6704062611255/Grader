#include <stdio.h>
int main(){
    int year;
    float grade;
    char help;
    scanf("%d %f %c",&year, &grade, &help);
    
    if(year < 2){
    	printf("not approved\n");
		printf("year < 2");
	}
	else if(grade < 2.50){
		printf("not approved\n");
		printf("grade < 2.50");
	}
	else if(year >= 2 && grade >= 2.50 && help == 'Y'|| grade >= 3.00){
		printf("approved");
	}
	else{
		printf("not approved\n");
		printf("no help");
	}
	
    return 0;
}

