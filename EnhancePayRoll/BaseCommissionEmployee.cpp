#include"BaseCommissionEmployee.h"
#include<sstream>
#include<stdexcept>

BaseCommissionEmployee::BaseCommissionEmployee(const std::string& fname, const std::string& fssn, double sale, double rate, double base)
	:CommissionEmployee(fname, fssn, sale, rate)
{
	setBaseSalary(base);
}
void BaseCommissionEmployee::setBaseSalary(double baseSalary)
{
	if (baseSalary < 0.0)
	{
		throw std::invalid_argument("Base Salary must be >= 0.0");
	}
	this->baseSalary = baseSalary;
}
double BaseCommissionEmployee::getBaseSalary() const
{
	return baseSalary;
}
double BaseCommissionEmployee::earnning() const
{
	return CommissionEmployee::earnning() + getBaseSalary();
}
std::string BaseCommissionEmployee::toString() const
{
	std::ostringstream output;

	output << Employee::toString();
	output << "Sale: $" << getGrossSale() << "\nCommission Rate: " << getCommissionRate() << std::endl;
	output << "Base Salary: "<<getBaseSalary()<<"\nSalary: $" << earnning() << std::endl;

	return output.str();
}