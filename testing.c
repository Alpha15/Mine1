#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int sleep(unsigned long x){
	clock_t c1 = clock(),c2;
	do{
		if((c2 = clock()) == (clock_t)-1)
		return 0;
	}while(1000.0 * (c2 - c1) / CLOCKS_PER_SEC < x);
	return 1;
}
	

int main(void){
	printf("Hello,Wordl!\n");
	fflush(stdout);
	int i,n;
	scanf("%d",&n);
	printf("0秒");
	fflush(stdout);
	for(i = 0;i < n;i++){
	sleep(1000);
	printf("\r%d秒",i + 1);
	fflush(stdout);
}
putchar('\n');

	return 0;}
