#pragma once
class Employee
{
private:
	int empno;
	char name[20];
	double basicSal;
	double allowance;
	double salary;
	double otHrs;
	double otRate;
	double salary2;

 public:
	//void assignDetails(int pempno, const char *pname, double pbasicSal);
	void setAllowance();
	void calcSal();
	void printPaySlip();
	void setOfDetails();
	void InputDetails();
};

