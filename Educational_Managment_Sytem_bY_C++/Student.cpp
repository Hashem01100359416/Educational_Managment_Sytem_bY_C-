#include "Student.h"

Student::Student() :Person()
{
}
Student::Student(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse) : Person(id, age, first_Name, last_Name, username, password, email, addresse)
{
}
Student::Student(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse, vector<pair<string, string>> list_my_couses):Person(id, age, first_Name, last_Name,username, password, email, addresse, list_my_couses)
{
}

