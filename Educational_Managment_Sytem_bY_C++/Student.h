#pragma once
#include "Person.h"
#include <vector>

class Student :public Person   //Inhertance from Person Class
{
private:
	
public:
	// Defalt Constructor
	Student(); 
	// Parameters Constructor
	Student(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse);
	Student(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse, vector<pair<string, string>> list_my_couses);
};

