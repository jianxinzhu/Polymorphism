/*
name: jianxin zhu
date: aug/16/2020
*/

#include"Employee.h"
#include<stdexcept>
#include<sstream>

Employee::Employee(const std::string& first, const std::string& last, const std::string& ssn, const Date& birth)
{
	setFirstName(first);
	setLastName(last);
	setSSN(ssn);
	setbirthDate(birth);
}
void Employee::setFirstName(const std::string& name)
{
	if (name.empty())
	{
		throw std::invalid_argument("First Name can not be None");
	}

	firstName = name;
}
void Employee::setLastName(const std::string& name)
{
	if (name.empty())
	{
		throw std::invalid_argument("Last Name can not be None");
	}

	lastName = name;
}
void Employee::setSSN(const std::string& number)
{
	if (number.size() != 12)
	{
		throw std::invalid_argument("SSN must be TEN digit");
	}
	socialSecurityNumber = number;
}
void Employee::setbirthDate(const Date& birthDay)
{
	this->birthDay = birthDay;
}
void Employee::setBonus(double bonus)
{
	birthBonus = bonus;
}
std::string Employee::getFirstName() const
{
	return firstName;
}
std::string Employee::getLastName() const
{
	return lastName;
}
std::string Employee::getSSN() const
{
	return socialSecurityNumber;
}
unsigned int Employee::getBirthMonth() const
{
	return birthDay.getMonth();
}
double Employee::getBirthBonus() const
{
	return birthBonus;
}

std::string Employee::toString() const
{
	std::ostringstream output;

	output << "Name: " << getFirstName() << "." << getLastName() << std::endl;
	output << "SSN: " << getSSN() << std::endl;
	output << "BirthDate: " << birthDay.toString() << std::endl;

	return output.str();
}
