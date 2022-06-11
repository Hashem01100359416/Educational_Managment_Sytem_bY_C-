#include "Teaching_Assistant.h"

Teaching_Assistant::Teaching_Assistant():Person()
{
}
Teaching_Assistant::Teaching_Assistant(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse) :Person(id, age, first_Name, last_Name, username, password, email, addresse)
{
}
Teaching_Assistant::Teaching_Assistant(int id, int age, string first_Name, string last_Name, string username, string password, string email, string addresse, vector<pair<string, string>> list_my_couses) :Person(id, age, first_Name, last_Name, username, password, email, addresse,list_my_couses)
{
}
