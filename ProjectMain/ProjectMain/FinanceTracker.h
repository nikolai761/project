#pragma once
#include"Transaction.h"
#include <vector>
#include <iostream>

using std::vector;

class FinanceTracker
{
private:
	vector<Transaction> Operations;

public:
	explicit FinanceTracker();

	void Show() const;

	void ShowTransaction(Transaction ) const;

	void AddOperation();

	bool SaveOperation(Transaction, const std::string& filename);

	bool SaveOperations(std::vector<Transaction>, const std::string& filename);

	void EditOperation();

	void SearchBySumm(int);
	
};