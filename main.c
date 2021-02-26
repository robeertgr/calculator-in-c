#include <stdio.h>
#include <stdlib.h>

int main(){
	float sum, minus, times, divided_by, total, x, y;
	int option;
	
	printf ("\t+------CALCULATOR-------+\n");
	printf ("\t| CHOOSE THE OPERATION  |\n");
	printf ("\t+-----------------------+\n");
	printf ("\t|1) +                   |\n");
	printf ("\t|2) -                   |\n");
	printf ("\t|3) *                   |\n");
	printf ("\t|4) /                   |\n");
	printf ("\t|                       |\n");
	printf ("\t|                       |\n");
	printf ("\t|Developed by: Robert   |\n");
	printf ("\t+-----------------------+\n\n");
	printf ("\tOption: ");
	scanf ("%d", &option);
	system("cls");	
	
	printf ("\t+------CALCULATOR-------+\n");
	printf ("\t| Type number X         |\n");
	printf ("\t+-----------------------+\n\t");
	scanf ("%f", &x);
	
	printf ("\t+------CALCULATOR-------+\n");
	printf ("\t| Type number Y         |\n");
	printf ("\t+-----------------------+\n\t");
	scanf ("%f", &y);
	system("cls");
	
	switch (option){
		case 1: sum = x + y;
		printf ("\t+------CALCULATOR-------+\n");
		printf ("\t| Plus result: %.2f     |\n", sum);
		printf ("\t+-----------------------+\n\t");
		break;
		
		case 2: minus = x - y;
		printf ("\t+------CALCULATOR-------+\n");
		printf ("\t| Minus result: %.2f    |\n", minus);
		printf ("\t+-----------------------+\n\t");
		break;
		
		case 3: times = x * y;
		printf ("\t+------CALCULATOR-------+\n");
		printf ("\t| Times result: %.2f    |\n", times);
		printf ("\t+-----------------------+\n\t");
		break;
		
		case 4: divided_by = x / y;
		printf ("\t+------CALCULATOR---------+\n");
		printf ("\t| Divided by result: %.2f |\n", divided_by);
		printf ("\t+-------------------------+\n\t");
		break;
		
		default: printf ("Option wrong! Program will be finalized.");
		break;
	}
	return 0;	
}
