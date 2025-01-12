#include <stdio.h>
int main(){
    int year;
    float grade;
    char help;
    scanf("%d %f %c",&year, &grade, &help);
    
   if(grade >= 3.00){
   	 printf("approve\n");
   }
   else if(year >= 2 && grade >= 2.5 && help == 'Y'){
   	 printf("approve\n");
   }
   else{
     printf("not approve\n");
    if (grade < 2.50){
   		printf("grade < 2.50\n");
    }
    if(year < 2){
       printf("year < 2\n");
    }
    if(help == 'N'){
    	printf("no help\n");
	}
   }
    return 0;
}

