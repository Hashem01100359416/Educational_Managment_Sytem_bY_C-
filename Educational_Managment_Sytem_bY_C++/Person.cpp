#include "Person.h"
// Defalt Constructor implementation
Person::Person():ID(0),Age(0),Username("Unknown"),Password("Unknown"),Email("Unknown"),Addresse("Unknown")  // inshilaization list way 
{}

// Parameters Constructor implementation
Person::Person(int id, int age, string first_Name, string last_Name, string username, string password, string Email, string addresse):ID(id), Age(age),First_Name(first_Name), Username(username), Last_Name(last_Name), Password(password), Email(Email), Addresse(addresse) // inshilaization list way 
{}

Person::Person(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse, vector<pair<string, string>> list_my_couses) : ID(id), Age(age), First_Name(first_Name), Last_Name(last_Name), Username(username), Password(password), Email(Email), Addresse(addresse),List_My_Courses(list_my_couses)
{
}


void Person::set_ID(int id)
{
	ID = id;
}
int Person::get_ID()
{
	return ID;
}

void Person::set_Age(int age)
{
	Age=age;
}
int Person::get_Age()
{
	return Age;
}

void Person::set_First_Name(string f_name)
{
	First_Name = f_name;
}

string Person::get_FirstName()
{
	return First_Name;
}

void Person::set_Last_Name(string L_name)
{
	Last_Name = L_name;
}

string Person::get_LastName()
{
	return Last_Name;
}

void Person::set_Username(string username)
{
	Username = username;
}

string Person::get_Username()
{
	return Username;
}

void Person::set_Password(string password)
{
	Password = password;
}

string Person::get_Password()
{
	return Password;
}

void Person::set_Email(string email)
{
	Email = email;
}

string Person::get_Email()
{
	return Email;
}

void Person::set_Adderess(string addresse)
{
	Addresse = addresse;
}

string Person::get_Adderess()
{
	return Addresse;
}

void Person::set_Course(string Course_Name, string Course_Code)
{
	pair<string, string>p;
	p.first = Course_Name;
	p.second = Course_Code;
	List_My_Courses.push_back(p);
}

vector<pair<string, string>> Person::get_List_MY_Courses()
{
	return List_My_Courses;
	
	// or return vector<pair<string, string>>(List_My_Courses);
}



void Person::set_Data(int id, int age, string first_Name, string last_Name , string username, string password, string email, string addresse, vector<pair<string, string>> list_my_couses)
{
	ID = id;
	Age = age;
	Last_Name = last_Name;
	First_Name = first_Name;
	Username = username;
	Password = password;
	Email = email;
	Addresse = addresse;
	for (int i = 0; i < list_my_couses.size(); i++)
		List_My_Courses.push_back(list_my_couses[i]);
}

void Person::set_Data(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse)
{
	ID = id;
	Age = age;
	Last_Name = last_Name;
	First_Name = first_Name;
	Username = username;
	Password = password;
	Email = email;
	Addresse = addresse;
}


void Person::set_List_MY_Courses(vector<pair<string,string>>List_MY_Courses) // course_name  course_Code 
{
	List_My_Courses.clear();
	List_My_Courses = List_MY_Courses;
}
