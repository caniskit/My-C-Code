#include <stdio.h>
#include <math.h>
/*****************************************************************************************************************************************/
/********Programming-I***************Assingment-3****2019-2020 Fall*********Istanbul**Kultur**University**********************************/
/*****************************************************************************************************************************************/

/*******************DECLARATION*********************/
int menu(void);
double totalnumberfunc(int x, int i);//1ST FUNCTION
void rootnumber(int a,int b,int c);//2ND FUNCTION
void perfectnumber(int val);//3RD FUNCTION
void isprime(int val);//4TH FUNTION
long bintodec(long long longbin);//5TH FUNCTION
int fact(int n);//Factorial Function
/***************************************************/
/********GLOBAL***VARÝBLES****************/
int a, b, c;
int choice = 0;
/***************************************/

int main()/*START-UP FUNCTION*/
{
	int value1, value2;
	long long  longbin;
	
	
	while (choice!=6)/*while choice different to 6 I catch the problem menu function but I leave this situation*/
	{
		
		menu();
		switch (choice)
		{
		case 1:
		{
			printf("Enter x and the limit...>");
				scanf_s("%d %d",&value1,&value2);
				printf("The result is %.2f\n\n", totalnumberfunc(value1, value2));
				
				
				break;
		}
		
		case 2:
		{
			
			printf("Enter coefficients a, b and c: ");
			scanf_s("%d %d %d", &a, &b, &c);
			rootnumber(a,b,c);
			break;
		}

		case 3:
		{
			printf("Enter a number for perfect number checking => ");
			scanf_s("%d", &value1);
			perfectnumber(value1);
			break;
		}

		case 4:/*Ask user input after using special function to Compute the prime number then return print report*/
		{
			 
			printf("Enter a number for prime number checking=> ");
			scanf_s("%d", &value1);
			isprime(value1);
			break;
		}
		case 5:
		{
			printf("Enter a number in binary form=> ");
			scanf_s("%lld", &longbin);
			
			printf("Decimal equivalent of %lld is %d\n\n", (long long)longbin, bintodec(longbin));
			break;
		}
		
		default:
			printf("Wrong value entered please try again\n\n");
		
			break;
		}
	}
	
	
	system("pause");
	return 0;
}

int menu(void) {/***Menu Function***/
	printf("\t***SELECT AN OPTION BELOW***\n\n");
	printf("\t1- Write a function to calculate the formula \"f(x) =1 + x + x^2/2 + x^3/3 + x^4/4 + ...\"\n");
	printf("\t2- Roots of Quadratic Formula\n");
	printf("\t3- Perfect Number Function\n");
	printf("\t4- Prime Number Function\n");
	printf("\t5- Convert Binary to Decimal\n");
	printf("\t6-Exit\n");
	scanf_s("%d", &choice);
	if (choice == 6)
		exit();
	else
	return choice;
}

double totalnumberfunc(int x, int lim)/*****Fuction 1 Calcute entered function******/
{
	double total = 1.0+x;
	if (lim == 0) {
		return 1.0;
	}
	else if(lim==1)
	{
		return(1.0 +(double)x);
	}
	else if (lim > 1)
	{
		for (int i = 2; i <= lim; i++)
		{
			total = total + (pow(x, i) / fact(i));
		}
		return total;
}

}

void rootnumber(int a, int b, int c) {/*****Fuction 2******/
	double root1, root2;
	double delta;
	delta = pow(b, 2) - (4 * a * c);
	if (delta >= 0) {
		root1 = ((-b + sqrt(delta)) / (2 * a));
		root2 = ((-b - sqrt(delta)) / (2 * a));
		printf("root1 = %.2f root2 = %.2f", root1, root2);
	}
	else/***if  delta <0 exit find roots*****/
		printf("Ýnvalid Parameter Entered Please try again\n\n");
}

void perfectnumber(int val)/*****Fuction 3******/
{
	int temp, sum=0;
	for (int i = 1; i <= (val - 1); i++)
	{
		temp = val % i;/***try division ***/
		if (temp == 0)/*if division result zero add sum to perfect number result*/
		{
			sum = sum + i;
		}
	}
	if (sum == val)/***if sum equal result return is perfect***/
		printf("The number %d is Perfect...\n\n",val);
	else
		printf("The number %d is NOT a Perfect...\n\n",val);
}

void isprime(int val)/*****Fuction 4 calc prime number******/
{
	int i, flag = 0;
	
	for (i = 2; i <= val/2; ++i) {
		
		if (val % i == 0) {/***condition for non-prime***/
			flag = 1;
			break;
		}
	}
	if (val == 1) {
		printf("1 is neither prime nor composite.\n\n");
	}
	else {
		if (flag == 0)
			printf("%d is a prime number.\n\n", val);
		else
			printf("%d is not a prime number.\n\n", val);
	}
}

long bintodec(long long longbin)/***Function 5 Calculating Binary to Decimal Number***/
{
	int dec = 0, i = 0, rem;
	while (longbin != 0) {
		rem = longbin % 10;
		longbin /= 10;
		dec += rem * pow(2, i);
		++i;
	}
	return dec;
}

int fact(int n)/***Factorial Function***/
{
	int i, res_fact = 1;
	for (i = 1; i <= n; i++)
		res_fact *= i;
	return res_fact;
}