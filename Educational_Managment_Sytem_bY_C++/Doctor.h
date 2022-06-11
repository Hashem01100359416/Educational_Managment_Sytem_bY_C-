#pragma once
#include "Person.h"
#include <iostream>
#include <vector>
using namespace std;

class Doctor :public Person // Inhertance from Person Class
{
private:
	vector<pair<string, string>>List_Added_Courses;
public:
	Doctor(); // Defalt Constructor
	Doctor(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse); // Parameters Constructor
	Doctor(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse, vector<pair<string, string>> list_my_couses);
};

