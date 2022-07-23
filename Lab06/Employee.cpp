#include "Employee.h"
#include <iostream>
#include <cstring>

using namespace std;

/*void Employee::assignDetails(int pempno, const char *pname, double pbasicSal)
{
	empno = pempno;
	strcpy_s(name, pname);
	basicSal = pbasicSal;
}*/

void Employee::InputDetails()
{
	cout << "Input Employee No :";
	cin >> empno;
	cout << "Input Name :";
	cin >> name;
	cout << "Input Basic Salary :";
	cin >> basicSal;
}

/*void Employee::setAllowance(double pallowance)
{
	allowance = pallowance;
}*/

void Employee::setAllowance()
{
	cout << "Input Employee Allowance :";
	cin >> allowance;
}

void Employee::setOfDetails()
{
	cout << "Input Employee OT Hrs :";
	cin >> otHrs;
	cout << "Input Employee OT Rate :";
	cin >> otRate;
}

void Employee::calcSal()
{
	salary = basicSal + allowance;
	salary2 = basicSal + allowance + (otRate * otHrs);
}

void Employee::printPaySlip()
{
	cout << "......................................" << endl;
	cout << "Emp No \t:" << empno << endl;
	cout << "Name \t:" << name << endl;
	cout << "Basic Salary \t:" << basicSal << endl;
	cout << "Allowance \t:" << allowance << endl;
	cout << "Net Salary \t:" << salary << endl;
	cout << "Net Salary with Ot amount \t:" << salary2 << endl;
	cout << "......................................" << endl;

}
