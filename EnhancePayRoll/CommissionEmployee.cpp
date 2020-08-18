/*
name: jianxin zhu
date: aug/17/2020
*/
#include"CommissionEmployee.h"
#include<sstream>
#include<stdexcept>

CommissionEmployee::CommissionEmployee(const std::string& fname, const std::string& fssn, double sale, double rate)
	:Employee(fname, fssn)
{
	setGrossSale(sale);
	setCommissionRate(rate);
}
void CommissionEmployee::setGrossSale(double grossSale)
{
	if (grossSale < 0.0)
	{
		throw std::invalid_argument("Gross Sale can not be lower than ZERO");
	}
	this->grossSale = grossSale;
}
void CommissionEmployee::setCommissionRate(double commissionRate)
{
	if (commissionRate < 0.0 && commissionRate>1.0)
	{
		throw std::invalid_argument("Commission Rate can not be lower than 0.0 or Greater than 1.0");
	}
	this->commissionRate = commissionRate;
}
double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
}
double CommissionEmployee::getGrossSale() const
{
	return grossSale;
}
double CommissionEmployee::earnning() const
{
	return getCommissionRate() * getGrossSale();
}
std::string CommissionEmployee::toString() const
{
	std::ostringstream output;

	output << Employee::toString();
	output << "Sale: $" << getGrossSale() << "\nCommission Rate: " << getCommissionRate() << std::endl;
	output << "Salary: $" << earnning() << std::endl;

	return output.str();
}
