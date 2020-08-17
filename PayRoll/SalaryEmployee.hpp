/*
name: jianxin zhu
date: aug/16/2020
*/

#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H

#include"Employee.h"

class SalaryEmployee :public Employee
{
public:
	SalaryEmployee(const std::string&, const std::string&, const std::string&,const Date&, double = 0, double = 0);
	virtual ~SalaryEmployee() = default;

	void setWeekHour(double);
	void setHourlySalary(double);

	double getWeekHour() const;
	double getHourlSalary() const;

	virtual double earnning() const override;
	virtual std::string toString() const override;

private:
	double weekHour;
	double hourlySalary;
};
#endif
