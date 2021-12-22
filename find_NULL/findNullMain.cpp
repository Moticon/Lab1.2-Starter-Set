#include "findNullHeader.h"

void main() {
	char userInput[MAX_CHARS + 1];

	cout << "Enter anything on your mind...  Write a lot if you like!" << endl
		<< "You have up to 2000 characters... (I won't count though). " << endl;
	cin.getline(userInput, MAX_CHARS); 
	

	cout << "You entered \n-------------------------------\n" << userInput << endl << endl ; 
	cout << "------------------------------\n\n That was interesting!"; 
}