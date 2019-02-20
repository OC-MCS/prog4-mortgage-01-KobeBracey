// main goes here. Code that *uses* the Mortgage class
// goes in this file
//=====================================================
// Kobe Bracey
// 1/25/19
// Programming Assignment #4
// Mortgage
//=====================================================
#include <iostream>
#include "Mortgage.h"

int main()
{
	Mortgage m1;
	m1.setLoan(2.50);
	m1.setYears(3);
	m1.setRate(0.75);
	m1.getTerm();
	m1.getPayment();

	return 0;
}