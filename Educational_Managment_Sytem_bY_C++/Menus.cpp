#include "Menus.h"


void Menus::Main_Menu_Login_IN_Sign_UP()
{
	cout << "Please Choose form Menu :\n";
	cout << "1 - Login\n";
	cout << "2 - Sign Up\n";
	cout << "3 - Shutdown system\n";
}

pair<string, pair<string, char>> Menus::Data_Login()
{
	pair<string, pair<string, char>> pup;
	cout << "is yor Doctor or Student or TA Enter [D,S,T]: ";
	cin >> pup.second.second;
	cout << "Please Enter Your Username and Password:\n";
	cout << "Username : ";
	cin >> pup.first;
	cout << "Password : ";
	cin >> pup.second.first;
	cout << "\n";
	return pup;
}

pair<char, Person>  Menus::Data_Sign_UP()
{
	pair<char, Person>pcp;
	int id,age;
	string F_name,L_name,username,password,email,addresse;
	char tu;
	cout << "Is You Doctor or Student or Teaching_Assistant Enter [D,S,T]: ";
	cin >> tu;

	if (tu == 'D'|| tu == 'S' || tu == 'T')
	{
		cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
		cout << "Enter First Name : ";
		cin >> F_name;
		cout << "Enter Last Name : ";
		cin >> L_name;
		cout << "Enter Age : ";
		cin >> age;
		cout << "Enter ID : ";
		cin >> id;
		cout << "Enter Username : ";
		cin >> username;
		cout << "Enter Password : ";
		cin >> password;
		cout << "Enter Email : ";
		cin >> email;
		cout << "Enter Addresse : ";
		cin >> addresse;
		cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
		switch (tu)
		{
		case 'D':
			pcp.first = 'D';
			pcp.second.set_Data(id, age, F_name, L_name, username, password, email, addresse);
			break;
		case 'S':
			pcp.first = 'S';
			pcp.second.set_Data(id, age, F_name, L_name, username, password, email, addresse);

			break;
		case 'T':
			pcp.first = 'T';
			pcp.second.set_Data(id, age, F_name, L_name, username, password, email, addresse);

			break;
		}
		return pcp;
	}
	else
	{
		cout << "ERROR::OUT_OF_ARANGE.....\a\n\n";

		cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
	}
}


