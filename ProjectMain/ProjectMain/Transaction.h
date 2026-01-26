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

private:

	int amount;
	string date;
	TransactionCategory category;
	TransactionType type;

public:

	Transaction();


	Transaction(int , string , TransactionCategory , TransactionType );

	template <typename T>
	explicit Transaction(T) ;

	int GetAmount() const;


	auto GetDate() const;
	

	auto GetCategory();
	

	auto GetType();
	
};