#include <stdio.h>  
  
int main ()  
{  
	int n;
	printf("Enter the value of n\n");
	scanf("%d", &n);
	for(int a=1; a<=n; a++){
		for(int b=1; b<=(n-a)*2; b++){
			printf(" ");
		}
		for(int c=a; c<=2*a-1; c++){
			printf("*");
			printf(" ");
		}
		for(int c=2*a-2; c>=a; c--){
			printf("*");
			printf(" ");
		}
		printf("\n");
	}	
	for(int a=n-1; a>=1; a--){

		for(int b=1; b<=(n-a)*2; b++){
			printf(" ");
		}
		for(int c=a; c<=2*a-1; c++){
			printf("*");
			printf(" ");
		}
		for(int c=2*a-2; c>=a; c--){
			printf("*");
			printf(" ");
		}
		printf("\n");
	}
    return 0;     
}  