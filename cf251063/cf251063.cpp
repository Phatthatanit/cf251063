#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n[3],i=0;
int main() {
	int n[3];
	for (; i < 3; i++) {
		printf("Num %d : ", i+1);
		scanf("%d", &n[i + 1]);	
		for (int x = 1; x <= n[i+1]; x++)
		{
			printf("%d", n[i + 1]); 
		}
		printf("\n");
	}
	
	return 0;
}