#include<stdio.h>
void main(){
	int sum=0;
	int i=1;
	while(i<=100){
		//printf("%c\n",i);
		if(i%5==0)
			sum=sum+i;
		i++;
	}
		printf("Sum=%d\n",sum);
}
