/*
name: jianxin zhu
date: aug/16/2020
*/

#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H

#include"Package.h"

class TwoDayPackage : public Package
{
public:
	TwoDayPackage(const std::string&, const std::string&, double, double = 0);
	virtual ~TwoDayPackage() = default;

	void setCost(double);
	double getCost() const;

	virtual double shippingCost() const override;
	virtual std::string toString() const override;
private:
	double costPerPound;
};
#endif
