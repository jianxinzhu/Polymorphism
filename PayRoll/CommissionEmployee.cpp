/*
name: jianxin zhu
date: aug/16/2020
*/

#include"CommissionEmployee.h"
#include<stdexcept>
#include<sstream>


CommissionEmployee::CommissionEmployee(const std::string& first, const std::string& last, const std::string& ssn, const Date& birth, double sale, double rate)
	:Employee(first, last, ssn, birth)
{
	setGrossSale(sale);
	setCommissionRate(rate);
}
void CommissionEmployee::setGrossSale(double sale)
{
	if (sale <= 0)
	{
		grossSale = 0;
	}

	grossSale = sale;
}
void CommissionEmployee::setCommissionRate(double rate)
{
	if (rate > 0.0 && rate <= 1.0)
	{
		commissionRate = rate;
	}
	else
	{
		throw std::invalid_argument("CommissionRate can not be zero");
	}
}
double CommissionEmployee::getCommissionRate()const
{
	return commissionRate;
}
double CommissionEmployee::getGrossSale() const
{
	return grossSale;
}
double CommissionEmployee::earnning() const
{
	return getGrossSale() * getCommissionRate() + Employee::getBirthBonus();
}
std::string CommissionEmployee::toString() const
{
	std::stringstream output;

	output << "Name: " << getFirstName() << "." << getLastName() << std::endl;
	output << "SSN: " << getSSN() << std::endl;
	output << "BirthDate: " << birthDay.toString() << std::endl;
	output << "Gross Sale: " << getGrossSale() << " CommissionRate: " << getCommissionRate() << std::endl;
	output << "Salary: " << earnning() << std::endl;
	
	return output.str();
}
