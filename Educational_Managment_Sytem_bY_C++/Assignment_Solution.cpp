#include "Assignment_Solution.h"

Assignment_Solution::Assignment_Solution():Student_ID(0),your_Degree(-1),Solution("NS"),Comment("Unknown"),is_Marked(false)
{
}

Assignment_Solution::Assignment_Solution(int student_ID, string solution): Student_ID(student_ID), Solution(solution),is_Marked(0), Comment("Unknown"),your_Degree(-1)
{

}

Assignment_Solution::Assignment_Solution(int student_ID, int Degree, string solution,string com,bool is_marked):Student_ID(student_ID), your_Degree(Degree), Solution(solution),Comment(com),is_Marked(is_marked)
{
}


void Assignment_Solution::set_Student_ID(int SID)
{
	Student_ID = SID;
}

int Assignment_Solution::get_Student_ID()
{
	return Student_ID;
}

int Assignment_Solution::get_your_Degree()
{
	return your_Degree;
}

void Assignment_Solution::set_Solution(string solv)
{
	Solution = solv;
}

string Assignment_Solution::get_solution()
{
	return Solution;
}

void Assignment_Solution::set_Comment(string com)
{
	Comment = com;
}

string Assignment_Solution::get_Comment()
{
	return Comment;
}

void Assignment_Solution::set_is_Marked(bool is_marked)
{
	is_Marked = is_marked;
}

bool Assignment_Solution::get_is_Marked()
{
	return is_Marked;
}

void Assignment_Solution::set_Data(int SID, int Degree, string solution,string com,bool is_marked)
{
	Student_ID = SID;
	your_Degree = Degree;
	Solution = solution;
	Comment = com;
	is_Marked = is_marked;
}

void Assignment_Solution::set_your_Degree(int Degree)
{
	your_Degree = Degree;
}