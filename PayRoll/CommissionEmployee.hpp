/*
name: jianxin zhu
date: aug/16/2020
*/

#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include"Employee.h"

class CommissionEmployee :public Employee
{
public:
	CommissionEmployee(const std::string&, const std::string&, const std::string&, const Date&, double = 0, double = 0);
	virtual ~CommissionEmployee() = default;

	void setGrossSale(double);
	void setCommissionRate(double);

	double getGrossSale() const;
	double getCommissionRate() const;

	virtual double earnning() const override;
	virtual std::string toString() const override;

private:
	double grossSale;
	double commissionRate;
};
#endif
