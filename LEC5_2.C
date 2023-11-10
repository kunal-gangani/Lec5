#include<stdio.h>
#include<conio.h>
void main(){
	int n;
	clrscr();
	printf("Enter the value of A: ");
	scanf("%d",&n);
	if(n>0){
		printf("\n%d is Positive Number..",n);
	}else if(n<0){
		printf("\n%d is Negative Number..",n);
	}else{
		printf("\n%d is Neutral..",n);
	}
	getch();
}