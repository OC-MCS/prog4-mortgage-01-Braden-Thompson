#include <iostream>
#include <string>
#include <iomanip>
#include "Mortgage.h"

using namespace std;

int main()
{
	Mortgage mtg;
	
	mtg.setLoan();
	mtg.setInterestRate();
	mtg.setYears();

	cout << setprecision(2) << fixed;

	cout << "\nMonthly Bank Payment: $";
	cout << mtg.getMonthlyPayment();

	cout << "\nTotal paid at the end of the period: $";
	cout << mtg.getTotalPaid();

	return 0;
}