/*
name: jianxin zhu
date: aug/16/2020
*/

#include"BaseCommission.h"
#include<stdexcept>
#include<sstream>

BaseCommission::BaseCommission(const std::string& first, const std::string& last, const std::string& ssn, const Date& birth, double sale, double rate, double base)
	:CommissionEmployee(first, last, ssn, birth, sale, rate)
{
	setSalary(base);
}
void BaseCommission::setSalary(double base)
{
	if (base < 0)
	{
		throw std::invalid_argument("Base Salary can not be lower than zero");
	}
	baseSalary = base;
}
double BaseCommission::getSalary() const
{
	return baseSalary;
}
double BaseCommission::earnning() const
{
	return CommissionEmployee::earnning() + getSalary() + Employee::getBirthBonus();
}
std::string BaseCommission::toString() const
{
	std::stringstream output;

	output << "Name: " << getFirstName() << "." << getLastName() << std::endl;
	output << "SSN: " << getSSN() << std::endl;
	output << "BirthDate: " << birthDay.toString() << std::endl;
	output << "Gross Sale: " << getGrossSale() << " CommissionRate: " << getCommissionRate() << std::endl;
	output << "Base Salary: " << getSalary() << std::endl;
	output << "Salary: " << earnning() << std::endl;

	return output.str();
}
