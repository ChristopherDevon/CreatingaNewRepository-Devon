#include<stdio.h>
#include <math.h>

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
	printf("Your current balance is : Rp.%f,", &balance);

	int op;
	do{
		printf("\nWhich one would you like to do ?");
		printf("\n 1 : Addition \n 2 : Subtraction \n 3 : Multiplication \n 4 : Division \n 5 : Modulus \n Type the number of the operation : ");
		scanf("%d", &op);
	
	}while
		((op != 1) && (op != 2) && (op != 3) && (op != 4) && (op != 5));
		

	
	if (op = 1)	
	{	
		float addition ;
		printf ("How much money do you want to add to your account ? \nAmount of Money : ");
		scanf ("%f,", &addition);
		balance = balance + addition ; 
		printf ("Your balance after addition is : Rp.%.2f,\n",balance);
	}
	else if (op = 2)
	{
		float subtraction ;
		printf ("How much money do you want to take from your account ? \nAmount of Money : ");
		scanf ("%f",&subtraction);
		balance = balance - subtraction; 
		printf ("Your balance after addition is : Rp.%.2f\n",balance);
	}
	else if (op = 3)
	{
		float multiplication;  
		printf ("How much money do you want to take from your account ? \nAmount of Money : ");
		scanf ("%f",&multiplication);
		balance = balance * multiplication;
		printf ("Your balance after addition is : Rp.%.2f",balance);
	}
	else if (op = 4)
	{
		float division =0;
		printf ("How much money do you want to take from your account ? \nAmount of Money : ");
		scanf ("%f",&division);
		balance = balance / division; 
		printf ("Your balance after addition is : Rp.%.2f",balance);
	}
	
}
