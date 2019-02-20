// implementation file for Mortgage class
#include <iostream>
#include <cmath>
#include "Mortgage.h"

//Constructor that initializes the class
Mortgage::Mortgage()
{
	payment = 0;
	loan = 0;
	rate = 0;
	years = 0;
}

// allows to set the double rate for the class
void Mortgage::setRate(double r)
{
	if (r >= 0)
	{
		rate = r;
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}

// allows to set the double loan for the class
void Mortgage::setLoan(double l)
{
	if (l >= 0)
	{
		loan = l;
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}

// allows to set the int year for the class
void Mortgage::setYears(int y)
{
	if (y >= 0)
	{
		years = y;
	}
	else
	{
		exit(EXIT_FAILURE);
	}
}

// calculates the term from the other private members
double Mortgage::getTerm()
{
	return pow(1 + (rate / 12), 12 * years);
}

// caluculates the monthly payment using the getTerm and other needed members
double Mortgage::getPayment()
{
	return (loan * (rate / 12) * getTerm()) / (getTerm() - 1);
}