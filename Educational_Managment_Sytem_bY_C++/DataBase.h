#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Doctor.h"  // Doctor Class
#include "Student.h"   // Student Class
#include "Teaching_Assistant.h" // Teaching_Assistant Class
#include "Course.h" // Course Class
#include "Person.h"
using namespace std;
class DataBase
{
private:
	vector<Doctor> Doctors;
	vector<Student> Students;
	vector<Teaching_Assistant> Teaching_Assistants;
	vector<Course> Courses;
public:
	

	void set_Doctor(Doctor);
	vector<Doctor> get_Docotrs();

	void set_Student(Student);
	vector<Student> get_Student();

	void set_Teaching_Assistant(Teaching_Assistant);
	vector<Teaching_Assistant> get_Teaching_Assistants();

	void set_Course(Course);
	vector<Course> get_Courses();

	void set_database();  // files will be her;
	void Update_database();
};

