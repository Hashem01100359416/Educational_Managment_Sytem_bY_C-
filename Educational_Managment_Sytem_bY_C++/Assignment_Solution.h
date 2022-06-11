#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Assignment_Solution
{
private:
	int Student_ID;
	int your_Degree;
	string Solution;
	string Comment;
	bool is_Marked;
public:
	Assignment_Solution();
	Assignment_Solution(int student_ID,string solution); // for Student 
	Assignment_Solution(int student_ID,int Degree,string solution,string com,bool is_marked); // for Doctor or fill_Database_Data

	void set_Student_ID(int SID);
	int get_Student_ID();

	void set_your_Degree(int Degree);
	int get_your_Degree();

	void set_Solution(string solv);
	string get_solution();

	void set_Comment(string com);
	string get_Comment();

	void set_is_Marked(bool is_M);
	bool get_is_Marked();

	void set_Data(int student_ID, int Degree, string solution,string com,bool is_marked);
};

