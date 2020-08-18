/*
name: jianxin zhu
date: aug/17/2020
*/
#ifndef BASECOMMISSIONEMPLOYEE_H
#define BASECOMMISSIONEMPLOYEE_H

#include"CommissionEmployee.h"

class BaseCommissionEmployee :public CommissionEmployee
{
public:
	BaseCommissionEmployee(const std::string&, const std::string&, double, double, double);
	virtual ~BaseCommissionEmployee() = default;

	void setBaseSalary(double);
	double getBaseSalary() const;

	virtual double earnning() const override;
	virtual std::string toString() const override;

private:
	double baseSalary;
};
#endif
