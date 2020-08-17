/*
name: jianxin zhu
date: aug/16/2020
*/

#include"Date.h"
#include<stdexcept>
#include<sstream>

std::array<unsigned int, 13>Date::dayOfMonth{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
Date::Date(unsigned int m, unsigned int d, unsigned int y)
{
	setMonth(m);
	setDay(d);
	setYear(y);
}
Date::~Date()
{

}
void Date::setMonth(unsigned int month)
{
	if (month > 0 && month < 13)
	{
		this->month = month;
	}
	else
	{
		throw std::invalid_argument("Month should be in 1-12");
	}
}
void Date::setDay(unsigned int day)
{

    if (((getMonth() == 2) && day == 29) && getYear() % 400 == 0 && getYear() % 4 == 0)
		{
			this->day = day;
		}

	if (day > dayOfMonth[getMonth()] && day < 0)
	{
		throw std::invalid_argument("Current Day is not in current month");
	}
	else
	{
		this->day = day;
	}
}
void Date::setYear(unsigned int year)
{
	if (year < 0 && year > 2020)
	{
		throw std::invalid_argument("Year must be between 0 - 2020");
	}

	this->year = year;
}
unsigned int Date::getDay() const
{
	return day;
}
unsigned int Date::getMonth() const
{
	return month;
}
unsigned int Date::getYear() const
{
	return year;
}
std::string Date::toString() const
{
	std::ostringstream output;

	output << getMonth() << "/" << getDay() << "/" << getYear();

	return output.str();
}
