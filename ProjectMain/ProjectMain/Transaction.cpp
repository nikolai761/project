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
		PRODUCTS
	};

private:

	int amount;
	string date;
	TransactionCategory category;
	TransactionType type;

public:

	Transaction()
	{
		amount = 0;
		date = " " ;
		category = TransactionCategory::NONE;
		type = TransactionType::NONE;
	}

	Transaction(int _amount, string _date, TransactionCategory _category, TransactionType _type)
	{
		amount = _amount;
		date = _date;
		category = _category;
		type = _type;
	}

	template <typename T>
	explicit Transaction(T a) {};

	int GetAmount() const
	{

	}
};