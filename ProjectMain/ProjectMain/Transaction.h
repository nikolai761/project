#pragma once
#include <string>
#include <ctime>
#include <chrono>
#include <iostream>
using std::string;

class Transaction
{
public:

	enum class TransactionType
	{
		INCOME,
		OUT,
		NONE
	};
	enum class TransactionCategory
	{
		CHEMISTRY,
		GASOLINE,
		HOMEPAY,
		PRODUCTS,
		NONE
	};


	struct Date
	{
		int year, month, day;
	};

private:

	int amount;
	Date date;
	TransactionCategory category;
	TransactionType type;

public:

	static 	Date get_current_date();
		
	Transaction();

	Transaction(int,  int, int );
	
	int GetAmount() const;

	auto GetDate() const;

	std::string GetCategory() const;

	std::string GetType() const;

};