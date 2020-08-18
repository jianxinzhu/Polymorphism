#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<string>

class Employee
{
public:
	Employee(const std::string&, const std::string&);
	virtual ~Employee() = default;

	void setName(const std::string&);
	void setSSN(const std::string&);

	std::string getName() const;
	std::string getSSN() const;

	virtual double earnning() const = 0;
	virtual std::string toString() const;


private:
	std::string name;
	std::string socialSecurityNumber;
};
#endif