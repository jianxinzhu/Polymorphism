/*
name: jiaxin zhu
date: aug/16/2020
*/

#include"Package.h"
#include<stdexcept>
#include<sstream>

Package::Package(const std::string& fname, const std::string& faddress, double fweight)
{
	setName(fname);
	setAddress(faddress);
	setWeight(fweight);
}
void Package::setName(const std::string& name)
{
	if (name.empty())
	{
		throw std::invalid_argument("Sender/Recipient Name can not be NONE");
	}
	this->name = name;
}
void Package::setAddress(const std::string& address)
{
	if (address.empty())
	{
		throw std::invalid_argument("Address can not be NONE");
	}
	this->address = address;
}
void Package::setWeight(double weight)
{
	if (weight < 0)
	{
		throw std::invalid_argument("Weight can not be ZERO");
	}
	this->weight = weight;
}
std::string Package::getName() const
{
	return name;
}
std::string Package::getAddress() const
{
	return address;
}
double Package::getWeight() const
{
	return weight;
}
std::string Package::toString() const
{
	std::ostringstream output;

	output << "Name: " << getName() << "\nAddress: " << getAddress() << std::endl;
	output << "Weight: " << getWeight() << " lbs" << std::endl;

	return output.str();
}
