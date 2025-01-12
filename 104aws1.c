#include <stdio.h>
int main (){
   int n1,n2,n3,n4;
   scanf("%d/%d/%d/%d",&n1, &n2, &n3, &n4);
   int result = (n1>n2 && n1>n3 && n1>n4)? n1 : 
                (n2>n1 && n2>n3 && n2>n4)? n2 :
                (n3>n1 && n3>n2 && n3>n4)? n3 :n4;
   printf("%d",result);
   return 0 ;
}