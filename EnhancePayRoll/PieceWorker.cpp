/*
name: jianxin zhu
date: aug/17/2020
*/
#include"PieceWorker.h"
#include<sstream>
#include<stdexcept>


PieceWorker::PieceWorker(const std::string& fname, const std::string& fssn, double piece, double wage)
	:Employee(fname, fssn)
{
	setPiece(piece);
	setWage(wage);
}
void PieceWorker::setPiece(int piece)
{
	if (piece < 0)
	{
		throw std::invalid_argument("Piece must be >= 0");
	}
	this->piece = piece;
}
void PieceWorker::setWage(double wage)
{
	if (wage < 0.0)
	{
		throw std::invalid_argument("Wage must be >= 0.0");
	}
	this->wage = wage;
}
int PieceWorker::getPiece() const
{
	return piece;
}
double PieceWorker::getWage() const
{
	return wage;
}
double PieceWorker::earnning() const
{
	return getPiece() * getWage();
}
std::string PieceWorker::toString() const
{
	std::ostringstream output;

	output << Employee::toString();
	output << "Wage: " << getWage() << "\nProduct: " << getPiece() << std::endl;
	output << "Salary: $" << earnning() << std::endl;

	return output.str();
}
