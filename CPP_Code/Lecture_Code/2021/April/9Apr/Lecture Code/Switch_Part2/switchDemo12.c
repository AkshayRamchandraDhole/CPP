#include<stdio.h>
void main(){
	
	char ch = '/';
	int  x = 10;
	int  y = 20;
	switch(ch){
	
		case '+' : {
			printf("%d\n",x+y);
			}
		break;
		case '-' : {
			printf("%d\n",x-y);
		break;
		}
		case '*' : {
			printf("%d\n",x*y);
		break;
		}
		case '/' : {
			printf("%d\n",x/y);
		break;
		}
		default : 
			printf("Default_Case\n");
		break;
	}
			printf("Outside Switch\n");
}
