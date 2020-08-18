/*
name: jianxin zhu
date: aug/17/2020
*/
#include<iostream>
#include<vector>
#include"Employee.h"
#include"HourlyWorker.h"
#include"WeekSalary.h"
#include"PieceWorker.h"
#include"CommissionEmployee.h"
#include"BaseCommissionEmployee.h"

using namespace std;

int main()
{

	vector<Employee*>employeeList{ new WeekSalary{"John Zhu","123-456-7890",600},
		new CommissionEmployee{"Alex De","789-123-6677",7000,0.09},
	    new BaseCommissionEmployee{"Lucas Lyn", "123-456-7888", 5000, 0.06, 200},
	    new PieceWorker{"Jess Don","345-789-9078",300,1.5},
		new HourlyWorker{"Pie Lee", "646-333-8888", 45, 15} };

	for (Employee* employeePtr : employeeList)
	{
		cout<<employeePtr->toString();
		cout << "-----------------" << endl;
	}
}
