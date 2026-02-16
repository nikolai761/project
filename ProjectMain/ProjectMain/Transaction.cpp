#include "Transaction.h"

	Transaction::Transaction()
	{
		amount = 0;
	    date = get_current_date();
		category = TransactionCategory::NONE;
		type = TransactionType::NONE;

	}

	Transaction::Transaction(int _amount,  int _category, int _type) : 
		amount (_amount),
		date (get_current_date()),
		category  (static_cast<Transaction::TransactionCategory>(_category)),
		type (static_cast<Transaction::TransactionType>(_type))
	{
	}

	Transaction::Transaction(int _amount, int _category, int _type, Transaction::Date _date) :
		amount(_amount),
		date(_date),
		category(static_cast<Transaction::TransactionCategory>(_category)),
		type(static_cast<Transaction::TransactionType>(_type))
	{
	}

	int Transaction::GetAmount() const
	{
		return this->amount;
	}

	std::string Transaction::GetDay() const
	{
		return std::to_string(this ->date.day);
	}

	std::string Transaction::GetMonth() const
	{
		return std::to_string(this->date.month);
	}

	std::string Transaction::GetYear() const
	{
		return std::to_string(this->date.year);
	}

	

	std::string Transaction::GetCategory() const
	{
		switch (category)
		{
		case TransactionCategory::CHEMISTRY: {return "CHEMISTRY";}
		case TransactionCategory::GASOLINE: {return "GASOLINE";}
		case TransactionCategory::HOMEPAY: {return "HOMEPAY";}
		case TransactionCategory::PRODUCTS: {return "PRODUCTS";}
		}

	}

	std::string Transaction::GetType() const
	{
		switch (type)
		{
		case TransactionType::INCOME: {return "INCOME";}
		case TransactionType::OUT: {return "OUT";}
		
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
