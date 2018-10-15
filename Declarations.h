//***************************************/ /** Definitions **/ /*********************************************//                             

/******/ /** Constants (Unchangable Variables **/ /************/
#define Y 9                // length of the Row
#define X 43               // length of the Coloumn
#define P_head 10          // Starting Postion of Pointer


												  //******************************************************************************//
												  //                                Declarations
												  //******************************************************************************//
												  /****************************/ /** Global Variables **/ /************************/

int A = 10, B = 21, C = 33;                      // pointer Positions
int loopdisplay = 1;                             // mainProgram loop variable
int interface[Y][X];                             // The interface
int input;                                       //input
int Moves = 0;
int END =0;
int pointer_len = 1;
int p_pos = P_head;                              // Pointers present Position ( corrodinate or Interface[2][X]) 											  
int i, j;
int Interface_object[4][3] = {
	{ 3,1,1 },    // (0,1)
	{ 5,1,1 },    // (1,1)
	{ 7,1,1 },    // (2,1)
	{ 9,1,1 } };  // (3,1)
				  /***************/ /** STRUCTURES **/ /**********************************************/
struct corrd
{
	int row;
	int col;
	int array_positionrow;
	int array_positioncol;
}Three, Five, Seven, Nine;

//*******************************************************************************************//

