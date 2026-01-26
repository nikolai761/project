#include <string>
#include <ctime>
#include <chrono>
#include "Transaction.h"
using std::string;

	Transaction::Transaction()
	{
		amount = 0;
	    date = get_current_date();
		category = TransactionCategory::NONE;
		type = TransactionType::NONE;

	}

	Transaction::Transaction(int _amount,  TransactionCategory _category, TransactionType _type)
	{
		amount = _amount;
		date = get_current_date();
		category = _category;
		type = _type;
	}

	template <typename T>
	Transaction::Transaction(T a) {};

	int Transaction::GetAmount() const
	{
		return this->amount;
	}

	auto Transaction::GetDate() const
	{
		return this->date;
	}

	auto Transaction::GetCategory()
	{
		switch (category)
		{
		case TransactionCategory::CHEMISTRY: {return "CHEMISTRY"; break;}
		case TransactionCategory::GASOLINE: {return "GASOLINE"; break;}
		case TransactionCategory::HOMEPAY: {return "HOMEPAY"; break;}
		case TransactionCategory::PRODUCTS: {return "PRODUCTS"; break;}
		}

	}

	auto Transaction::GetType()
	{
		switch (type)
		{
		case TransactionType::INCOME: {return "INCOME"; break;}
		case TransactionType::OUT: {return "OUT"; break;}
		
		}

	}

	Transaction::Date Transaction::get_current_date()
	{
		std::time_t t = std::time(nullptr);
		std::tm* now = std::localtime(&t);

		Date d;
		d.year = now->tm_year + 1900;
		d.month = now->tm_mon + 1;
		d.day = now->tm_mday;
		return d;
	}
