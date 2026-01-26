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

	void AddOperation();

	void SaveOperation();

	void EditOperation();

	void SearchBySumm(int);
	
};