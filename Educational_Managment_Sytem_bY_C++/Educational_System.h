#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Doctor.h"  // Doctor Class
#include "Student.h"   // Student Class
#include "Teaching_Assistant.h" // Teaching_Assistant Class
#include "Course.h" // Course Class
#include "Menus.h"
#include "Choices.h"
#include "DataBase.h"
using namespace std;

class Educational_System
{
private:
	vector<Doctor> Doctors;
	vector<Student> Students;
	vector<Teaching_Assistant> Teaching_Assistants;
	vector<Course> Courses;
	DataBase database;
public:
	void run();
	Educational_System();
private:
	void DumyData();
	void DumyData_Doctor();
	void DumyData_Student();
	void DumyData_Teaching_Assistant();
	void DumyData_Courses_and_Assignment();
	void DumyData_Assignment_Solution();
	void Login();
	void ERROR_MSG_login_incorrect();
	pair<bool, pair<int, char>> check_Login_is_Correct(pair<string, pair<string, char>> user_and_Pass); //method check_Sign_IN_is_Correct method
	void Sign_up();
	void run_System_as_D_S_TA(pair<char,int>); // run Sysetm on type User 

/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
	void run_System_as_Doctor(int); //Run  System as Doctor_User 
	void Main_Menu_Doc();
	int Choice_Main_Menu_Doc();
	void Msg_Out_of_Rang();
	/*============================*/
	void List_Courses(int);
	void Create_Course(pair<int, string>);
	/*=====================*/
	void View_Course(int);
	int Chioce_Course(int);
	void Menu_View_Course();
	int Chioce_View_Course();
	void List_Assignments(string);
	void Create_Assignment(string);
	void View_Assignment(string);
	int Chioce_Assignment_Number(int);
	/*=====================*/
	void Menu_View_Assignment(int);
	int Chioce_View_Assignment();
	void show_info(pair<string,int>);  // this method take 2 parametares first -> Course_code and Assignment_number 
	void Show_Grade_Rebort(pair<string, int>);  // this method take 2 parametares first -> Course_code and Assignment_number 
	void List_Solution(pair<string, int>); // this method take 2 parametares first -> Course_code and Assignment_number 									   /*============================*/
	void View_Solution(pair<string, int>);
	/*==========================================*/
	void Menu_View_Solution(int);
	int Chioce_View_Solution();
	int Chioce_Solution_Number(int);
	void show_info_Solution(pair<string, pair<int, int>>);	// this method take 2 parametares first -> Course_code and  (Assignment_number,Solution_number) 
	void set_grade(pair<string, pair<int, int>>); // this method take 2 parametares first -> Course_code and  (Assignment_number,Solution_number) 
	void set_Comment(pair<string, pair<int, int>>);	// this method take 2 parametares first -> Course_code and  (Assignment_number,Solution_number) 
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/


/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
	void run_System_as_Student(int); //Run  System as Student_User 
	pair<string, string> Get_Student_Name(int id);
	void Welcome_MSG_Student(pair<string, string> Flname);
	void Goodby_MSG_Student(pair<string, string> Flname);
	void Main_Menu_Student();
	int  Choice_Main_Menu_Student();
	int Chioce_Course_Number(int rang);
	void Register_in_Course(int);
	void List_MY_Courses(int);
	void View_course(int);
	void Grades_Rebort(int);
	int Chioce_Course_number(int rang);
	void Menu_View_Course_S();
	int Chioce_Menue_View_Course_number();
	void UNRegister_From_Course(pair<int,int> Stu_id);
	void Submit_Solution(pair<int, int> sc);
	void Submit_Solution(int Stu_id);
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/


/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
	void run_System_as_Teaching_Assistant(int); //Run  System as Teaching Assistant_User
/*%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%*/
	void Welcome_MSG(pair<string, string>);
	pair<string, string> Get_Name_User(int id);
	void Goodby_MSG(pair<string, string>);
};

