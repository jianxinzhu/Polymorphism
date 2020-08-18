/*
name: jianxin zhu
date: aug/17/2020
*/
#include"HourlyWorker.h"
#include<sstream>

HourlyWorker::HourlyWorker(const std::string& fname, const std::string& fssn, double hour, double wage)
	:Employee(fname, fssn)
{
	setWage(wage);
	setHour(hour);
}
void HourlyWorker::setHour(double hour)
{
	this->hour = hour;
}
void HourlyWorker::setWage(double wage)
{
	this->wage = wage;
}
double HourlyWorker::getHour() const
{
	return hour;
}
double HourlyWorker::getWage() const
{
	return wage;
}
double HourlyWorker::earnning() const
{
	double extraHour = 0.0;
	if (getHour() > 40)
	{
		extraHour = getHour() - 40;

		return getWage() * 40 + extraHour * getWage() * 1.5;
	}

	return getWage() * getHour();
}
std::string HourlyWorker::toString() const
{
	std::ostringstream output;

	output << Employee::toString();
	output << "Hour: " << getHour() << "\nWage: $" << getWage()
		<< "\nSalary: " << earnning() << std::endl;

	return output.str();
}
