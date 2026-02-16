#include "FinanceTracker.h"
#include <chrono>
#include <fstream>


FinanceTracker::FinanceTracker()
{
	std::cout << "Created new tracker "<< std::endl;
}

void FinanceTracker::Show() const
{
	std::cout << " Info about operations ";
	for (auto op : Operations)
	{
		std::cout << "Amount : " << op.GetAmount()<< std::endl;
		std::cout << "Cetegory : " << op.GetCategory() << std::endl;
		std::cout << "Type : " << op.GetType() << std::endl;
		std::cout << "Date : \n" << "Day: " << op.GetDay() << "-" << "Month: " << op.GetMonth() << "-" << "Day: " << op.GetYear() << "-" << std::endl;
		std::cout << "//////////////////////////////////////" << std::endl;
	}
}

void FinanceTracker::ShowTransaction(Transaction T) const
{
	std::cout << "Amount : " << T.GetAmount() << std::endl;
	std::cout << "Cetegory : " << T.GetCategory() << std::endl;
	std::cout << "Type : " << T.GetType() << std::endl;
	std::cout << "Date : \n" << "Day: " << T.GetDay() << "-" << "Month: " << T.GetMonth() << "-" << "Day: " << T.GetYear() << "-" << std::endl;
	std::cout << "//////////////////////////////////////" << std::endl;
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

bool FinanceTracker::SaveOperation(Transaction Tr, const std::string& filename)
{
	std::ofstream file(filename, std::ios::app);
	if (!file.is_open()) return false;
	file << Tr.GetAmount() << " " << Tr.GetType() << " " << Tr.GetCategory() << " " << Tr.GetDay() << "." << Tr.GetMonth() << "." << Tr.GetYear() << "\n";
	file.close();
	return true;
}

bool FinanceTracker::SaveOperations(std::vector<Transaction> Trs, const std::string& filename)
{
	std::ofstream file(filename, std::ios::app);
	if (!file.is_open()) return false;
	for (auto t : Trs)
	{
		file << t.GetAmount() << " " << t.GetType() << " " << t.GetCategory() << " " << t.GetDay() << "." << t.GetMonth() << "." << t.GetYear() << "\n";
	}
	file.close();
	return true;
}

bool FinanceTracker::LoadOperations(std::vector<Transaction>, const std::string& filename)
{
	std::ifstream file(filename, std::ios::app);
	return true;
}




void FinanceTracker::EditOperation()
{
}

void FinanceTracker::SearchBySumm(int)
{
}
