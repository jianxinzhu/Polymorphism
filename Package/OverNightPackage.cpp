/*
name: jiaxnin zhu
date: aug16/2020
*/

#include"OverNightPackage.h"
#include<sstream>

OverNightPackage::OverNightPackage(const std::string& fname, const std::string& faddress, double fweight, double fcost, double overfee)
	:TwoDayPackage(fname, faddress, fweight, fcost)
{
	setOverNightFee(overfee);
}
void OverNightPackage::setOverNightFee(double overNightFee)
{
	this->overNightFee = overNightFee;
}
double OverNightPackage::getOverNightFee() const
{
	return overNightFee;
}
double OverNightPackage::shippingCost() const
{
	return TwoDayPackage::shippingCost() + getOverNightFee();
}
std::string OverNightPackage::toString() const
{
	std::ostringstream output;

	output << "*OverNight Package*" << std::endl;
	output << "Shipping Per Pound: $" << getCost() << "\nTotal: " << shippingCost() << std::endl;
	output << "SubTotal: "<<TwoDayPackage::shippingCost()<<"\nAdding OverNight Fee :$" << getOverNightFee() << std::endl;
	output << "Total: " << shippingCost() << std::endl;

	return output.str();
}
