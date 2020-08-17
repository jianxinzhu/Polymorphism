/*
name: jianxinzhu
date aug/16/2020
*/

#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACAGE_H

#include"TwoDayPackage.h"

class OverNightPackage : public TwoDayPackage
{
public:
	OverNightPackage(const std::string&, const std::string&, double, double, double);
	virtual ~OverNightPackage() = default;

	void setOverNightFee(double);
	double getOverNightFee() const;

	virtual double shippingCost() const override;
	virtual std::string toString() const override;
private:
	double overNightFee;
};
#endif
