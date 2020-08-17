/*
name: jianxin zhu
date: aug/16/2020
*/

#ifndef BASECOMMISSION_H
#define BASECOMMISSION_H

#include"CommissionEmployee.h"

class BaseCommission :public CommissionEmployee
{
public:
	BaseCommission(const std::string&, const std::string&, const std::string&, const Date&, double, double, double);
	virtual ~BaseCommission() = default;

	void setSalary(double);
	double getSalary() const;

	virtual double earnning() const override;
	virtual std::string toString() const override;
	
private:
	double grossSale;
	double commissionRate;
	double baseSalary;
};
#endif
