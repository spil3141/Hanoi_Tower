
/*****************************************************************************************/
/*                              Developed functions                                      */
/*****************************************************************************************/
/****************************Title Display ************************************/
void Logo()
{
	puts("");
	printf("{}  {}  {}{}  {}   {}  {}{} {}{}{}  {}{}{}{} {}{}  {}    {} {}{}{} {}{}{}\n{}  {} {}  {} {}{} {} {}  {}  {}       {}   {}  {} {}    {} {}     {}  {}\n{}{}{} {}{}{} {} {}{} {}  {}  {}       {}   {}  {} {}    {} {}{}   {}{}{}\n{}  {} {}  {} {} {}{} {}  {}  {}       {}   {}  {} {} {} {} {}     {}{}\n{}  {} {}  {} {}   {}  {}{} {}{}{}     {}    {}{}  {}}  {{} {}{}{} {}  {}\n");
}
/**********************************************************************************************/
/***************************************Help Option*******************************************************/
void help()
{
	system("clear");
	printf("Welcome to The hanoi Towel!\nObjective:\n1. Move the disks from the first bar to the third bar\n2. Dont not place a bigger disk over a smaller disk.");
	//system("pause");
	int i;
	for (i = 0; i<1000000000; i++);

}
/**********************************************************************************************/
/**********************************************************************************************/
//                               Resetting of pointer's outdated positional values             
void pointer_positionreseter()
{

	switch (pointer_len)
	{
	case 1:
		interface[2][21] = 1;
		interface[2][32] = 1;
		interface[2][10] = 1;
		break;
	case 3:
		for (j = 10; j <= 32; j += 11)
			for (i = j - 1; i <= j + 1; i++)interface[2][i] = 1;
		break;
	case 5:
		for (j = 10; j <= 32; j += 11)
			for (i = j - 2; i <= j + 2; i++)interface[2][i] = 1;
		break;
	case 7:
		for (j = 10; j <= 32; j += 11)
			for (i = j - 3; i <= j + 3; i++)interface[2][i] = 1;
		break;
	case 9:
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[2][i] = 1;
		break;
	}
}
/**********************************************************************************************/

/*****************************************************************************************/
//                              Pointer's movement                        
//					p_pos = persent corrodinates of Pointer               
//					pointer_len = The persent size of the pointer array   

void Pointer()
{
	int start;
	int end;
	switch (pointer_len)
	{
	case 1:
		interface[2][p_pos] = 9;
		break;
	case 3:
		start = p_pos - 1;
		end = p_pos + 1;
		for (i = start; i <= end; i++) interface[2][i] = 9;
		break;
	case 5:
		start = p_pos - 2;
		end = p_pos + 2;
		for (i = start; i <= end; i++) interface[2][i] = 9;
		break;
	case 7:
		start = p_pos - 3;
		end = p_pos + 3;
		for (i = start; i <= end; i++) interface[2][i] = 9;
		break;
	case 9:
		start = p_pos - 4;
		end = p_pos + 4;
		for (i = start; i <= end; i++) interface[2][i] = 9;
		break;

	}
	start = 0;
	end = 0;
}
/**********************************************************************************************/
/**********************************************************************************************/
//          Medium b/w Pointer's movement and resetting of previous positional values 
//Ex:if pointer at Interface[2][10] was 9 (* or pointer's mark), then itll b reset to 0==' ' 
/**********************************************************************************************/
void Pointer_movement()
{
	switch (p_pos)
	{
	case 10:
		pointer_positionreseter();
		break;
	case 21:
		pointer_positionreseter();
		break;
	case 32:
		pointer_positionreseter();
		break;

	}

}

/**********************************************************************************************/
//                              Interface initialization (???)                         
void Interface()
{
	for (i = 0; i<Y; i++)
	{
		for (j = 0; j<X; j++)
		{
			if (i == 0 || i == Y - 1 || j == 0 || j == X - 1)
			{
				interface[i][j] = 0; // border
			}
			else {
				interface[i][j] = 1; // workstation or Empty space
			}
		}
	}
}
/**********************************************************************************************/
void Disk_reset()
{
	switch (p_pos)
	{
	case 10:
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[4][i] = 1;
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[5][i] = 1;
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[6][i] = 1;
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[7][i] = 1;
		break;
	case 21:
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[4][i] = 1;
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[5][i] = 1;
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[6][i] = 1;
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[7][i] = 1;
		break;
	case 32:
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[4][i] = 1;
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[5][i] = 1;
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[6][i] = 1;
		for (j = 10; j <= 32; j += 11)
			for (i = j - 4; i <= j + 4; i++)interface[7][i] = 1;
		break;
		break;
		break;
	}

}
/**********************************************************************************************/
//                              Displaying the Interface
void display_interface()
{
	// Bars
	//f. 1st
	for (i = 3; i <= 7; i++)interface[i][10] = 5;
	//g. 2nd
	for (i = 3; i <= 7; i++)interface[i][21] = 5;
	//h. 3rd
	for (i = 3; i <= 7; i++)interface[i][32] = 5;
	// Main interface
	puts("\n\n\n\n\n");
	for (i = 0; i<Y; i++)
	{
		printf("\t\t");
		for (j = 0; j<X; j++)
		{
			switch (interface[i][j])
			{
			case 0:
				printf("#");                            // Border
				break;
			case 1:
				printf(" ");                            // workstation
				break;
			case 5:
				printf("|");                            // empty bar
				break;
			case 9:
				printf("*");                            // Pointer || Disk 
				break;
			}
		}
		printf("\n");
	}
}
/********************************************************************************************************/
//************************************Disk Reset function************************************************//
//   The Placement of the disks relative to Interface_object[][](Array the symbolize the main interface 
// WE need a Disk ' position' reset function due to the result of the previous test 
void Display_disk()
{
	//Error fix < The values are only initialize in the if condition so if non of the conditions are true the require will be an error>
	Three.array_positionrow = 100;
	Three.array_positioncol = 100;
	Five.array_positionrow = 100;
	Five.array_positioncol = 100;
	Seven.array_positionrow = 100;
	Seven.array_positioncol = 100;
	Nine.array_positionrow = 100;
	Nine.array_positioncol = 100;
	//************************************************************
	int x, y;
	for (x = 0; x<4; x++)
	{
		for (y = 0; y<3; y++)
		{
			if (Interface_object[x][y] == 3)
			{
				Three.array_positionrow = x;
				Three.array_positioncol = y;
			}
			if (Interface_object[x][y] == 5)
			{
				Five.array_positionrow = x;
				Five.array_positioncol = y;
			}
			if (Interface_object[x][y] == 7)
			{
				Seven.array_positionrow = x;
				Seven.array_positioncol = y;
			}
			if (Interface_object[x][y] == 9)
			{
				Nine.array_positionrow = x;
				Nine.array_positioncol = y;
			}
		}
	}
	//************************************************************************//
	//   To find the position of the representive values position in the main display
	// Case 3
	if (Three.array_positionrow == 0 && Three.array_positioncol == 0)
	{
		Three.row = 4;
		Three.col = (10 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 1 && Three.array_positioncol == 0)
	{
		Three.row = 5;
		Three.col = (10 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 2 && Three.array_positioncol == 0)
	{
		Three.row = 6;
		Three.col = (10 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 3 && Three.array_positioncol == 0)
	{
		Three.row = 7;
		Three.col = (10 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 0 && Three.array_positioncol == 1)
	{
		Three.row = 4;
		Three.col = (21 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 1 && Three.array_positioncol == 1)
	{
		Three.row = 5;
		Three.col = (21 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 2 && Three.array_positioncol == 1)
	{
		Three.row = 6;
		Three.col = (21 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 3 && Three.array_positioncol == 1)
	{
		Three.row = 7;
		Three.col = (21 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 0 && Three.array_positioncol == 2)
	{
		Three.row = 4;
		Three.col = (32 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 1 && Three.array_positioncol == 2)
	{
		Three.row = 5;
		Three.col = (32 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 2 && Three.array_positioncol == 2)
	{
		Three.row = 6;
		Three.col = (32 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	else if (Three.array_positionrow == 3 && Three.array_positioncol == 2)
	{
		Three.row = 7;
		Three.col = (32 - 1);
		for (i = 0; i<3; i++)interface[Three.row][(Three.col) + i] = 9;
	}
	//************************************************************************//
	// 5 Case
	if (Five.array_positionrow == 0 && Five.array_positioncol == 0)
	{
		Five.row = 4;
		Five.col = (10 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 1 && Five.array_positioncol == 0)
	{
		Five.row = 5;
		Five.col = (10 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 2 && Five.array_positioncol == 0)
	{
		Five.row = 6;
		Five.col = (10 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 3 && Five.array_positioncol == 0)
	{
		Five.row = 7;
		Five.col = (10 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 0 && Five.array_positioncol == 1)
	{
		Five.row = 4;
		Five.col = (21 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 1 && Five.array_positioncol == 1)
	{
		Five.row = 5;
		Five.col = (21 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 2 && Five.array_positioncol == 1)
	{
		Five.row = 6;
		Five.col = (21 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 3 && Five.array_positioncol == 1)
	{
		Five.row = 7;
		Five.col = (21 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 0 && Five.array_positioncol == 2)
	{
		Five.row = 4;
		Five.col = (32 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 1 && Five.array_positioncol == 2)
	{
		Five.row = 5;
		Five.col = (32 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 2 && Five.array_positioncol == 2)
	{
		Five.row = 6;
		Five.col = (32 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	else if (Five.array_positionrow == 3 && Five.array_positioncol == 2)
	{
		Five.row = 7;
		Five.col = (32 - 2);
		for (i = 0; i<5; i++)interface[Five.row][(Five.col) + i] = 9;
	}
	//************************************************************************//
	// Case 7
	if (Seven.array_positionrow == 0 && Seven.array_positioncol == 0)
	{
		Seven.row = 4;
		Seven.col = (10 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 1 && Seven.array_positioncol == 0)
	{
		Seven.row = 5;
		Seven.col = (10 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 2 && Seven.array_positioncol == 0)
	{
		Seven.row = 6;
		Seven.col = (10 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 3 && Seven.array_positioncol == 0)
	{
		Seven.row = 7;
		Seven.col = (10 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 0 && Seven.array_positioncol == 1)
	{
		Seven.row = 4;
		Seven.col = (21 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 1 && Seven.array_positioncol == 1)
	{
		Seven.row = 5;
		Seven.col = (21 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 2 && Seven.array_positioncol == 1)
	{
		Seven.row = 6;
		Seven.col = (21 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 3 && Seven.array_positioncol == 1)
	{
		Seven.row = 7;
		Seven.col = (21 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 0 && Seven.array_positioncol == 2)
	{
		Seven.row = 4;
		Seven.col = (32 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 1 && Seven.array_positioncol == 2)
	{
		Seven.row = 7;
		Seven.col = (32 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 2 && Seven.array_positioncol == 2)
	{
		Seven.row = 6;
		Seven.col = (32 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	else if (Seven.array_positionrow == 3 && Seven.array_positioncol == 2)
	{
		Seven.row = 7;
		Seven.col = (32 - 3);
		for (i = 0; i<7; i++)interface[Seven.row][(Seven.col) + i] = 9;
	}
	//************************************************************************//
	// Case 9
	if (Nine.array_positionrow == 0 && Nine.array_positioncol == 0)
	{
		Nine.row = 4;
		Nine.col = (10 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 1 && Nine.array_positioncol == 0)
	{
		Nine.row = 5;
		Nine.col = (10 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 2 && Nine.array_positioncol == 0)
	{
		Nine.row = 6;
		Nine.col = (10 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 3 && Nine.array_positioncol == 0)
	{
		Nine.row = 7;
		Nine.col = (10 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 0 && Nine.array_positioncol == 1)
	{
		Nine.row = 4;
		Nine.col = (21 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 1 && Nine.array_positioncol == 1)
	{
		Nine.row = 5;
		Nine.col = (21 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 2 && Nine.array_positioncol == 1)
	{
		Nine.row = 6;
		Nine.col = (21 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 3 && Nine.array_positioncol == 1)
	{
		Nine.row = 7;
		Nine.col = (21 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 0 && Nine.array_positioncol == 2)
	{
		Nine.row = 4;
		Nine.col = (32 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 1 && Nine.array_positioncol == 2)
	{
		Nine.row = 7;
		Nine.col = (32 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 2 && Nine.array_positioncol == 2)
	{
		Nine.row = 6;
		Nine.col = (32 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	else if (Nine.array_positionrow == 3 && Nine.array_positioncol == 2)
	{
		Nine.row = 7;
		Nine.col = (32 - 4);
		for (i = 0; i<9; i++)interface[Nine.row][(Nine.col) + i] = 9;
	}
	//*********************************************************************************************************//
}
/*********************************************************************************************************/
//*****************************************************/*Logic of the Game */****************************************************//
/*When at 10,21,32 postion we use these functions< these are the functions the impliments the logic of the hanio towel game */
void at_10_pointer_len()  // Uses Pointer's (position at the 10 positioin /Interface[2][10]) and Pointer's length 
{
	int temp;
	switch (pointer_len)
	{
	case 1://****While the pointer_len is 1 : find where 3,5,7, or 9 is and swap length with pointer_len ***   
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][0] == 3)
			{
				temp = Interface_object[i][0];
				Interface_object[i][0] = pointer_len;
				pointer_len = temp;
				break;
			}
			if (Interface_object[i][0] == 5)
			{
				temp = Interface_object[i][0];
				Interface_object[i][0] = pointer_len;
				pointer_len = temp;
				break;
			}
			if (Interface_object[i][0] == 7)
			{
				temp = Interface_object[i][0];
				Interface_object[i][0] = pointer_len;
				pointer_len = temp;
				break;
			}
			if (Interface_object[i][0] == 9)
			{
				temp = Interface_object[i][0];
				Interface_object[i][0] = pointer_len;
				pointer_len = temp;
				break;
			}
		}
		break;
	case 3:        //****While the pointer_len is 3 : Find a place to put 3                      
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][0] > 3)   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][0] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		i = 0;
		Interface_object[i + 3][0] = pointer_len;
		pointer_len = 1;
		Moves++;
		return;
		break;
	case 5:
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][0] > 5 && (Interface_object[0][0] != 3 && Interface_object[1][0] != 3 && Interface_object[2][0] != 3 && Interface_object[3][0] != 3))   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][0] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		i = 0;
		if ((Interface_object[0][0] == 1 && Interface_object[1][0] == 1 && Interface_object[2][0] == 1 && Interface_object[3][0] == 1) && (Interface_object[0][0] != 3 && Interface_object[1][0] != 3 && Interface_object[2][0] != 3 && Interface_object[3][0] != 3))
		{
			Interface_object[i + 3][0] = pointer_len;
			pointer_len = 1;
			Moves++;
			return;
		}
		break;
	case 7:
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][0] > 7 )   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][0] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		i = 0;
		if ((Interface_object[0][0] == 1 && Interface_object[1][0] == 1 && Interface_object[2][0] == 1 && Interface_object[3][0] == 1) && (Interface_object[0][0] != 3 && Interface_object[1][0] != 3 && Interface_object[2][0] != 3 && Interface_object[3][0] != 3) && (Interface_object[0][0] != 5 && Interface_object[1][0] != 5 && Interface_object[2][0] != 5 && Interface_object[3][0] != 5))
		{
			Interface_object[i + 3][0] = pointer_len;
			pointer_len = 1;
			Moves++;
			return;
		}
		break;
	case 9:
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][0] > 9)   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][0] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		i = 0;
		if ((Interface_object[0][0] == 1 && Interface_object[1][0] == 1 && Interface_object[2][0] == 1 && Interface_object[3][0] == 1) &&
			(Interface_object[0][0] != 3 && Interface_object[1][0] != 3 && Interface_object[2][0] != 3 && Interface_object[3][0] != 3) &&
			(Interface_object[0][0] != 5 && Interface_object[1][0] != 5 && Interface_object[2][0] != 5 && Interface_object[3][0] != 5) &&
			(Interface_object[0][0] != 7 && Interface_object[1][0] != 7 && Interface_object[2][0] != 7 && Interface_object[3][0] != 7))
		{
			Interface_object[i + 3][0] = pointer_len;
			pointer_len = 1;
			Moves++;
			return;
		}
		break;
	}
}
void at_21_pointer_len()  // Uses Pointer's (position at the 21 positioin /Interface[2][21]) and Pointer's length 
{
	int temp;
	switch (pointer_len)
	{
	case 1://****While the pointer_len is 1 : find where 3 is and replace the length of the pointer with the value of 3 ***  

		for (i = 0; i < 4; i++)
		{	//Deguy
			/*************************Search the array for the frist number (3,5,7 or 9) and swap with the pointerlength***************************/
			if (Interface_object[i][1] == 3)
			{
				temp = Interface_object[i][1];
				Interface_object[i][1] = pointer_len;
				pointer_len = temp;
				break;
			}
			if (Interface_object[i][1] == 5)
			{
				temp = Interface_object[i][1];
				Interface_object[i][1] = pointer_len;
				pointer_len = temp;
				break;
			}
			if (Interface_object[i][1] == 7)
			{
				temp = Interface_object[i][1];
				Interface_object[i][1] = pointer_len;
				pointer_len = temp;
				break;
			}
			if (Interface_object[i][1] == 9)
			{
				temp = Interface_object[i][1];
				Interface_object[i][1] = pointer_len;
				pointer_len = temp;
				break;
			}
		}
		break;
	case 3:        //****While the pointer_len is 3 : Find a place to put 3                      
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][1] > 3)   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][1] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
			if (i == 3)
			{
				Interface_object[3][1] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		break;
	case 5:
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][1] > 5)   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][1] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		i = 0;
		if ((Interface_object[0][1] == 1 && Interface_object[1][1] == 1 && Interface_object[2][1] == 1 && Interface_object[3][1] == 1) && (Interface_object[0][1] != 3 && Interface_object[1][1] != 3 && Interface_object[2][1] != 3 && Interface_object[3][1] != 3))
		{
			Interface_object[i + 3][1] = pointer_len;
			pointer_len = 1;
			Moves++;
			return;
		}
		break;
	case 7:
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][1] > 7)   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][1] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		i = 0;
		if ((Interface_object[0][1] == 1 && Interface_object[1][1] == 1 && Interface_object[2][1] == 1 && Interface_object[3][1] == 1) &&
			(Interface_object[0][1] != 3 && Interface_object[1][1] != 3 && Interface_object[2][1] != 3 && Interface_object[3][1] != 3) &&
			(Interface_object[0][1] != 5 && Interface_object[1][1] != 5 && Interface_object[2][1] != 5 && Interface_object[3][1] != 5))
		{
			Interface_object[i + 3][1] = pointer_len;
			pointer_len = 1;
			Moves++;
			return;
		}
		break;
	case 9:
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][1] > 9)   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][1] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		i = 0;
		if ((Interface_object[0][1] == 1 && Interface_object[1][1] == 1 && Interface_object[2][1] == 1 && Interface_object[3][1] == 1) &&
			(Interface_object[0][1] != 3 && Interface_object[1][1] != 3 && Interface_object[2][1] != 3 && Interface_object[3][1] != 3) &&
			(Interface_object[0][1] != 5 && Interface_object[1][1] != 5 && Interface_object[2][1] != 5 && Interface_object[3][1] != 5) &&
			(Interface_object[0][1] != 7 && Interface_object[1][1] != 7 && Interface_object[2][1] != 7 && Interface_object[3][1] != 7))
		{
			Interface_object[i + 3][1] = pointer_len;
			pointer_len = 1;
			Moves++;
			return;
		}
		break;
	}
}
void at_32_pointer_len()  // Uses Pointer's (position at the 32 positioin /Interface[2][32]) and Pointer's length 
{
	int temp;
	switch (pointer_len)
	{
	case 1://****While the pointer_len is 1 : find where 3 is and replace the length of the pointer with the value of 3 ***  

		for (i = 0; i < 4; i++)
		{	//Deguy
			/*************************Search the array for the frist number (3,5,7 or 9) and swap with the pointerlength***************************/
			if (Interface_object[i][2] == 3)
			{
				temp = Interface_object[i][2];
				Interface_object[i][2] = pointer_len;
				pointer_len = temp;
				break;
			}
			if (Interface_object[i][2] == 5)
			{
				temp = Interface_object[i][2];
				Interface_object[i][2] = pointer_len;
				pointer_len = temp;
				break;
			}
			if (Interface_object[i][2] == 7)
			{
				temp = Interface_object[i][2];
				Interface_object[i][2] = pointer_len;
				pointer_len = temp;
				break;
			}
			if (Interface_object[i][2] == 9)
			{
				temp = Interface_object[i][2];
				Interface_object[i][2] = pointer_len;
				pointer_len = temp;
				break;
			}
		}
		break;
	case 3:        //****While the pointer_len is 3 : Find a place to put 3                      
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][2] > 3)   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][2] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
			//remove
			if (i == 3)
			{
				Interface_object[i][2] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		break;
	case 5:
		// Placement 
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][2] > 5)   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][2] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		//remove
		i = 0;
		if ((Interface_object[0][2] == 1 && Interface_object[1][2] == 1 && Interface_object[2][2] == 1 && Interface_object[3][2] == 1) && (Interface_object[0][2] != 3 && Interface_object[1][2] != 3 && Interface_object[2][2] != 3 && Interface_object[3][2] != 3))
		{
			Interface_object[i + 3][2] = pointer_len;
			pointer_len = 1;
			Moves++;
			return;
		}
		break;
	case 7:
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][2] > 7)   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][2] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		i = 0;
		if ((Interface_object[0][2] == 1 && Interface_object[1][2] == 1 && Interface_object[2][2] == 1 && Interface_object[3][2] == 1) &&
			(Interface_object[0][2] != 3 && Interface_object[1][2] != 3 && Interface_object[2][2] != 3 && Interface_object[3][2] != 3) &&
			(Interface_object[0][2] != 5 && Interface_object[1][2] != 5 && Interface_object[2][2] != 5 && Interface_object[3][2] != 5))
		{
			Interface_object[i + 3][2] = pointer_len;
			pointer_len = 1;
			Moves++;
			return;
		}
		break;
	case 9:
		for (i = 0; i < 4; i++)
		{
			if (Interface_object[i][2] > 9)   // If the pointer with length 3 searchings and find a numebr greater than itself(3) ( put 3 above the number the is greater )  or reach the end of the loop and not find a greater number( put 3 at the end of the list)
			{
				Interface_object[i - 1][2] = pointer_len;
				pointer_len = 1;
				Moves++;
				return;
			}
		}
		i = 0;
		if ((Interface_object[0][2] == 1 && Interface_object[1][2] == 1 && Interface_object[2][2] == 1 && Interface_object[3][2] == 1) &&
			(Interface_object[0][2] != 3 && Interface_object[1][2] != 3 && Interface_object[2][2] != 3 && Interface_object[3][2] != 3) &&
			(Interface_object[0][2] != 5 && Interface_object[1][2] != 5 && Interface_object[2][2] != 5 && Interface_object[3][2] != 5) &&
			(Interface_object[0][2] != 7 && Interface_object[1][2] != 7 && Interface_object[2][2] != 7 && Interface_object[3][2] != 7))
		{
			Interface_object[i + 3][2] = pointer_len;
			pointer_len = 1;
			Moves++;
			return;
		}
		break;
	}
}
// ***************************************************************************************************************************//

//*************************************User click Select / down   ***********************************************//
void click_select()
{
	pointer_positionreseter();
	Disk_reset();
	//  After selection
	switch (p_pos)
	{
	case 10:														 //A = 10 (interface[2][10] = 4;)
		at_10_pointer_len();
		break;
	case 21:                                                         //B = 21;interface[2][21] = 4;
		at_21_pointer_len();
		break;
	case 32:                                                             // C= 32; interface[2]32] = 4;
		at_32_pointer_len();
		break;
	}
}
// ***************************************************************************************************************************//
/*************************************Game Play ************************************************/
void Gameplay()
{
	Interface();                                    //Interface declaration ??
	while (loopdisplay)
	{
		system("clear");
		Pointer();
		Display_disk();
		display_interface();
		printf("\t\t_______LEFT < RIGHT > SELECT \\/ __________\n");
		printf("Move:%d\n",Moves);
		input = getch();
		switch (input)
		{
		case 27:                                        // Left
			if (p_pos<21) p_pos += 11; p_pos -= 11;
			Pointer_movement(); break;
		case -27:                                        // Right
			if (p_pos>21) p_pos -= 11; p_pos += 11;
			Pointer_movement(); break;
		case 'P':                                         // Down ( Being use as select ) 
			click_select(); break;
		}
		//Game Over
		if (Interface_object[0][2] == 3 && Interface_object[1][2] == 5 && Interface_object[2][2] == 7 && Interface_object[3][2] == 9)
		{
			system("clear");
			printf("YOU WON with %d Moves!!! \n",Moves);
			printf("Thanks for Playing :)\n");
			END = 1;
			return;
		}
	}

}
/**********************************************************************************************/





//************************************************************************************//
//                                Developing functions   
//Report :4/22 : 2:39am : I couldnt figure out a way to search the interface_object array ( colomn at a time )
//                        for numbers higher than the pointer_lens . 
//                        if i could get it right , i will have to place the pointer_len above that number or if i cant find 
//                        a number higher than the pointer_len then that means there are no other numbers on that colomn therefore 
//                        I will place the pointer_len at the end of the colomn .
// **************************************************************************************


