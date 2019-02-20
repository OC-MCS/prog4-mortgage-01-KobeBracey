#pragma once
// header file for Mortgage class
class Mortgage
{
private:
	double payment; //monthly payment
	double loan; // loan amount
	double rate; // annual interest rate
	int years; // number of years of loan
public:
	Mortgage();
	void setRate(double);
	void setLoan(double);
	void setYears(int);
	double getTerm();
	double getPayment();

};
