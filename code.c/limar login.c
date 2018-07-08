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
	
	float balance = 0;
	printf("Your current balance is : Rp.%.2f", &balance);

	int op;
	do{
		printf("\nWhich one would you like to do ?");
		printf("\n 1 : Addition \n 2 : Subtraction \n 3 : Multiplication \n 4 : Division \n 5 : Modulus \n Type the number of the operation : ");
		scanf("%d", &op);
	
	}while
		((op != 1) && (op != 2) && (op != 3) && (op != 4) && (op != 5));
		

	
	if (op = 1)	
	{	
		printf ("How much money do you want to add to your account ? \nAmount of Money : ");
		float addition = 0;
		scanf ("%f",&addition);
		float balance1 = balance + addition ; 
		printf ("Your balance after addition is : Rp.%.2f",&balance1);
	}
	
}
