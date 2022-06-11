#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Assignment_Solution.h"
using namespace std;

class Assignment
{
private:
	string Qusetion_Assignment;	
	int Max_Assignment_Degree;
public:
	vector<Assignment_Solution>Assignment_solution;
	
	//vector<pair<int,string>> Student_Answer_Assignment; // Student_ID and Assginment_Answer 
	//vector<pair<int,bool>> Submit_OR_NOT; // Student_ID and true or false
	//vector<pair<int,int>> Student_Assignment_Degrees; // Student_ID and Student_Assignment_Degrees
	//vector<pair<int,bool>> is_Marked;  // Student_ID and is_Marked true or false

public:
	Assignment(); //Defalt Constructor
	Assignment(string QA, int MAD);
	Assignment(string QA, int MAD, vector<Assignment_Solution>Assignment);

	void set_Qusetion_Assignment(string QA); // Seter
	string get_Qusetion_Assignment(); // Geter

	void set_Max_Assignment_Degree(int MAD);
	int get_Max_Assignment_Degree();


	void set_Assignment_solution(Assignment_Solution AS);
	vector<Assignment_Solution>get_Assignment_solution();

	void set_Data(string QA, int MAD, vector<Assignment_Solution>AS);
};

