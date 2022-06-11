#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Person.h"
using namespace std;

class Menus
{
public:
	static void Main_Menu_Login_IN_Sign_UP();  // Main Menu
	static pair<string, pair<string, char>> Data_Login();  // Sign_IN Menu
	
	static pair<char,Person> Data_Sign_UP();
};

