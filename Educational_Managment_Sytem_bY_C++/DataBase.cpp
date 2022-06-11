#include "DataBase.h"
 // return true or flase and id and user type 

void DataBase::set_Doctor(Doctor d)
{
	Doctors.push_back(d);
}
vector<Doctor> DataBase::get_Docotrs()
{
	return Doctors;
}

void DataBase::set_Student(Student s)
{
	Students.push_back(s);
}
vector<Student> DataBase::get_Student()
{
	return Students;
}

void DataBase::set_Teaching_Assistant(Teaching_Assistant TA)
{
	Teaching_Assistants.push_back(TA);
}
vector<Teaching_Assistant> DataBase::get_Teaching_Assistants()
{
	return Teaching_Assistants;
}

void DataBase::set_Course(Course c)
{
	Courses.push_back(c);
}
vector<Course> DataBase::get_Courses()
{
	return Courses;
}

void DataBase::set_database()
{
}

void DataBase::Update_database()
{
}
