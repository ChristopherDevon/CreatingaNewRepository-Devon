#include<stdio.h>

int main(){
	char username [101] = "Ahmad Sutojo";
	char password [101] = "limar1234";
	char input [101] = "";
	char inputpass [101]="";
	
	do{	printf("Please enter your username\nUsername : ");
	scanf("%[^\n]",input);getchar();
	
	printf("Please enter your password\nPassword : ");
	scanf("%[^\n]",inputpass);getchar();
	}while (strcmp(input,username )!=0 || strcmp(inputpass,password)!=0 );
	
	
	printf("Which one would you like to do ?");
	float balance = 0;
	printf("Balance : Rp.%.2f,\naddition \nsubtraction \nmultiplication \ndivision\nmodulus",&balance);
	
	float addition= 0;
	printf("\nHow much money you want to add to your account ? \nAmount of Money :");
	scanf("%f,",&addition);
	
	float balance1 = balance + addition;
	printf("\nYour new balance is : %.2f, ",balance1);
	
	
}
