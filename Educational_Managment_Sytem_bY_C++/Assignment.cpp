#include "Assignment.h"


Assignment::Assignment():Qusetion_Assignment("NQ"),Max_Assignment_Degree(0)
{
}
Assignment::Assignment(string QA, int MAD): Qusetion_Assignment(QA), Max_Assignment_Degree(MAD)
{
}
Assignment::Assignment(string QA, int MAD, vector<Assignment_Solution>AS) : Qusetion_Assignment(QA), Max_Assignment_Degree(MAD), Assignment_solution(AS)
{
}


void Assignment::set_Qusetion_Assignment(string QA)
{
	Qusetion_Assignment = QA;
}
string Assignment::get_Qusetion_Assignment()
{
	return Qusetion_Assignment;
}


void Assignment::set_Max_Assignment_Degree(int MAD)
{
	Max_Assignment_Degree = MAD;
}
int Assignment::get_Max_Assignment_Degree()
{
	return Max_Assignment_Degree;
}


void Assignment::set_Assignment_solution(Assignment_Solution AS)
{
	Assignment_solution.push_back(AS);
}
vector<Assignment_Solution> Assignment::get_Assignment_solution()
{
	return Assignment_solution;
}


void Assignment::set_Data(string QA, int MAD, vector<Assignment_Solution> AS)
{
	Qusetion_Assignment = QA;
	Max_Assignment_Degree = MAD;
	Assignment_solution=AS;
}