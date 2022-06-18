#include <stdio.h>

int main(){
	int n;
	printf("enter the input\n");
	scanf("%d", &n);
	for(int a=1; a<=n; a++){
		for(int b=1; b<=(n-a)*2; b++){
			printf(" ");
		}
		for(int c=1; c<=a; c++){
			printf("%d", c);
			printf(" ");
		}
		for(int d=a-1; d>=1; d--){
			printf("%d", d);
			printf(" ");
		}
		printf("\n");
	}
}