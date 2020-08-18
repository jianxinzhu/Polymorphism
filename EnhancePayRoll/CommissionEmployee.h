/*
name: jianxin zhu
date: aug/17/2020
*/
#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H

#include"Employee.h"

class CommissionEmployee :public Employee
{
public:
	CommissionEmployee(const std::string&, const std::string&, double, double);
	CommissionEmployee() = default;

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
