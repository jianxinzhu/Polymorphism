#ifndef PIECEWORKER_H
#define PIECEWORKER_H

#include"Employee.h"

class PieceWorker :public Employee
{
public:
	PieceWorker(const std::string&, const std::string&, double, double);
	virtual ~PieceWorker() = default;

	void setPiece(int);
	void setWage(double);

	int getPiece() const;
	double getWage() const;

	virtual double earnning() const override;
	virtual std::string toString() const override;


private:
	int piece;
	double wage;
};
#endif