#pragma once
#include <string>

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

	Date get_current_date();

	
	 Transaction();


	Transaction(int ,  TransactionCategory , TransactionType );

	template <typename T>
	explicit Transaction(T) ;

	int GetAmount() const;


	auto GetDate() const;
	

	auto GetCategory();
	

	auto GetType();
	
};