/*
name: jianxin zhu
date: aug/16/2020
*/

#include"SalaryEmployee.h"
#include"Employee.h"
#include<stdexcept>
#include<sstream>

SalaryEmployee::SalaryEmployee(const std::string& first, const std::string& last, const std::string& ssn,
	const Date& birth, double hour, double salary)
	:Employee(first, last, ssn, birth)
{
	setHourlySalary(salary);
	setWeekHour(hour);
}

void SalaryEmployee::setWeekHour(double hour)
{
	if (hour < 0)
	{
		throw std::invalid_argument("Hour can not be ZERO");
	}

	weekHour = hour;
}
void SalaryEmployee::setHourlySalary(double salary)
{
	if (salary < 0.0)
	{
		throw std::invalid_argument("Hourly Salary can be lower than ZERO");
	}
	hourlySalary = salary;
}
double SalaryEmployee::getWeekHour() const
{
	return weekHour;
}
double SalaryEmployee::getHourlSalary() const
{
	return hourlySalary;
}
double SalaryEmployee::earnning() const
{
	return getHourlSalary() * getWeekHour() + Employee::getBirthBonus();
}
std::string SalaryEmployee::toString() const
{
	std::ostringstream output;

	output << "Name: " << getFirstName() << "." << getLastName() << std::endl;
	output << "SSN: " << getSSN() << std::endl;
	output << "BirthDate: " << birthDay.toString() << std::endl;

	output << "Salary: " << earnning() << std::endl;

	return output.str();
}
