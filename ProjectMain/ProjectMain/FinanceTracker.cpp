#include "FinanceTracker.h"
#include <chrono>


FinanceTracker::FinanceTracker()
{
	std::cout << "Created new tracker "<< std::endl;
}

void FinanceTracker::Show() const
{

}

void FinanceTracker::AddOperation()
{
	int amountD, categoryD, typeD;

	std::cout << "Enter money amount  of transction " << std::endl;
	std::cin >> amountD;

	std::cout << "Choose category of  transction " << std::endl;
	std::cout << "1 : CHEMISTRY  " << std::endl;
	std::cout << "2 : GASOLINE   " << std::endl;
	std::cout << "3 : HOMEPAY " << std::endl;
	std::cout << "4 : PRODUCTS " << std::endl;
	std::cin >> categoryD;

	std::cout << "Choose type of transction  " << std::endl;
	std::cout << "1 : INCOME " << std::endl;
	std::cout << "4 : OUT " << std::endl;
	std::cin >> typeD;

	Operations.push_back(Transaction(amountD, categoryD, typeD));
}




void FinanceTracker::SaveOperation()
{
}

void FinanceTracker::EditOperation()
{
}

void FinanceTracker::SearchBySumm(int)
{
}
