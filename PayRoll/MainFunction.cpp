/*
name: jianxin zhu
date: aug/16/2020
*/

#include<iostream>
#include<vector>
#include<ctime>
#include"Employee.h"
#include"Date.h"
#include"SalaryEmployee.h"
#include"CommissionEmployee.h"
#include"BaseCommission.h"

using namespace std;

int main()
{
	time_t t = time(0);
	tm* now = localtime(&t);

	int currentMonth = now->tm_mon + 1;
	Date birthday{ 11,20,1998 };
	Date birthday2{ 8,12,1996 };
	Date birthday3{ 6,15,1999 };

	vector<Employee*>employee{ new SalaryEmployee{ "John","Blue","123-456-7890",birthday,40, 17.5 },
	new CommissionEmployee { "Rose","Lyn","646-233-8072",birthday2,10000, 0.2 },
	new BaseCommission { "Steve","Zhang","917-115-1134",birthday3,15000,0.08, 1000 } };

	for (Employee* employeePtr : employee)
	{

		if (currentMonth == employeePtr->getBirthMonth())
		{
			cout << "Happy BirthDay!!! earnning $100 dollar bonus in Your Salary" << endl;
			employeePtr->setBonus(100);

		}
		cout << employeePtr->toString();

		cout << "-----------------" << endl;
	}

}
