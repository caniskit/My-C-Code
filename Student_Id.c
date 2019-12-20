#include <stdio.h>
#include <stdlib.h>
/*****************************************************************************************************************************************/
/********Programming-I***************Assingment-1****2019-2020 Fall*********Istanbul**Kultur**University**********************************/
/*****************************************************************************************************************************************/
int main(void)
{
	int yy, fn, dn, stdn;
	yy = fn = dn = stdn = 0;
	char answer, remain;
	remain = NULL;
	answer = 121;
	printf("****STUDENT ID EXPLORER***\n **Created By Osman Can ISKIT--for Istanbul Kultur University**\n");
	while (answer == 'y' || answer == 'Y')//Start point 
	{
		printf("Please write your Student ID = ");
		scanf("%2d%2d%2d%04d", &yy, &fn, &dn, &stdn);//Enter 10 digit student Id number(if less than 10digit program wait to complete digits)

		while ((getchar(remain)) != '\n')//If user enter longer than 10 digit skip remain part
		{
			remain = '\n';
		}
		printf("Year = 20%02d\n", yy);
		printf("Faculty = ");

		switch (fn)
		{
		case 1: {
			printf("Faculty of Engineering\n");
			printf("Department = ");
			switch (dn)
			{
			case 1:
				printf("Industrial Engineering");
				break;
			case 2:
				printf("Computer Engineering");
				break;
			case 3:
				printf("Civil Engineering(English)");
				break;
			case 4:
				printf("Civil Engineering(Turkish)");
				break;
			case 5:
				printf("Electrical-Electronic Engineering");
				break;
			default:
				printf("Unknown Department Number. Try Again.\n");
				continue;
			}
			break; }
		case 2: {
			printf("Faculty of Science and Letters\n");
			printf("Department = ");
			switch (dn)
			{
			case 1:
				printf("Mathematics and Computer Science");
				break;
			case 2:
				printf("English Language and Literature");
				break;
			case 3:
				printf("Turkish Language and Literature");
				break;
			case 4:
				printf("Physics");
				break;
			case 5:
				printf("Molecular Biology and Genetics");
				break;
			case 6:
				printf("Psychology");
				break;
			default:
				printf("Unknown Department Number. Try Again.\n");
				continue;
			}
			break; }
		case 3: {
			printf("Faculty of Law\n");
			printf("Department = ");
			switch (dn)
			{
			case 1:
				printf("Private Law");
				break;
			case 2:
				printf("Public Law");
				break;
			default:
				printf("Unknown Department Number. Try Again.\n");
				continue;
			}
			break; }
		case 4: {
			printf("Faculty of Education\n");
			printf("Department = ");
			switch (dn)
			{
			case 1:
				printf("Department of Educational Sciences");
				break;
			case 2:
				printf("Deparment of Foreign Language Education");
				break;
			case 3:
				printf("Department of Elementary Education");
				break;

			default:
				printf("Unknown Department Number. Try Again.\n");
				continue;
			}
			break; }
		case 5: {
			printf("Faculty of Economic and Administrative\n");
			printf("Department = ");
			switch (dn)
			{
			case 1:
				printf("Economics");
				break;
			case 2:
				printf("Business Administration(Turkish)");
				break;
			case 3:
				printf("Business Administration(English)");
				break;
			case 4:
				printf("International Relations");
				break;
			case 5:
				printf("International Trade(Turkish)");
				break;
			case 6:
				printf("International Trade(English)");
				break;
			case 7:
				printf("Enterpreneurship");
				break;
			default:
				printf("Unknown Department Number. Try Again.\n");
				continue;
			}
			break; }
		case 6: {
			printf("Faculty of Art and Design\n");
			printf("Department = ");
			switch (dn)
			{
			case 1:
				printf("Communication Design");
				break;
			case 2:
				printf("Art Management");
				break;
			case 3:
				printf("Communication Arts");
				break;
			case 4:
				printf("Film and Television");
				break;
			case 5:
				printf("Gastronomy and Culinary Arts");
				break;
			case 6:
				printf("New Media and Communication");
				break;
			case 7:
				printf("Cartoon and Animation");
				break;
			default: {
				printf("Unknown Department Number. Try Again.\n");
				continue; }
			}
			break; }
		case 7: {
			printf("Faculty of Architecture\n");
			printf("Department = ");
			switch (dn)
			{
			case 1:
				printf("Architecture(Turkish)");
				break;
			case 2:
				printf("Architecture(English)");
				break;
			case 3:
				printf("Interior Architecture & Environmental Design(Turkish)");
				break;
			case 4:
				printf("Interior Architecture & Environmental Design(English)");
				break;
			default: {
				printf("Unknown Department Number. Try Again.\n");
				continue; }
			}
			break; }
		case 8: {
			printf("Faculty of Health Sciences\n");
			printf("Department = ");
			switch (dn)
			{
			case 1:
				printf("Nutrition Dietetics");
				break;
			case 2:
				printf("Physiotherapy and Rehabilitation");
				break;
			default: {
				printf("Unknown Department Number. Try Again.\n");
				continue; }
			}
			break; }
		default:
			printf("Unknown Faculty Number Entered, Please Try Again.\n");
			continue;
		}
		printf("\nStudent  No = %d\n", stdn);
		printf("Continue..? Yes(Y) or No(N) = ");
		scanf(" %c", &answer);
		if (answer == 'y' || answer == 'Y')//Catcgh the correct answer with if statement
			answer = 'y';
		else {
			if (answer == 'n' || answer == 'N')
				break;
			else {
				while ((getchar(remain)) != '\n')//if enter different chararcter from Y or N show error and try again

					remain = '\n';

				printf("Wrong Format.Please Try Again.(1 Left...)\n Continue..Yes(Y) or No(N)");
				scanf(" %c", &answer);
			}

		}
	}
	printf("GoodBye!...\n");
	system("pause");
	return 0;
}