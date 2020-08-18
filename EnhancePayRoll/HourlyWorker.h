#ifndef HOURLYWORKER_H
#define HOURLYWORKER_H

#include"Employee.h"

class HourlyWorker : public Employee
{
public:
	HourlyWorker(const std::string&, const std::string&, double, double);
	virtual ~HourlyWorker() = default;

	void setWage(double);
	void setHour(double);

	double getWage() const;
	double getHour() const;

	virtual double earnning() const override;
	virtual std::string toString() const override;

private:
	double wage;
protected:
	double hour;
};
#endif