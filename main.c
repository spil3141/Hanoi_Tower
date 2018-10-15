//*******************************/*Libraries*/*****************************************************************************//                                  
#include<stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "Declarations.h" 
#include "Functions.h"
//**************************************************************************************************************************//
//********************   getch() Decleration ********

//************************************ERROR **********************************************/
// The logic behind the placement of big over small need to be examine .. 
// Example : plancing 7 over 3 creates an error 



/*********************************/ /** Main Program **/ /**********************************/
void main(void)
{
	int option;
	do {
		system("clear");
		Logo();
		printf("\t\t\t\tBy spil\n");
		printf("\n\n\t\t\t1. Play Game\n\t\t\t2.Help/How to play\n\t\t\t3.Quit\nOption:_\b");
		scanf("%d", &option);
		switch (option)
		{
		case 1:
			Gameplay();
			break;
		case 2:
			help();
			break;
		case 3:
			END = 1;
			break;
		}
	} while (END ==0);
	if (END != 1) for (i = 0; i < 1000000000; i++);
}
//**************************************************************************************//
