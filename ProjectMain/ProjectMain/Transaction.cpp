#include <string>
using std::string;


class Transaction
{
public:

	enum class TransactionType
	{
		NONE,
		INCOME,
		OUT
	};
	enum class TransactionCategory
	{
		NONE,
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
		category = TransactionCategory::CHEMISTRY;
		type = TransactionType::OUT;

	}
};