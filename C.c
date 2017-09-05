#include<stdio.h>
#include<stdlib.h>

int main(void){
int a = 0;
int l = 0;
do{
puts("数字を入力してください");
int *x;
x = calloc(1,sizeof(int));
if(x == NULL){
puts("failed");
break;
}
else{
scanf("%d",x);
l = *x;
free(x);
}
a += l;

}while(l);
system("clear");
printf("%d\n",a);


return 0;}
