/*
name: jianxin zhu
date aug/16/2020
*/

#ifndef DATE_H
#define DATE_H

#include<array>
#include<string>

class Date
{
public:
	Date(unsigned int = 1, unsigned int = 1, unsigned int = 1970);
	~Date();

	void setYear(unsigned int);
	void setMonth(unsigned int);
	void setDay(unsigned int);

	unsigned int getYear() const;
	unsigned int getMonth() const;
	unsigned int getDay() const;

	std::string toString() const;

private:
	unsigned int year;
	unsigned int month;
	unsigned int day;

	static std::array<unsigned int, 13>dayOfMonth;
};
#endif
