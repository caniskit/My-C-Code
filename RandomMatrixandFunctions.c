#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TEN 10
#define FIVE 5

/*****************************************************************************************************************************************/
/********Programming-I***************Assingment-2 2019-2020 Fall*********Istanbul**Kultur**University*************************************/
/*****************************************************************************************************************************************/
void randomarr(int a[][FIVE],int r,int c)/*This function initialize new random array*/
{
	srand(time(NULL));

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
		{
			a[i][j] = rand() % 101;
		}
}
void display_arr(int a[][FIVE], int r, int c)/*this function display array in a command line*/
{
	printf("\t  Course 1\t  Course 2\t  Course 3\t  Course 4\t  Course 5");
	for (int i = 0; i < r; i++)
	{
		printf("\nStd %d\t", i + 1);
		for (int j = 0; j < c; j++)
			printf("\t%3.2d\t", a[i][j]);
	}
}

void calc_avg(double b[], int a[][FIVE], int r, int c) {/*this function calculate average grade for each student and save different array*/
	for (int i = 0; i < TEN; i++)
	{
		double sumgrade = 0;
		
		for (int j = 0; j < FIVE; j++)
			sumgrade = sumgrade + a[i][j];
		b[i] = sumgrade / (double)FIVE;
	}

}
int main()/*main function*/
{
	int grade[TEN][FIVE] = { 0 };
	int initflag,flag,min,max;
	double sumgrade,average;
	double Std_avrage[TEN];
	char choice;
	flag = 1;/*this flag will be continue the main while loop*/
	
	choice = '0';/*first run choice program after wait the user input*/

	randomarr(grade, TEN, FIVE);

	while (flag == 1) {
		printf("Make a Selection =>\n");
		printf("\t1- Display a Random Grade Array..\n");
		printf("\t2- Displaying Average Grade of Each Student..\n");
		printf("\t3- Displaying Letter Grades of Students..\n");
		printf("\t4- Displaying Min and Max Grade..\n");
		printf("\t5- Displaying Average of All Grades..\n");
		printf("\t6- Reset Random Array..\n ");
		printf("\t7- Exit...\n ");


		scanf_s(" %c", &choice);
		switch (choice)
		{
		case '1':/*Display defined array*/
		{
			
		
			display_arr(grade,TEN,FIVE);
			printf("\n");
			break;
		}
		
		case '2':/* Show average grade of each student*/
		{
			printf("Displaying Average Grade of Each Student..\n");
			
			calc_avg(Std_avrage, grade, TEN, FIVE);
			for (int i = 0; i < TEN; i++)
			{
			
				printf("Std %d\t%.2f\n",i+1, Std_avrage[i]);
			}
			break;
		}
		
		case '3': /*find letter grades of average each student grades */
		{
			printf("Displaying Letter Grades of Students..\n");
				
			calc_avg(Std_avrage, grade, TEN, FIVE);
			for (int i = 0; i < TEN; i++)
				{
					printf("Std %d\t", i + 1);
					average = Std_avrage[i];
					if (average >= 80.00)
						printf("Letter Grade is = A\n");
					else if (average >= 70.00)
						printf("Letter Grade is = B\n");
					else if (average >= 60.00)
						printf("Letter Grade is = C\n");
					else if (average >= 50.00)
						printf("Letter Grade is = D\n");
					else if (average >= 40.00)
						printf("Letter Grade is = E\n");
					else
						printf("Letter Grade is = F\n");
				}

			break; 
		}
		
		case '4':/*Find min and max grade in array*/
		{
			printf("Displaying Min and Max Grade..\n");
			min = max = grade[0][0];
			for (int i = 0; i < TEN; i++)
			{
				for (int j = 0; j < FIVE; j++)
				{
					if (min > grade[i][j])
						min = grade[i][j];
					if (max < grade[i][j])
						max = grade[i][j];
				}
			}
			printf("Max Grade is %d and Min Grade is %d\n", max, min);
			break;
		}

		case '5':/*Calculating all grade and after show avarage all grades*/
		{
			printf("Displaying Average of All Grades...\n");
			sumgrade = 0;
			for (int i = 0; i < TEN; i++)
			{
				for (int j = 0; j < FIVE; j++)
					sumgrade = sumgrade +grade[i][j];
			}
			average = sumgrade / (TEN * FIVE);
			printf("Average of All Grades => %.2f\n", average);
			break;
		}
		
		case '6':/*reset section and display new array*/
		{
			randomarr(grade, TEN, FIVE);
			display_arr(grade, TEN, FIVE);
			printf("\n");

			break;
		}
		
		case '7':/*Terminate section while loop exit this section*/
			flag = 0;
			break;
		
		default:
			printf("Wrong Choice Try Again...\n");
			break;
		}
		
	}

	printf("\nHave a Nice Day...\n");
	system("pause");
	return 0;
}