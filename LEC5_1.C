#include<stdio.h>
#include<conio.h>
void main(){
	int a,b;
	clrscr();
	printf("Enter First Number: ");
	scanf("%d",&a);
	printf("\nEnter Second Number: ");
	scanf("%d",&b);
	if(a<b){
		printf("\nA is Less than B..");
	}
	else if(a>b){
		printf("\nB is Less than A..");
	}
	else{
		printf("\nBoth are Equal");
	}
	getch();
}