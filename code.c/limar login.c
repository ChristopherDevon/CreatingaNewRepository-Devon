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
		
	}do{
		printf("\nWhich one would you like to do ?");
		printf("\n 1 : Addition \n 2 : Subtraction \n 3 : Multiplication \n 4 : Division \n 5 : Modulus \n 6 : exit\n\n Type the number of the operation : ");
		scanf("%d", &op);getchar();
	
	}while
		((op != 1) && (op != 2) && (op != 3) && (op != 4) && (op != 5) && (op != 6));
		
	}	if (op == 1){
		float value;
		printf ("How much money do you want to add to your account ?\n\nAmount of Money : ");
		scanf ("%f,", &value);getchar();
		balance = balance + value ; 
		printf ("Your balance after addition is : Rp.%.2f,\n",balance);
	do{
		printf ("are you sure want to exit? \n\n");
		printf("1.yes\n2.no\n\n");
		scanf("%d",op);
		if(op==1){
			printf("\nYour balance %2.f",balance);
			printf("\npress enter to exit\n");
			while (enter != '\r' && enter != '\n')(enter = getchsr();)
			
		}
		else if(op==2){
			printf("--------------------------\n\n");
		}
	}
	while ((option != 1) && (option !=2);)
	else if (op == 2)
	{
		printf ("How much money do you want to take from your account ? \n\nAmount of Money : ");
		scanf ("%f",&value);getchar();
		balance = balance - value; 
		printf ("Your balance after subtraction is : Rp.%.2f\n",balance);
	}	do{
		printf ("are you sure want to exit? \n\n");
		printf("1.yes\n2.no\n\n");
		scanf("%d",op);
		
			
		if(op==1){
			printf("--------------------------\n\n");
		}
	else if (op==2)}{
	}break;{}
	}	while ((option !=1) && (option !=2);)
	else if (op == 3)
	{
		printf ("How much money do you want to multiply from your account ? \n\nAmount of Money : ");
		scanf ("%f",&value);getchar();
		balance = balance * value;
		printf ("Your balance after multiplication is : Rp.%.2f\n",balance);
	}
	do{
		printf ("are you sure want to exit? \n\n");
		printf("1.yes\n2.no\n\n");
		scanf("%d",op);
		
			
		if(op==1){
			printf("--------------------------\n\n");
		}
	else if (op==2)}{
	}break;{}
	}	while ((option !=1) && (option !=2);)
	else if (op == 4)
	{
		printf ("How much money do you want to divide from your account ? \n\nAmount of Money : ");
		scanf ("%f",&value);getchar();
		balance = balance / value; 
		printf ("Your balance after division is : Rp.%.2f\n",balance);
	}
	do{
		printf ("are you sure want to exit? \n\n");
		printf("1.yes\n2.no\n\n");
		scanf("%d",op);
		
			
		if(op==1){
			printf("--------------------------\n\n");
		}
	else if (op==2)}{
	}break;{}
	}	while ((option !=1) && (option !=2);)
	else if (op == 5)
	{
		printf("what value ? \n");
		scanf("%f",&value);getchar();
		balance = fmod(balance,value);
		printf("your balance is now %.2f\n\n");
	}
	do{
		printf ("are you sure want to exit? \n\n");
		printf("1.yes\n2.no\n\n");
		scanf("%d",op);
		
			
		if(op==1){
			printf("--------------------------\n\n");
		}
	else if (op==2)}{
	}break;{}
	}	while ((option !=1) && (option !=2);)
	
	else if(input==6){
		printf("\nare you sure?\n");
		printf("1.yes\n2.no\n\n");
		scanf("%d",&prompt);
		getchar();
		
		if(prompt==1){
			printf("\n\n\n\nPress enter to continue");
			if (getchar()=='\n'){
				break;
			}
			
		}
		else if (prompt==2){
		}
	
		}
		while(1);
		
		
		
		
		
		
		
		
		
		
		
		
		
		return 0
	}
	
	

