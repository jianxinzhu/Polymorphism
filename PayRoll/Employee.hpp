/*
name: jianxin zhu
date: aug/16/2020
*/
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>
#include"Date.h"

class Employee
{
public:
	Employee(const std::string&, const std::string&, const std::string&,const Date&);
	virtual ~Employee() = default;

	void setFirstName(const std::string&);
	void setLastName(const std::string&);
	void setSSN(const std::string&);
	void setbirthDate(const Date&);
	void setBonus(double);

	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getSSN() const;
	unsigned int getBirthMonth() const;
	double getBirthBonus() const;


	virtual double earnning() const = 0;
	virtual std::string toString() const;

private:
	std::string firstName;
	std::string lastName;
	std::string socialSecurityNumber;

protected:
	Date birthDay;
	double birthBonus = 0;
};
#endif
