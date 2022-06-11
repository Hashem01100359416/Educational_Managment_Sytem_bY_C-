#include "Educational_System.h"
Educational_System::Educational_System()
{
	DumyData();
}

void Educational_System::DumyData()
{
	DumyData_Doctor();
	DumyData_Student();
	DumyData_Teaching_Assistant();
	DumyData_Courses_and_Assignment();
}

void Educational_System::DumyData_Doctor()
{
	Doctor D1(123456, 35, "Hashem", "Ahmed", "hashem", "Pass123", "hashem0035@gmail.com", "Sohag");
	Doctor D2(123457, 45, "Alaa", "Ahmed", "Alaa", "Pass124", "Alaa@gmail.com", "Assuit");
	Doctor D3(123458, 37, "ElNomery", "Zanay", "Elnomer", "Pass125", "Elnomery@gmail.com", "Sohag");
	Doctor D4(123459, 55, "Ahmed", "Youns", "Ahmed", "Pass126", "Ahmed@gmail.com", "Cairo");
	Doctors.push_back(D1);
	Doctors.push_back(D2);
	Doctors.push_back(D3);
	Doctors.push_back(D4);
}

void Educational_System::DumyData_Student()
{
	Student s1(123456, 35, "Hashem", "Ahmed", "hashem", "Pass111", "hashem0035@gmail.com", "Sohag");
	Student s2(123457, 45, "Yasser", "Abdelbaset", "yasser", "Pass222", "yasser@gmail.com", "Assuit");
	Student s3(123458, 37, "AbdElBast", "Mahmoud", "abdo", "Pass333", "abdelbast@gmail.com", "Sohag");
	Student s4(123459, 55, "Mouhmed", "AbdAllh", "memo", "Pass444", "memo@gmail.com", "Cairo");
	Students.push_back(s1);
	Students.push_back(s2);
	Students.push_back(s3);
	Students.push_back(s4);
}
//
void Educational_System::DumyData_Teaching_Assistant()
{
}

void Educational_System::DumyData_Courses_and_Assignment()
{
	Assignment A1("Solve_in_Sheet1", 100);
	Assignment_Solution AS1(123456, " 20_Problem_Accepted_6_Problem_Wrong_Answer");
	Assignment_Solution AS2(123457, " 15_Problem_Accepted_11_Problem_Wrong_Answer");
	Assignment_Solution AS3(123458, " 20_Problem_Accepted_6_Problem_Wrong_Answer");
	Assignment_Solution AS4(123459, " 26_Problem_Accepted");
	A1.set_Assignment_solution(AS1);
	A1.set_Assignment_solution(AS2);
	A1.set_Assignment_solution(AS3);
	A1.set_Assignment_solution(AS4);
	Assignment A2("Solve_in_Sheet2", 100);
	A2.set_Assignment_solution(AS1);
	A2.set_Assignment_solution(AS2);
	A2.set_Assignment_solution(AS3);
	A2.set_Assignment_solution(AS4);
	Assignment A3("Solve_in_Sheet3", 100);
	A3.set_Assignment_solution(AS1);
	A3.set_Assignment_solution(AS2);
	A3.set_Assignment_solution(AS3);
	A3.set_Assignment_solution(AS4);
	Assignment A4("Solve_in_Sheet4", 100);
	A4.set_Assignment_solution(AS1);
	A4.set_Assignment_solution(AS2);
	A4.set_Assignment_solution(AS3);
	A4.set_Assignment_solution(AS4);

	Course C1("Programming1", "CS2233", 123456,"Hashem");
	C1.set_assignment(A1);
	C1.set_assignment(A2);
	C1.set_assignment(A3);
	C1.set_assignment(A4);
	C1.set_Students_IDS_Regester(123456);
	C1.set_Students_IDS_Regester(123457);
	C1.set_Students_IDS_Regester(123458);
	C1.set_Students_IDS_Regester(123459);
	Course C2("Database2", "CS3244", 123456, "Hashem");
	Assignment A11("Solve_in_Sheet1", 100);
	A11.set_Assignment_solution(AS1);
	A11.set_Assignment_solution(AS2);
	A11.set_Assignment_solution(AS3);
	A11.set_Assignment_solution(AS4);
	Assignment A22("Solve_in_Sheet2", 100);
	A22.set_Assignment_solution(AS1);
	A22.set_Assignment_solution(AS2);
	A22.set_Assignment_solution(AS3);
	A22.set_Assignment_solution(AS4);
	Assignment A33("Solve_in_Sheet3", 100);
	A33.set_Assignment_solution(AS1);
	A33.set_Assignment_solution(AS2);
	A33.set_Assignment_solution(AS3);
	A33.set_Assignment_solution(AS4);
	C2.set_assignment(A11);
	C2.set_assignment(A22);
	C2.set_assignment(A33);
	Course C3("DataStructurs", "CS6255", 123456, "Hashem");
	Assignment A12("Solve_in_Sheet1", 100);
	A12.set_Assignment_solution(AS1);
	A12.set_Assignment_solution(AS2);
	A12.set_Assignment_solution(AS3);
	A12.set_Assignment_solution(AS4);
	Assignment A21("Solve_in_Sheet2", 100);
	A21.set_Assignment_solution(AS1);
	A21.set_Assignment_solution(AS2);
	A21.set_Assignment_solution(AS3);
	A21.set_Assignment_solution(AS4);
	Assignment A32("Solve_in_Sheet3", 100);
	A32.set_Assignment_solution(AS1);
	A32.set_Assignment_solution(AS2);
	A32.set_Assignment_solution(AS3);
	A32.set_Assignment_solution(AS4);

	Assignment A42("Solve_in_Sheet4", 100);
	A42.set_Assignment_solution(AS1);
	A42.set_Assignment_solution(AS2);
	A42.set_Assignment_solution(AS3);
	A42.set_Assignment_solution(AS4);
	C3.set_assignment(A12);
	C3.set_assignment(A21);
	C3.set_assignment(A32);
	C3.set_assignment(A42);
	Course C4("SWEngineering", "CS7777", 123456, "Hashem");
	Assignment A0("Solve_in_Sheet1", 100);
	A0.set_Assignment_solution(AS1);
	A0.set_Assignment_solution(AS2);
	A0.set_Assignment_solution(AS3);
	A0.set_Assignment_solution(AS4);
	Assignment A9("Solve_in_Sheet2", 100);
	A9.set_Assignment_solution(AS1);
	A9.set_Assignment_solution(AS2);
	A9.set_Assignment_solution(AS3);
	A9.set_Assignment_solution(AS4);
	C4.set_assignment(A0);
	C4.set_assignment(A9);
	Course C11("OOP", "CS8888", 123456, "Hashem");
	Assignment a1("Solve_in_Sheet1", 100);
	a1.set_Assignment_solution(AS1);
	a1.set_Assignment_solution(AS2);
	a1.set_Assignment_solution(AS3);
	a1.set_Assignment_solution(AS4);
	Assignment a2("Solve_in_Sheet2", 100);
	a2.set_Assignment_solution(AS1);
	a2.set_Assignment_solution(AS2);
	a2.set_Assignment_solution(AS3);
	a2.set_Assignment_solution(AS4);
	Assignment a3("Solve_in_Sheet3", 100);
	a3.set_Assignment_solution(AS1);
	a3.set_Assignment_solution(AS2);
	a3.set_Assignment_solution(AS3);
	a3.set_Assignment_solution(AS4);
	Assignment a4("Solve_in_Sheet4", 100);
	a4.set_Assignment_solution(AS1);
	a4.set_Assignment_solution(AS2);
	a4.set_Assignment_solution(AS3);
	a4.set_Assignment_solution(AS4);
	C11.set_assignment(a1);
	C11.set_assignment(a2);
	C11.set_assignment(a3);
	C11.set_assignment(a4);
	Course C12("Algorithm", "CS9999", 123456, "Hashem");
	Assignment a11("Solve_in_Sheet1", 100);
	a11.set_Assignment_solution(AS1);
	a11.set_Assignment_solution(AS2);
	a11.set_Assignment_solution(AS3);
	a11.set_Assignment_solution(AS4);
	Assignment a22("Solve_in_Sheet2", 100);
	a22.set_Assignment_solution(AS1);
	a22.set_Assignment_solution(AS2);
	a22.set_Assignment_solution(AS3);
	a22.set_Assignment_solution(AS4);
	Assignment a33("Solve_in_Sheet3", 100);
	a33.set_Assignment_solution(AS1);
	a33.set_Assignment_solution(AS2);
	a33.set_Assignment_solution(AS3);
	a33.set_Assignment_solution(AS4);
	Assignment a44("Solve_in_Sheet4", 100);
	a44.set_Assignment_solution(AS1);
	a44.set_Assignment_solution(AS2);
	a44.set_Assignment_solution(AS3);
	a44.set_Assignment_solution(AS4);
	C12.set_assignment(a11);
	C12.set_assignment(a22);
	C12.set_assignment(a33);
	C12.set_assignment(a44);
	/*========================================*/
	Course C5("Network1", "IS6833", 123457,"Alaa");
	Assignment aaa1("Solve_in_Sheet1", 100);
	aaa1.set_Assignment_solution(AS1);
	aaa1.set_Assignment_solution(AS2);
	aaa1.set_Assignment_solution(AS3);
	aaa1.set_Assignment_solution(AS4);
	Assignment aaa2("Solve_in_Sheet2", 100);
	aaa2.set_Assignment_solution(AS1);
	aaa2.set_Assignment_solution(AS2);
	aaa2.set_Assignment_solution(AS3);
	aaa2.set_Assignment_solution(AS4);
	Assignment aaa3("Solve_in_Sheet3", 100);
	aaa3.set_Assignment_solution(AS1);
	aaa3.set_Assignment_solution(AS2);
	aaa3.set_Assignment_solution(AS3);
	aaa3.set_Assignment_solution(AS4);
	C5.set_assignment(aaa1);
	C5.set_assignment(aaa2);
	C5.set_assignment(aaa3);
	Course C6("Network2", "IS5544", 123457, "Alaa");
	Assignment a1a("Solve_in_Sheet1", 100);
	a1a.set_Assignment_solution(AS1);
	a1a.set_Assignment_solution(AS2);
	a1a.set_Assignment_solution(AS3);
	a1a.set_Assignment_solution(AS4);
	Assignment a2a("Solve_in_Sheet2", 100);
	a2a.set_Assignment_solution(AS1);
	a2a.set_Assignment_solution(AS2);
	a2a.set_Assignment_solution(AS3);
	a2a.set_Assignment_solution(AS4);
	Assignment a3a("Solve_in_Sheet3", 100);
	a3a.set_Assignment_solution(AS1);
	a3a.set_Assignment_solution(AS2);
	a3a.set_Assignment_solution(AS1);
	a3a.set_Assignment_solution(AS4);
	Assignment a4a("Solve_in_Sheet4", 100);
	a4a.set_Assignment_solution(AS1);
	a4a.set_Assignment_solution(AS2);
	a4a.set_Assignment_solution(AS3);
	a4a.set_Assignment_solution(AS4);
	C6.set_assignment(a1a);
	C6.set_assignment(a2a);
	C6.set_assignment(a3a);
	C6.set_assignment(a4a);
	Course C7("SoftWare", "CS9900", 123457, "Alaa");
	Assignment a1aa("Solve_in_Sheet1", 100);
	a1aa.set_Assignment_solution(AS1);
	a1aa.set_Assignment_solution(AS2);
	a1aa.set_Assignment_solution(AS3);
	a1aa.set_Assignment_solution(AS4);
	Assignment a2aa("Solve_in_Sheet2", 100);
	a2aa.set_Assignment_solution(AS1);
	a2aa.set_Assignment_solution(AS2);
	a2aa.set_Assignment_solution(AS3);
	a2aa.set_Assignment_solution(AS4);
	Assignment a3aa("Solve_in_Sheet3", 100);
	a3aa.set_Assignment_solution(AS1);
	a3aa.set_Assignment_solution(AS2);
	a3aa.set_Assignment_solution(AS3);
	a3aa.set_Assignment_solution(AS4);
	Assignment a4aa("Solve_in_Sheet4", 100);
	a4aa.set_Assignment_solution(AS1);
	a4aa.set_Assignment_solution(AS3);
	a4aa.set_Assignment_solution(AS3);
	a4aa.set_Assignment_solution(AS4);
	C7.set_assignment(a1aa);
	C7.set_assignment(a2aa);
	C7.set_assignment(a3aa);
	C7.set_assignment(a4aa);
	/*========================================*/
	Course C8("ComputerNetwork1", "CS2020", 123458,"Elnomery");
	Assignment Aa1("Solve_in_Sheet1", 100);
	Aa1.set_Assignment_solution(AS1);
	Aa1.set_Assignment_solution(AS2);
	Aa1.set_Assignment_solution(AS3);
	Aa1.set_Assignment_solution(AS4);
	Assignment Aa2("Solve_in_Sheet2", 100);
	Aa2.set_Assignment_solution(AS1);
	Aa2.set_Assignment_solution(AS2);
	Aa2.set_Assignment_solution(AS3);
	Aa2.set_Assignment_solution(AS4);
	Assignment Aa3("Solve_in_Sheet3", 100);
	Aa3.set_Assignment_solution(AS1);
	Aa3.set_Assignment_solution(AS2);
	Aa3.set_Assignment_solution(AS3);
	Aa3.set_Assignment_solution(AS4);
	Assignment Aa4("Solve_in_Sheet4", 100);
	Aa4.set_Assignment_solution(AS1);
	Aa4.set_Assignment_solution(AS2);
	Aa4.set_Assignment_solution(AS3);
	Aa4.set_Assignment_solution(AS4);
	C8.set_assignment(Aa1);
	C8.set_assignment(Aa2);
	C8.set_assignment(Aa3);
	C8.set_assignment(Aa4);
	Course C9("OperatingSystem1", "CS1010", 123458,"Elnomery");
	Assignment A1A("Solve_in_Sheet1", 100);
	A1A.set_Assignment_solution(AS1);
	A1A.set_Assignment_solution(AS2);
	A1A.set_Assignment_solution(AS3);
	A1A.set_Assignment_solution(AS4);
	Assignment A2A("Solve_in_Sheet2", 100);
	A2A.set_Assignment_solution(AS1);
	A2A.set_Assignment_solution(AS2);
	A2A.set_Assignment_solution(AS3);
	A2A.set_Assignment_solution(AS4);
	Assignment A3A("Solve_in_Sheet3", 100);
	A3A.set_Assignment_solution(AS1);
	A3A.set_Assignment_solution(AS2);
	A3A.set_Assignment_solution(AS3);
	A3A.set_Assignment_solution(AS4);
	Assignment A4A("Solve_in_Sheet4", 100);
	A4A.set_Assignment_solution(AS1);
	A4A.set_Assignment_solution(AS2);
	A4A.set_Assignment_solution(AS3);
	A4A.set_Assignment_solution(AS4);
	C9.set_assignment(A1A);
	C9.set_assignment(A2A);
	C9.set_assignment(A3A);
	C9.set_assignment(A4A);
	/*========================================*/
	Course C10("Math1", "CS5555", 123459,"Ahmed");
	Assignment aa1("Solve_in_Sheet1", 100);
	aa1.set_Assignment_solution(AS1);
	aa1.set_Assignment_solution(AS2);
	aa1.set_Assignment_solution(AS3);
	aa1.set_Assignment_solution(AS4);
	Assignment aa2("Solve_in_Sheet2", 100);
	aa2.set_Assignment_solution(AS1);
	aa2.set_Assignment_solution(AS2);
	aa2.set_Assignment_solution(AS3);
	aa2.set_Assignment_solution(AS4);
	C10.set_assignment(aa1);
	C10.set_assignment(aa2);

	/*========================================*/
	C2.set_Students_IDS_Regester(123456);
	C2.set_Students_IDS_Regester(123457);
	C2.set_Students_IDS_Regester(123458);
	C2.set_Students_IDS_Regester(123459);

	C3.set_Students_IDS_Regester(123456);
	C3.set_Students_IDS_Regester(123457);
	C3.set_Students_IDS_Regester(123458);
	C3.set_Students_IDS_Regester(123459);

	C4.set_Students_IDS_Regester(123456);
	C4.set_Students_IDS_Regester(123457);
	C4.set_Students_IDS_Regester(123458);
	C4.set_Students_IDS_Regester(123459);
	
	C5.set_Students_IDS_Regester(123456);
	C5.set_Students_IDS_Regester(123457);
	C5.set_Students_IDS_Regester(123458);
	C5.set_Students_IDS_Regester(123459);

	C6.set_Students_IDS_Regester(123456);
	C6.set_Students_IDS_Regester(123457);
	C6.set_Students_IDS_Regester(123458);
	C6.set_Students_IDS_Regester(123459);

	C7.set_Students_IDS_Regester(123456);
	C7.set_Students_IDS_Regester(123457);
	C7.set_Students_IDS_Regester(123458);
	C7.set_Students_IDS_Regester(123459);

	C8.set_Students_IDS_Regester(123456);
	C8.set_Students_IDS_Regester(123457);
	C8.set_Students_IDS_Regester(123458);
	C8.set_Students_IDS_Regester(123459);

	C9.set_Students_IDS_Regester(123456);
	C9.set_Students_IDS_Regester(123457);
	C9.set_Students_IDS_Regester(123458);
	C9.set_Students_IDS_Regester(123459);

	C10.set_Students_IDS_Regester(123456);
	C10.set_Students_IDS_Regester(123457);
	C10.set_Students_IDS_Regester(123458);
	C10.set_Students_IDS_Regester(123459);

	C11.set_Students_IDS_Regester(123456);
	C11.set_Students_IDS_Regester(123457);
	C11.set_Students_IDS_Regester(123458);
	C11.set_Students_IDS_Regester(123459);

	C12.set_Students_IDS_Regester(123456);
	C12.set_Students_IDS_Regester(123457);
	C12.set_Students_IDS_Regester(123458);
	C12.set_Students_IDS_Regester(123459);

	Courses.push_back(C1);
	Courses.push_back(C2);
	Courses.push_back(C3);
	Courses.push_back(C4);
	Courses.push_back(C5);
	Courses.push_back(C6);
	Courses.push_back(C7);
	Courses.push_back(C8);
	Courses.push_back(C9);
	Courses.push_back(C10);
	Courses.push_back(C11);
	Courses.push_back(C12);
}

void Educational_System::run()
{
	bool System = true;
	while (System)
	{
		Menus::Main_Menu_Login_IN_Sign_UP();
		switch (Choices::Choice_Main_Menu_Sign_IN_Sign_UP())
		{
		case 1:    // Login
			Login();
			break;
		case 2:      // Sign_up
			Sign_up();
			break;
		case 3:  //Exit System
			System = false;
			break;
		}
	}
}
void Educational_System::Login()
{
	/*
	* Data_Login() method return vector<pair<string,string>> first value -> Username  secound value -> Password
	* DataBase::check_Login_is_Correct() method return vector<pair<bool,string>> first value -> Login is true or false   secound value -> type of user is Doctor or student or TAS 
	* static void is_he_Stu_or_TAS_or_Doc_User() method  return  string write in it (Doctor or Student or TA);
	*/
	pair<bool, pair<int, char>> pt;
	pair<char,int>ptn;
	pt=check_Login_is_Correct(Menus::Data_Login());
	switch (pt.first)
	{
	case true:
		ptn.first = pt.second.second;
		ptn.second = pt.second.first;
		run_System_as_D_S_TA(ptn);
		break;
	case false:
		ERROR_MSG_login_incorrect();
		run();
		break;
	}
	//DataBase::is_he_Stu_or_TAS_or_Doc_User(
}
void Educational_System::ERROR_MSG_login_incorrect()
{
	cout << "\n\a\nUsername or Password is incorrect :: Please Try agine \n============================\n\n";
}

pair<bool, pair<int, char>> Educational_System::check_Login_is_Correct(pair<string, pair<string, char>> user_and_Pass)
{
	pair<bool, pair<int, char>>pt; // typeuser and ID ;
	bool user_pass = false;
	switch (user_and_Pass.second.second)
	{
	case 'D':
	{
		for (int i = 0; i< Doctors.size(); i++)
		{
			if (user_and_Pass.first == Doctors[i].get_Username() && user_and_Pass.second.first == Doctors[i].get_Password())
			{
				user_pass = true;
				pt.first = true;
				pt.second.first = Doctors[i].get_ID();
				pt.second.second = 'D';
				break;
			}
		}
	}
	break;

	case 'S':
	{
		for (int i = 0; i < Students.size(); i++)
		{
			if (user_and_Pass.first == Students[i].get_Username() && user_and_Pass.second.first == Students[i].get_Password())
			{
				user_pass = true;
				pt.first = true;
				pt.second.first = Students[i].get_ID();
				pt.second.second = 'S';
				break;
			}
		}

	}
	break;
	case 'T':
	{

		for (int i = 0; i < Teaching_Assistants.size(); i++)
		{
			if (user_and_Pass.first == Teaching_Assistants[i].get_Username() && user_and_Pass.second.first == Teaching_Assistants[i].get_Password())
			{
				user_pass = true;
				pt.first = true;
				pt.second.first = Teaching_Assistants[i].get_ID();
				pt.second.second = 'T';
				break;
			}
		}

	}
	break;
	}
	return pt;
}

void Educational_System::run_System_as_D_S_TA(pair<char,int> type_user)
{
	switch(type_user.first)
	{
	case 'D':
		run_System_as_Doctor(type_user.second);
		break;
	case 'S':
		run_System_as_Student(type_user.second);
		break;
	case 'T':
		run_System_as_Teaching_Assistant(type_user.second);
		break;
	}
}
void Educational_System::Sign_up()
{
	pair<char, Person>pc;
	pc = Menus::Data_Sign_UP();
	switch (pc.first)
	{
	case 'D':
	{
		Doctor obj(pc.second.get_ID(), pc.second.get_Age(), pc.second.get_FirstName(), pc.second.get_LastName(), pc.second.get_Username(), pc.second.get_Password(), pc.second.get_Email(), pc.second.get_Adderess());
		Doctors.push_back(obj);
	}
	break;
	case 'S':
	{
		Student obj(pc.second.get_ID(), pc.second.get_Age(), pc.second.get_FirstName(), pc.second.get_LastName(), pc.second.get_Username(), pc.second.get_Password(), pc.second.get_Email(), pc.second.get_Adderess());
		Students.push_back(obj);
	}
	break;
	case 'T':
	{
		Teaching_Assistant obj(pc.second.get_ID(), pc.second.get_Age(), pc.second.get_FirstName(), pc.second.get_LastName(), pc.second.get_Username(), pc.second.get_Password(), pc.second.get_Email(), pc.second.get_Adderess());
		Teaching_Assistants.push_back(obj);
	}
	break;
	}

}

void Educational_System::run_System_as_Doctor(int Doc_id)
{
	pair<string, string> Doctor_name = Get_Name_User(Doc_id);
	Welcome_MSG(Doctor_name);
	pair<int, string> in;
	in.first = Doc_id;
	in.second = Doctor_name.first;
	bool run = true;
	while (run)
	{
		Main_Menu_Doc();
		switch (Choice_Main_Menu_Doc())
		{
		case 1:
			List_Courses(Doc_id);
			break;
		case 2:
			Create_Course(in);
			break;
		case 3:
			View_Course(Doc_id);
			break;
		case 4:
			run = false;
			break;
		}

	}
	Goodby_MSG(Doctor_name);
}

void Educational_System::Main_Menu_Doc()
{
	cout << "\n\nMain Menu option : \n";
	cout << "1 : List Courses\n";
	cout << "2 : Create Course\n";
	cout << "3 : View Course\n";
	cout << "4 : Log out\n\n";

}

int Educational_System::Choice_Main_Menu_Doc()
{
	int ch;
	while (true)
	{
		cout << "\nEnter Choice [1-4] : ";
		cin >> ch;
		if (ch > 0 && ch < 5)	return ch;
		else Msg_Out_of_Rang();
	}
}

void Educational_System::Msg_Out_of_Rang()
{
	cout << "\nERROR::OUT_OF_Rang::Please Try Again....\n";
}
/*****************************************************************/
void Educational_System::List_Courses(int Doc_id)
{
	int sz = Courses.size(),c=1;
	if (sz > 0)
	{
		cout << "\n\nList_Course :: \n";
		cout << "=================================================\n";
		for (int i = 0; i< sz; i++)
		{
			if (Courses[i].get_Doctor_ID() == Doc_id)
			{
				cout << c++ << " : Course_Name : " << Courses[i].get_Course_Name() << " :: " << "Course_Code : " << Courses[i].get_Course_Code() << "\n";
			}
		}

		cout << "=================================================\n\n";
	}
}

void Educational_System::Create_Course(pair<int,string>Doc_id_name)
{
	string CN, CC;
	cout << "\nEnter Course_Name : ";
	cin >> CN;
	cout << "Enter Course_Code : ";
	cin >> CC;
	Course C(CN,CC, Doc_id_name.first, Doc_id_name.second);
	Courses.push_back(C);
}

void Educational_System::View_Course(int Doc_id)
{
	vector<string>code;
	int sz = Courses.size(),c=1;
	if (sz > 0)
	{
		cout << "\n\nList_Course :: \n";
		cout << "=================================================\n";
		for (int i = 0; i < sz; i++)
		{
			if (Courses[i].get_Doctor_ID() == Doc_id)
			{
				cout <<c++<< " : Course_Name : " << Courses[i].get_Course_Name() << " :: " << "Course_Code : " << Courses[i].get_Course_Code() << "\n";
				code.push_back(Courses[i].get_Course_Code());
			}
		}

		cout << "=================================================\n\n";
		int ch = Chioce_Course(code.size());
		string C_code;
		C_code = code[ch - 1];
		bool run = true;
		while (run)
		{
			Menu_View_Course();
			switch (Chioce_View_Course())
			{
			case 1:
				List_Assignments(C_code);
				break;
			case 2:
				Create_Assignment(C_code);
				break;
			case 3:
				View_Assignment(C_code);
				break;
			case 4:
				run = false;
				break;
			}
		}
	}
}


int Educational_System::Chioce_Course(int rang)
{
	int ch;
	while (true)
	{
		cout << "\nopen Course number  [1-"<<rang<<"] : ";
		cin >> ch;
		cout << "\n=================================\n";
		if (ch > 0 && ch <=rang)	return ch;
		else Msg_Out_of_Rang();
	}

}

void Educational_System::Menu_View_Course()
{
	cout << "\nMenu Courses : \n";
	cout << "1) List Assignments\n";
	cout << "2) Creat Assignment\n";
	cout << "3) View Assignment\n";
	cout << "4) back\n";
}

int Educational_System::Chioce_View_Course()
{
	int ch;
	while (true)
	{
		cout << "\nEnter Choice [1-4] : ";
		cin >> ch;
		if (ch > 0 && ch < 5)	return ch;
		else Msg_Out_of_Rang();
	}
}

void Educational_System::List_Assignments(string C_code)
{
	int szz = Courses.size();
		for (int i = 0; i < szz; i++)
		{
			if (Courses[i].get_Course_Code() == C_code)
			{
				int sz = Courses[i].get_assignment().size();
				if (sz > 0)
				{
					cout << "\nList_Assignment : \n";
					cout << "=================================================\n";
					for (int j = 0; j < sz; j++)
						cout <<" Assignment " << j + 1 << " \n";
					cout << "================================================= \n\n";
				}
				else break;
			}
		}
}
void Educational_System::Create_Assignment(string C_code)
{
	int szz = Courses.size();
	for (int i = 0; i < szz; i++)
	{
		if (Courses[i].get_Course_Code() == C_code)
		{
			int sz = Courses[i].get_assignment().size();
			string Q;
			int Degree;
			cout << "\n==============================\n";
			cout << "Enter Assignment Probelm : ";
			cin >> Q;
			cout << "Enter Assignment Degree : ";
			cin >> Degree;
			Assignment A(Q, Degree);
			Courses[i].set_assignment(A);
			cout << "    \a                  Done                \n";
			cout << "==============================\n";
		}
	}
}
/*****************************************************************/

pair<string,string> Educational_System::Get_Name_User(int id)
{
	pair<string, string> pname;
	for (int i = 0; i < Doctors.size(); i++)
	{
		if (Doctors[i].get_ID() == id)
		{
			pname.first = Doctors[i].get_FirstName();
			pname.second = Doctors[i].get_LastName();
			return pname;
		}
	}

}

void Educational_System::Welcome_MSG(pair<string, string>Flname)
{
	cout << "\n\n#########################################\a\n\n             Welcome Doctor " << Flname.first << " " << Flname.second << "\n\n#########################################\n############(System_Started)#############\n\n";
}

void Educational_System::Goodby_MSG(pair<string, string>Flname)
{
	cout << "\n\n#############(System_Shutdown)###########\n";
	cout << "#########################################\n";
	cout << "\n             Goodby Docotr " << Flname.first << " " << Flname.second << "\n";
	cout << "\n#########################################\a\n";
}

/********************************************************/

void Educational_System::View_Assignment(string C_code)
{
	
	vector<int>code;
	int szz = Courses.size(),sz, c = 1;
	if (szz > 0)
	{
		
		for (int i = 0; i < szz; i++)
		{
			if (Courses[i].get_Course_Code() == C_code)
			{
				 sz = Courses[i].get_assignment().size();
				if (sz > 0)
				{
					cout << "\nList_Assignment : \n";
					cout << "=================================================\n";
					for (int j = 0; j < sz; j++)
						cout <<" Assignment " << j + 1 << " \n";
					cout << "=================================================\n\n";
				}
				else break;
			}
		}
	
		int ch = Chioce_Assignment_Number(sz);
		pair<string, int>pc; // first -> Course_Code   second -> Assignment_Number
		pc.first = C_code;
		pc.second = ch;
		bool run = true;
		while (run)
		{
			Menu_View_Assignment(pc.second);
			switch (Chioce_View_Assignment())
			{
			case 1:
				show_info(pc);
				break;
			case 2:
				Show_Grade_Rebort(pc);
				break;
			case 3:
				List_Solution(pc);
				break;
			case 4:
				View_Solution(pc);
				break;
			case 5:
				run = false;
				break;
			}
		}
	}
}

int Educational_System::Chioce_Assignment_Number(int rang)
{
	int ch;
	while (true)
	{
		cout << "\nOpen Assignment of number  [1-" << rang << "] : ";
		cin >> ch;
		cout << "\n=================================\n";
		if (ch > 0 && ch <= rang)	return ch;
		else Msg_Out_of_Rang();
	}
}

void Educational_System::Menu_View_Assignment(int num)
{
	cout << "\nMenu View Assignment "<<num <<"  \n";
	cout << "=======================\n";
	cout << "1) Show information\n";
	cout << "2) Show Grade Rebort\n";
	cout << "3) List Solution\n";
	cout << "4) View_Solution\n";
	cout << "5) back\n";
}

int Educational_System::Chioce_View_Assignment()
{
	int ch;
	while (true)
	{
		cout << "\nEnter Choice [1-5] : ";
		cin >> ch;
		if (ch > 0 && ch < 6)	return ch;
		else Msg_Out_of_Rang();
	}
}

void Educational_System::show_info(pair<string, int>pp)
{
	int szz = Courses.size();
	for (int i = 0; i < szz; i++)
	{
		if (Courses[i].get_Course_Code() ==pp.first)
		{
			int sz = Courses[i].get_assignment().size();
			vector<Assignment> A;
			A = Courses[i].get_assignment();
			cout << "\n==============================\n";
			cout << "Info Assignment : "<<A[pp.second-1].get_Qusetion_Assignment() << "\n";
			cout << "==============================\n";
		}
	}

}

void Educational_System::Show_Grade_Rebort(pair<string, int>pp)
{
	int szz = Courses.size();
	for (int i = 0; i < szz; i++)
	{
		if (Courses[i].get_Course_Code() == pp.first)
		{
			int sz = Courses[i].get_assignment().size();
			vector<Assignment> A;
			A = Courses[i].get_assignment();

			cout << "\n==============================================================================================\n";
			vector<Assignment_Solution> AS;
			AS=A[pp.second-1].get_Assignment_solution();
			int c = 1;
			for (int i = 0; i < AS.size(); i++)
			{
				if(AS[i].get_is_Marked()&&AS[i].get_your_Degree()>=0)
					cout <<c++<<") Student_ID : " << AS[i].get_Student_ID() << "  Student_Grade : " << AS[i].get_your_Degree() << "\n";
			}
			if (c == 1) cout << "\aYou Don't Marked Any Solution yet\n";
			cout << "==============================================================================================\n";
			break;
		}
	}
}

void Educational_System::List_Solution(pair<string, int>pp)
{
	int szz = Courses.size();
	for (int i = 0; i < szz; i++)
	{
		if (Courses[i].get_Course_Code() == pp.first)
		{
			int sz = Courses[i].get_assignment().size();
			vector<Assignment> A;
			A = Courses[i].get_assignment();

			cout << "\n==============================================================================================\n";
			vector<Assignment_Solution> AS;
			AS = A[pp.second-1].get_Assignment_solution();
			for (int i = 0; i < AS.size(); i++)
			{
				cout << i+1<<" : Student_ID : " << AS[i].get_Student_ID() << "  Student_Solution : " << AS[i].get_solution() << "\n";
			}
			cout << "==============================================================================================\n";
		}
	}
}


/*-------------------------------------------------------------------------*/

//
void Educational_System::View_Solution(pair<string, int>pp)  // this method take 2 parametares first -> Course_code and Assignment_number 									   /*============================*/
{
	int szz = Courses.size();
	vector<Assignment_Solution> AS;
	if (szz > 0)
	{
		for (int i = 0; i < szz; i++)
		{
			if (Courses[i].get_Course_Code() == pp.first)
			{
				int sz = Courses[i].get_assignment().size();
				vector<Assignment> A;
				A = Courses[i].get_assignment();

				cout << "\n==============================================================================================\n";
				
				AS = A[pp.second-1].get_Assignment_solution();
				for (int i = 0; i < AS.size(); i++)
				{
					cout << i+1<<" : Student_ID : " << AS[i].get_Student_ID() << "  Student_Solution : " << AS[i].get_solution() << "\n";
				}
				cout << "==============================================================================================\n";
			}
		}
		int sz = AS.size();

		int ch = Chioce_Solution_Number(sz);
		pair<string,pair<int,int>>pc; // first -> Course_Code   second -> Assignment_Number
		pc.first = pp.first;  // first -> Course_Code
		pc.second.first = pp.second;  //second->Assignment_Number
		pc.second.second = ch;
		bool run = true;

		while (run)
		{
			Menu_View_Solution(pc.second.second);
			switch (Chioce_View_Assignment())
			{
			case 1:
				show_info_Solution(pc);
				break;
			case 2:
				set_grade(pc);
				break;
			case 3:
				set_Comment(pc);
				break;
			case 4:
				run = false;
				break;
			}
		}
	}
}

void Educational_System::Menu_View_Solution(int num)
{
	cout << "\nMenu View Solution " << num << "  \n";
	cout << "=======================\n";
	cout << "1) Show info_Solution\n";
	cout << "2) set grade on this Solution\n";
	cout << "3) set a Comment on this Solution \n";
	cout << "4) back\n";
}

int Educational_System::Chioce_View_Solution()
{
	int ch;
	while (true)
	{
		cout << "\nEnter Choice [1-4] : ";
		cin >> ch;
		if (ch > 0 && ch < 5)	return ch;
		else Msg_Out_of_Rang();
	}
}

int Educational_System::Chioce_Solution_Number(int rang)
{
	int ch;
	while (true)
	{
		cout << "\nOpen Solution of Number  [1-" << rang << "] : ";
		cin >> ch;
		cout << "\n=================================\n";
		if (ch > 0 && ch <= rang)	return ch;
		else Msg_Out_of_Rang();
	}
}

void Educational_System::show_info_Solution(pair<string, pair<int, int>>pp)
{
	int szz = Courses.size();
	for (int i = 0; i < szz; i++)
	{
		if (Courses[i].get_Course_Code() == pp.first)
		{
			int sz = Courses[i].get_assignment().size();
			vector<Assignment> A;
			A = Courses[i].assignment;

			cout << "Assignment_Solution :\n";
			cout << "\n==============================================================================================\n";
			vector<Assignment_Solution> AS;
			AS = A[pp.second.first-1].get_Assignment_solution();
				cout << "Student_ID : " << AS[pp.second.second-1].get_Student_ID() << "Student_Solution : " << AS[pp.second.second-1].get_solution() << "\n";
			cout << "==============================================================================================\n";
			break;
		}
	}
}

void Educational_System::set_grade(pair<string, pair<int, int>>pp)
{
	int szz = Courses.size();
	for (int i = 0; i < szz; i++)
	{
		if (Courses[i].get_Course_Code() == pp.first)
		{
			int sz = Courses[i].get_assignment().size();
			cout << "\n==============================================================================================\n";
				int G;
				cout << "Enter Solution_Grade : ";
				cin >> G;
				Courses[i].assignment[pp.second.first - 1].Assignment_solution[pp.second.second - 1].set_your_Degree(G);
				Courses[i].assignment[pp.second.first - 1].Assignment_solution[pp.second.second - 1].set_is_Marked(true);
			cout << "==============================================================================================\n";
			break;
		}
	}
}

void Educational_System::set_Comment(pair<string, pair<int, int>>pp)
{

	int szz = Courses.size();
	for (int i = 0; i < szz; i++)
	{
		if (Courses[i].get_Course_Code() == pp.first)
		{
			int sz = Courses[i].get_assignment().size();
			cout << "\n==============================================================================================\n";
			string C;
			cout << "Enter Comment on Solution : ";
			cin >> C;
			Courses[i].assignment[pp.second.first - 1].Assignment_solution[pp.second.second - 1].set_Comment(C);
			cout << "==============================================================================================\n";
			break;
		}
	}
}

// End run System as Doctor
/*========================================================================================*/
                       //  run System as Student
/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/
pair<string, string> Educational_System::Get_Student_Name(int id)
{
	pair<string, string> pname;
	for (int i = 0; i < Students.size(); i++)
	{
		if (Students[i].get_ID() == id)
		{
			pname.first = Students[i].get_FirstName();
			pname.second = Students[i].get_LastName();
			return pname;
		}
	}

}

void Educational_System::Welcome_MSG_Student(pair<string, string>Flname)
{
	cout << "\n\n#########################################\a\n\n             Welcome " << Flname.first << " " << Flname.second << "\n\n#########################################\n############(System_Started)#############\n\n";
}

void Educational_System::Goodby_MSG_Student(pair<string, string>Flname)
{
	cout << "\n\n#############(System_Shutdown)###########\n";
	cout << "#########################################\n";
	cout << "\n             Goodby " << Flname.first << " " << Flname.second << "\n";
	cout << "\n#########################################\a\n";
}


/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

void Educational_System::run_System_as_Student(int Stu_id)
{
	pair<string, string> Student_name = Get_Student_Name(Stu_id);
	Welcome_MSG_Student(Student_name);
	bool run = true;
	while (run)
	{
		Main_Menu_Student();
		switch (Choice_Main_Menu_Student())
		{
		case 1:
			Register_in_Course(Stu_id);
			break;
		case 2:
			List_MY_Courses(Stu_id);
			break;
		case 3:
			Grades_Rebort(Stu_id);
			break;
		case 4:
			View_course(Stu_id);
			break;
		case 5:
			run = false;
			break;
		}

	}
	Goodby_MSG_Student(Student_name);
}

void Educational_System::Main_Menu_Student()
{
	cout << "\n\nMain Menu Please make achoice : \n";
	cout << "1 - Register in Course\n";
	cout << "2 - List MY Courses\n";
	cout << "3 - Grades Rebort\n";
	cout << "4 - View Course\n";
	cout << "5 - Log out\n";
}

int Educational_System::Choice_Main_Menu_Student()
{
	int ch;
	while (true)
	{
		cout << "\nEnter Choice [1-5] : ";
		cin >> ch;
		if (ch > 0 && ch < 6)	return ch;
		else Msg_Out_of_Rang();
	}
}
int Educational_System::Chioce_Course_Number(int rang)
{
	int ch;
	while (true)
	{
		cout << "\nRegister in Course Number [1-" << rang << "] : ";
		cin >> ch;
		cout << "\n=================================\n";
		if (ch > 0 && ch <= rang)	return ch;
		else Msg_Out_of_Rang();
	}
}

void Educational_System::Register_in_Course(int Stu_id)
{
	int c = 0;
	vector<int>num_c;
	cout << "\nUNRegister Courses : ";
	cout << "\n================================================================================================\n";
	for (int i = 0; i < Courses.size(); i++)
	{
		vector<int>v;
		bool ok = true;
		v = Courses[i].get_Students_IDS_Regester();
		for (int j = 0; j < v.size(); j++)
		{
			 ok = true;
			if (v[j] == Stu_id)
			{
				ok = false;
				break;
			}
		}
		if (ok)
		{
			cout << c++ + 1 << "] Course_Name : " << Courses[i].get_Course_Name() << "  Course_Code : " << Courses[i].get_Course_Code() << " Made by Doctor : " << Courses[i].get_Doctor_Name() << "\n";
			num_c.push_back(i);
		}
		v.clear();
	}
	if (num_c.size() == 0) cout << "\aDon't any Course you don't register in it yet.....\n";
	
	cout << "================================================================================================\n\n\n";
	if (num_c.size() > 0)
	{
		int ch;
		ch = Chioce_Course_Number(num_c.size());
		Courses[num_c[ch - 1]].set_Students_IDS_Regester(Stu_id);
		for (int i = 0; i < Students.size(); i++)
		{
			if (Students[i].get_ID() == Stu_id)
			{	
				Students[i].set_Course(Courses[num_c[ch - 1]].get_Course_Name(), Courses[num_c[ch - 1]].get_Course_Code());
				break;
			}
		}
		cout << "\a                                           Done Registering\n======================================================\n\n";
	}
}
void Educational_System::List_MY_Courses(int Stu_id)
{
	int c = 0;
	cout << "\nYour Register_Courses : ";
	cout << "\n================================================================================================\n";
	for (int i = 0; i < Courses.size(); i++)
	{
		vector<int>v;
		bool ok = false;
		v = Courses[i].get_Students_IDS_Regester();
		for (int j = 0; j < v.size(); j++)
		{
			ok = false;
			if (v[j] == Stu_id)
			{
				ok = true;
				break;
			}
		}
		if (ok)
		{
			cout << c++ + 1 << "] Course_Name : " << Courses[i].get_Course_Name() << "  Course_Code : " << Courses[i].get_Course_Code() << " Made by Doctor : " << Courses[i].get_Doctor_Name() << "\n";
			
		}
		v.clear();
	}
	if (c == 0) cout << "\aYou Don't Register In Any Course Yet.....\n";

	cout << "================================================================================================\n\n\n";
}
void Educational_System::View_course(int Stu_id)
{
	int c = 0;
	vector<int>idx;
	cout << "\nYour Register_Courses : ";
	cout << "\n================================================================================================\n";
	for (int i = 0; i < Courses.size(); i++)
	{
		vector<int>v;
		bool ok = false;
		v = Courses[i].get_Students_IDS_Regester();
		for (int j = 0; j < v.size(); j++)
		{
			ok = false;
			if (v[j] == Stu_id)
			{
				ok = true;
				break;
			}
		}
		if (ok)
		{
			cout << c++ + 1 << " ] Course_Name : " << Courses[i].get_Course_Name() << "                 Course_Code : " << Courses[i].get_Course_Code() << " Made by Doctor : " << Courses[i].get_Doctor_Name() << "\n";
			idx.push_back(i);
		}
		v.clear();
	}
	if (c == 0) cout << "\aYou Don't Register In Any Course Yet.....\n";
	cout << "================================================================================================\n\n\n";
	
	int ch;
	ch=Chioce_Course_number(idx.size());  // retrun Course number which view it  
	int c_idx = idx[ch - 1];  //   idx[ch-1] = Course Code  which view it 

	if (c > 0)
	{
		int sz = Courses[c_idx].assignment.size();
		cout << "  Course "<< Courses[c_idx].get_Course_Name() << " with Code : "<< Courses[c_idx].get_Course_Code()<<" - taugth by Doctor : "<< Courses[c_idx].get_Doctor_Name()<<"\n";
		cout << "  Course has " << sz << " assignment \n";
		for (int i = 0; i < sz; i++)
		{
			cout << "  Assignment " << i + 1;
			bool ok = true;
			for (int j = 0; j < Courses[c_idx].assignment[i].Assignment_solution.size(); i++)
			{
				if(Courses[c_idx].assignment[i].Assignment_solution[j].get_Student_ID() == Stu_id);
				{
					cout << " Submitted - ";
					if (Courses[c_idx].assignment[i].Assignment_solution[j].get_is_Marked())
						cout << Courses[c_idx].assignment[i].Assignment_solution[j].get_your_Degree();
					else
						cout << "NA";

					cout << " / " << Courses[c_idx].assignment[i].get_Max_Assignment_Degree() ;
					if (Courses[c_idx].assignment[i].Assignment_solution[j].get_Comment() != "Unknown")
						cout << "  :: Comment Doctor on Solution : " << Courses[c_idx].assignment[i].Assignment_solution[j].get_Comment() << "\n";
					else
						cout << "\n";
				   	ok = false;
					break;
				}
			}
			if (ok)
			{
				cout << "NOT Submitted  NA / " << Courses[c_idx].assignment[i].get_Max_Assignment_Degree() << "\n";
			}
		}
		cout << "============================================================================\n\n";
		pair<int,int>pp;
		pp.first = Stu_id;
		pp.second = c_idx;
		bool run = true;
		while (run)
		{
			Menu_View_Course_S();
			switch (Chioce_Menue_View_Course_number())
			{
			case 1:
				UNRegister_From_Course(pp);
				run = false;
				break;
			case 2:
				Submit_Solution(pp);
				break;
			case 3:
				run = false;
				break;
			}

		}
		
	}
}
void Educational_System::Grades_Rebort(int Stu_id)
{

	int c = 0;
	cout << "\nYour Grades_Rebort : ";
	cout << "\n================================================================================================\n";
	for (int i = 0; i < Courses.size(); i++)
	{
		vector<int>v;
		bool ok = false;
		v = Courses[i].get_Students_IDS_Regester();
		for (int j = 0; j < v.size(); j++)
		{
			ok = false;
			if (v[j] == Stu_id)
			{
				ok = true;
				break;
			}
		}
		if (ok)
		{
			int na=0,d=0;
			na = Courses[i].get_assignment().size();
			c++;
			cout << "  Course_Code : " << Courses[i].get_Course_Code() << " - Total ";
			int szz1 = Courses[i].assignment.size();
			for (int k = 0; k < szz1; k++)
			{
				Courses[i].assignment[k].Assignment_solution.size();
				for (int l = 0;l < Courses[i].assignment[k].Assignment_solution.size();l++)
				{
					if (Courses[i].assignment[k].Assignment_solution[l].get_Student_ID() == Stu_id)
					{
						na++;
						d += Courses[i].assignment[k].Assignment_solution[l].get_your_Degree();
						break;
					}
				}
			}
			if (d < 0) d = 0;
			cout<<"submitted "<<na << "  assignments - Grade "<<d<<" / "<<na*100<<"\n";
			
		}
		v.clear();
	}
	if (c == 0) cout << "\aYou Don't Register In Any Course Yet.....\n";

	cout << "================================================================================================\n\n\n";

}
int Educational_System::Chioce_Course_number(int rang)
{
	int ch;
	while (true)
	{
		cout << "\nView Course Number [1-" << rang << "] : ";
		cin >> ch;
		cout << "\n=================================\n";
		if (ch > 0 && ch <= rang)	return ch;
		else Msg_Out_of_Rang();
	}
}
void Educational_System::Menu_View_Course_S()
{
	cout << "\n\nMenu View Course  : \n";
	cout << "1 - UNRegister from Course\n";
	cout << "2 - Submit Solution\n";
	cout << "3 - Back\n";
}
int Educational_System::Chioce_Menue_View_Course_number()
{
	int ch;
	while (true)
	{
		cout << "\nEnter Choice [1-3] : ";
		cin >> ch;
		if (ch > 0 && ch < 4)	return ch;
		else Msg_Out_of_Rang();
	}
}
void Educational_System::UNRegister_From_Course(pair<int,int>sc) // Student_id , Course_index
{
	vector<int>v_ids,new_ids;
	v_ids = Courses[sc.second].get_Students_IDS_Regester();
	for (int i = 0; i < v_ids.size(); i++)
	{
		if (v_ids[i]!= sc.first)
		{
			new_ids.push_back(v_ids[i]);
		}
	}
	
	Courses[sc.second].set_Students_IDS_Regester_all(new_ids);

	for (int i = 0; i < Students.size(); i++)
	{
		if (Students[i].get_ID() == sc.first)
		{
			vector<pair<string, string>>ss,nss;  // Course_name , Course_Code
			 ss = Students[i].get_List_MY_Courses();
			for (int j = 0; j < ss.size(); j++)
			{
				if (ss[j].second != Courses[sc.second].get_Course_Code())
				{
					nss.push_back(ss[j]);
					break;
				}
			}
			Students[i].set_List_MY_Courses(nss);
				break;
		}
	}
}
/*
*  htis Method take Parmeters  1 : Student_id , 2: Course_index as Pair<string,string>
*/
void Educational_System::Submit_Solution(pair<int, int>sc) // Student_id, Course_index
{
	int sz = Courses[sc.second].assignment.size();
	cout << "  Course " << Courses[sc.second].get_Course_Name() << " with Code : " << Courses[sc.second].get_Course_Code() << " - taugth by Doctor : " << Courses[sc.second].get_Doctor_Name() << "\n";
	cout << "  Course has " << sz << " assignment \n";
	for (int i = 0; i < sz; i++)
	{
		cout << "  Assignment " << i + 1;
		for (int j = 0; j < Courses[sc.second].assignment[i].Assignment_solution.size(); i++)
		{
			if (Courses[sc.second].assignment[i].Assignment_solution[j].get_Student_ID() == sc.first);
			{
				cout << " Submitted     - ";
				if (Courses[sc.second].assignment[i].Assignment_solution[j].get_is_Marked())
					cout << Courses[sc.second].assignment[i].Assignment_solution[j].get_your_Degree();
				else
					cout << "NA";

				cout << " / " << Courses[sc.second].assignment[i].get_Max_Assignment_Degree() << "\n";

				break;
			}
		}
	}
	cout << "============================================================================\n\n";

	int Assignemt_number = 0;
	string solve;
	cout << "\nWhich ith [1 - " << Courses[sc.second].assignment.size() << "] assignment to Submit ? ";
	cin >> Assignemt_number;
	cout << "Enter the Solution ( no space ) : ";
	cin >> solve;

	Assignment_Solution AS(sc.first,solve); //  first :  Student_id  Second : Solve
	Courses[sc.second].assignment[Assignemt_number - 1].set_Assignment_solution(AS);
	cout << "\a                                                                           Done          \n\n";
	//Courses[sc.second].
}

/*=======================================================================================================*/

void Educational_System::run_System_as_Teaching_Assistant(int TA_id)
{
	cout << "\n\nHello Student \a \n you Student\n\n";
}

