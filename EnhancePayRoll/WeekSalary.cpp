/*
name: jianxin zhu
date: aug/17/2020
*/


#include"WeekSalary.h"
#include<stdexcept>
#include<sstream>


WeekSalary::WeekSalary(const std::string& fname, const std::string& fssn, double salary)
	:Employee(fname, fssn)
{
	setWeekSalary(salary);
}
void WeekSalary::setWeekSalary(double weekSalary)
{
	if (weekSalary < 0.0)
	{
		throw std::invalid_argument("Salary Cannot lower than ZERO");
	}

	this->weekSalary = weekSalary;
}
double WeekSalary::getWeekSalary() const
{
	return weekSalary;
}
double WeekSalary::earnning() const
{
	return getWeekSalary();
}
std::string WeekSalary::toString() const
{
	std::ostringstream output;
	output << Employee::toString();
	output << "Salary: $" << getWeekSalary() << std::endl;

	return output.str();
}
