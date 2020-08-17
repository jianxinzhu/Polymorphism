/*
name: jianxin zhu
date: aug/16/2020
*/

#include"TwoDayPackage.h"
#include<stdexcept>
#include<sstream>


TwoDayPackage::TwoDayPackage(const std::string& fname, const std::string& faddress, double fweight, double cost)
	:Package(fname, faddress, fweight)
{
	setCost(cost);
}
void TwoDayPackage::setCost(double cost)
{
	if (cost < 0.0)
	{
		throw std::invalid_argument("Cost Per Pound Can not be ZERO");
	}
	costPerPound = cost;
}
double TwoDayPackage::getCost() const
{
	return costPerPound;
}
double TwoDayPackage::shippingCost() const
{
	return Package::getWeight() * getCost();
}
std::string TwoDayPackage::toString() const
{
	std::ostringstream output;

	output << Package::toString();

	output <<"Shipping Per Pound: $"<<getCost()<< "\nTotal: " << shippingCost() << std::endl;

	return output.str();
}
