#ifndef WEEKSALARY_H
#define WEEKSALARY_H

#include"Employee.h"

class WeekSalary : public Employee
{
public:
	WeekSalary(const std::string&, const std::string&, double = 0.0);
	virtual ~WeekSalary() = default;

	void setWeekSalary(double);
	double getWeekSalary() const;

	virtual double earnning() const override;
	virtual std::string toString() const override;

private:
	double weekSalary;
};
#endif