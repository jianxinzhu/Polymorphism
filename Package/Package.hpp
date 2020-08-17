/*
name: jianxin zhu
date: aug/16/2020
*/

#ifndef PACKAGE_H
#define PACKAGE_H

#include<string>


class Package
{
public:
	Package(const std::string&, const std::string&, double = 0);
	virtual ~Package() = default;

	void setName(const std::string&);
	void setAddress(const std::string&);
	void setWeight(double);

	std::string getName() const;
	std::string getAddress() const;
	double getWeight() const;

	virtual double shippingCost() const = 0;
	virtual std::string toString() const;

private:
	std::string name;
	std::string address;
	double weight;
};
#endif
