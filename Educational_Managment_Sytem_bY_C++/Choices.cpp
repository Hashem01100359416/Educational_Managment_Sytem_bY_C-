#include "Choices.h"


int Choices::Choice_Main_Menu_Sign_IN_Sign_UP()
{
	int choice;
	while (true)
	{
		cout << "\nEnter Choice [1-3] : ";
		cin >> choice;
		if (choice < 1 || choice>3)
			cout << "\nPlease Enter Correct Choice....\n\n\a";
		else
			break;
	}
	cout << "\n\n";
	return choice;
}