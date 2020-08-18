/*
name: jianxin zhu
date: aug/17/2020
*/
#include"Employee.h"
#include<sstream>
#include<stdexcept>

Employee::Employee(const std::string& fname, const std::string& fssn)
{
	setName(fname);
	setSSN(fssn);
}
void Employee::setName(const std::string& name)
{
	if(name.empty())
	{
		throw std::invalid_argument("Name CAN NOT BE NONE");
	}
	this->name = name;
}
void Employee::setSSN(const std::string& socialSecurityNumber)
{
	if (socialSecurityNumber.empty()||socialSecurityNumber.size() != 12)
	{
		throw std::invalid_argument("SSN must in xxx-xxx-xxxx format");
	}
	this->socialSecurityNumber = socialSecurityNumber;
}
std::string Employee::getName() const
{
	return name;
}
std::string Employee::getSSN() const
{
	return socialSecurityNumber;
}
std::string Employee::toString() const
{
	std::ostringstream output;

	output << "Name: " << getName() << "\nSSN: " << getSSN() << std::endl;

	return output.str();
}
