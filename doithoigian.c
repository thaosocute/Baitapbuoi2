#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	scanf("%d",&a);
	int b=a/3600; a%=3600;
	int c=a/60; a%=60; 
	printf("%dh%dp%ds",b ,c, a);
	return 0;
}
