#pragma once
#include <iostream>
#include <vector>
using namespace std;
#include "Assignment.h"
class Course
{
private:
	string Course_Name;
	string Course_Code;
	int made_by_Doctor_ID;
	string doctor_Made;
	vector<int>Students_IDS_Regester;
	vector<int>T_Assistant_IDS;
public:
	vector<Assignment>assignment;
public:
	Course();
	Course(string course_name,string course_code,int made_by,string doctor_Made);
	Course(string course_name, string course_code, string doctor_made,int made_by, vector<int>S_IDS,vector<int>TA_ISD, vector<Assignment>assignmentnew);
    
	void set_Course_Name(string C_Name);
	string get_Course_Name();

	void set_Course_Code(string code);
	string get_Course_Code();

	void set_Students_IDS_Regester(int S_ID);
	vector<int> get_Students_IDS_Regester();
	void set_Students_IDS_Regester_all(vector<int>);

	void set_Doctor_ID(int D_ID);
	string get_Doctor_Name();
	void set_Doctor_Name(string n);
	int get_Doctor_ID();

	void set_T_Assistant_IDS(int T_A_IDS);
	vector<int> get_T_Assistant_IDS();


	void set_assignment(Assignment Assi);
	vector<Assignment> get_assignment();

	void set_Data(string course_name, string course_code,string doctor_made, int made_by, vector<int>S_IDS, vector<int>TA_ISD, vector<Assignment>assignmentnew);
};

