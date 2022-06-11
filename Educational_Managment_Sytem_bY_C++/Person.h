#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person  // Class Model Abstract Concept and Ploymorephism Concept and Encabsulation
{
	// data hiding  Concept 
private:
	int ID;
	int Age;
	string First_Name;
	string Last_Name;  //string first_Name,string last_Name;
	string Username;
	string Password;
	string Email;
	string Addresse;
	vector<pair<string, string>>List_My_Courses; //List_My_Courses->(Course_Name,Course_Code)
public:
	// Defalt Constructor
	Person();
	// Parameters Constructor 
	Person(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse);
	
	Person(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse, vector<pair<string, string>> list_my_couses);
	
	void set_ID(int id); // seter method
	int get_ID();    // geter method

	void set_Age(int age);
	int get_Age();

	void set_First_Name(string f_name);
	string get_FirstName();

	void set_Last_Name(string L_name);
	string get_LastName();
	
	void set_Username(string username);
	string get_Username();

	void set_Password(string password);
	string get_Password();

	void set_Email(string email);
	string get_Email();


	void set_Adderess(string addresse);
	string get_Adderess();

	void set_Course(string Course_Name, string Course_Code); // Seter
	vector<pair<string, string>> get_List_MY_Courses(); // Geter

	//Person operator =(Person);



	virtual void set_Data(int id, int age, string first_Name,string last_Name, string username, string password, string email, string addresse, vector<pair<string, string>> list_my_couses);


	// overriding method 
	virtual void set_Data(int id, int age, string first_Name,string last_Name, string username, string password, string email, string adderess);
	void set_List_MY_Courses(vector<pair<string, string>> List_MY_Course);
};

