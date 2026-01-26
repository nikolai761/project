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
	int amountD, category, type;

	std::cout << "Enter money amount  of transction ";
	std::cin >> amountD;

	std::cout << "Choose category of  transction " << std::endl;
	std::cout << "1 : CHEMISTRY  " << std::endl;
	std::cout << "2 : GASOLINE   " << std::endl;
	std::cout << "3 : HOMEPAY " << std::endl;
	std::cout << "4 : PRODUCTS " << std::endl;
	std::cin >> category;



	
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
