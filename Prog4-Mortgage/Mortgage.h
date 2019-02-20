#pragma once
#ifndef MORTGAGE_H
#define MORTGAGE_H
#include <iostream>
using namespace std;

// declaration of my mortgage class 

class Mortgage 
{
private:
	double loan;
	int years;
	double rate;

	double getTerm() const
	{
		double term;
		term = pow((1 + rate / 12), (12 * years));
		return term;
	}
public:
	Mortgage()
	{
		loan = 0;
		years = 0;
		rate = 0;
	}

	void setLoan()
	{
		double Loan;
		cout << "Enter the ammount of loan in $: ";
		cin >> Loan;

		while (Loan < 0)
		{
			cout << "Please do not enter a negative number: ";
			cin >> Loan;
		}

		loan = Loan;
	}
	void setInterestRate()
	{
		double Rate;
		cout << "Enter the interest rate: ";
		cin >> Rate;

		rate = Rate;
	}
	void setYears()
	{
		int Years;
		cout << "Enter the number of years: ";
		cin >> Years;

		while (Years < 1)
		{
			cout << "Please do not enter a value less than 1: ";
			cin >> Years;
		}

		years = Years;
	}

	double getLoan() const
	{
		return loan;
	}

	int getYears() const
	{
		return years;
	}

	double getInterestRate() const
	{
		return rate;
	}

	double getMonthlyPayment() const
	{
		double payment;
		payment = (loan * rate * getTerm() / 12) /
			(getTerm() - 1);
		return payment;
	}

	double getTotalPaid() const
	{
		double total;
		total = 12 * years * getMonthlyPayment();
		return total;
	}
};

#endif
