#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
	Employee emp1;

	//emp1.assignDetails(100, "Sunil", 50000);
	emp1.InputDetails();
	emp1.setAllowance();
	emp1.setOfDetails();
	emp1.calcSal();
	emp1.printPaySlip();
	
	char ch;
	cin >> ch;
	return 0;
}