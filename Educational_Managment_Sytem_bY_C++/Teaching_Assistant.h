#pragma once
#include "Person.h"
#include <iostream>

using namespace std;

class Teaching_Assistant :public Person
{
private:

public:
	Teaching_Assistant();
	Teaching_Assistant(int id, int age, string first_Name, string last_Name, string username, string password, string Email, string addresse);
	Teaching_Assistant(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse, vector<pair<string, string>> list_my_couses);
};

