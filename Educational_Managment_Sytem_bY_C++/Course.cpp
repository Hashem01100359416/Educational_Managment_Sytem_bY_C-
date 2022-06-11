#include "Course.h"


Course::Course():Course_Name("Unknown"), Course_Code("Unknown"),made_by_Doctor_ID(0)
{
}
Course::Course(string course_name, string course_code, int made_by, string doctor_made) : Course_Name(course_name), Course_Code(course_code), made_by_Doctor_ID(made_by), doctor_Made(doctor_made)
{
}
Course::Course(string course_name, string course_code, string doctor_made, int made_by, vector<int> S_IDS, vector<int> TA_ISD, vector<Assignment> assignmentnew) : Course_Name(course_name), Course_Code(course_code), made_by_Doctor_ID(made_by), Students_IDS_Regester(S_IDS), T_Assistant_IDS(TA_ISD), assignment(assignmentnew),doctor_Made(doctor_made)
{
}


void Course::set_Course_Name(string C_Name)
{
	Course_Name = C_Name;
}
string Course::get_Course_Name()
{
	return Course_Name;
}


void Course::set_Course_Code(string code)
{
	Course_Code = code;
}
string Course::get_Course_Code()
{
	return Course_Code;
}


void Course::set_Students_IDS_Regester(int S_ID)
{
	Students_IDS_Regester.push_back(S_ID);
}
vector<int> Course::get_Students_IDS_Regester()
{
	return Students_IDS_Regester;
}

void Course::set_Students_IDS_Regester_all(vector<int>Students_IDS_Regester_all)
{
	Students_IDS_Regester.clear();
	Students_IDS_Regester = Students_IDS_Regester_all;
}

void Course::set_Doctor_ID(int D_ID)
{
	made_by_Doctor_ID = D_ID;
}

string Course::get_Doctor_Name()
{
	return doctor_Made;
}
void Course::set_Doctor_Name(string n)
{
	doctor_Made = n;
}

int Course::get_Doctor_ID()
{
	return made_by_Doctor_ID;
}


void Course::set_T_Assistant_IDS(int T_A_ID)
{
	T_Assistant_IDS.push_back(T_A_ID);
}
vector<int> Course::get_T_Assistant_IDS()
{
	return T_Assistant_IDS;
}


void Course::set_assignment(Assignment Assi)
{
	assignment.push_back(Assi);
}
vector<Assignment> Course::get_assignment()
{
	return assignment;
}

void Course::set_Data(string course_name, string course_code,string doctor_made, int made_by, vector<int> S_IDS, vector<int> TA_ISD, vector<Assignment> assignmentnew)
{	
	Course_Name = course_name;
	Course_Code = course_code;
	made_by_Doctor_ID = made_by; 
	Students_IDS_Regester = S_IDS; 
	T_Assistant_IDS = TA_ISD; 
	assignment = assignmentnew;
	doctor_Made = doctor_made;
}
