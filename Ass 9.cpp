


#include <iostream> 
#include <iomanip> 
using namespace std;

class Student //declaring a new data structure of type class
{
public:
	Student(); //decalring default constructor
	Student(int id, string fn, string mn, string ln, string major); //declaring user parametrized constructor
	void SetStudent(int id, string fn, string mn, string ln, string major); //function to set data for each student
	void GetStudent(int& id, string& fn, string& mn, string& ln, string& major); //function to retreive data 
	void DisplayStudent(int id, string fn, string mn, string ln, string major); //function to display data
private:
	int s_id;
	string f_name, m_name, l_name, Major;  //private data members

};
int main()
{
	const int N = 100; //max number of students
	int n = 0; //actual number of students
	Student A[N]; //declaring array of user-defined type: Student
	int id = 0;
	string fn, mn, ln, major;

	do
	{
		cout << "Please enter the number of students\n";
		cin >> n;
	} while (n < 0 || n>100);

	for (int i = 0; i < n; i++)
	{
		//getting user data
		cout << "Enter the ID: ";
		cin >> id;
		cout << "Enter the first name: ";
		cin >> fn;
		cout << "Enter the middle name: ";
		cin >> mn;
		cout << "Enter the last name: ";
		cin >> ln;
		cout << "Enter the major: ";
		cin >> major;

		A[i].SetStudent(id, fn, mn, ln, major);
	}
	cout << "ID" << setw(15) << "First Name" << setw(15) << "Middle Name" << setw(15) << "Last Name" << setw(15) << "Major" << endl;
	cout << "------------------------------------------------------------------" << endl;
	for (int i = 0; i < n; i++)
	{
		A[i].GetStudent(id, fn, mn, ln, major);
		A[i].DisplayStudent(id, fn, mn, ln, major);
	}

	return 0;
}
Student::Student() //implementation of default constructor
{

	s_id = 0;
	f_name = "first name";
	m_name = "middle name";
	l_name = "last name";
	Major = "major";

}
Student::Student(int id, string fn, string mn, string ln, string major) //implementation of the parameterized constructor
{

	s_id = id;
	f_name = fn;
	m_name = mn;
	l_name = ln;
	Major = major;
}
void Student::SetStudent(int id, string fn, string mn, string ln, string major) //implementation of the function that sets values to the private data members
{
	s_id = id;
	f_name = fn;
	m_name = mn;
	l_name = ln;
	Major = major;
}
void Student::GetStudent(int& id, string& fn, string& mn, string& ln, string& major) //implementation of the function that retrieves 
//data stored in private data members
{
	id = s_id;
	fn = f_name;
	mn = m_name;
	ln = l_name;
	major = Major;
}
void Student::DisplayStudent(int id, string fn, string mn, string ln, string major) //implementation of the function that displays the data stored in private data members
{
	cout << id << setw(15) << fn << setw(15) << mn << setw(15) << ln << setw(15) << major << endl;

}


