#include <string>
#include <ctime>
#include <chrono>
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

	struct Time
	{
		int hours;
		int minutes;
	};

	struct Date
	{
		int day;
		int month;
		int year;
		Time time;
	};

	Date get_current_date() {
		std::time_t t = std::time(nullptr);
		std::tm* now = std::localtime(&t);

		Date d;
		d.year = now->tm_year + 1900;
		d.month = now->tm_mon + 1;
		d.day = now->tm_mday;
		return d;
	}

private:

	int amount;
	Date date;
	TransactionCategory category;
	TransactionType type;

public:

	Transaction()
	{
		amount = 0;
	    date = get_current_date();
		category = TransactionCategory::NONE;
		type = TransactionType::NONE;

	}

	Transaction(int _amount,  TransactionCategory _category, TransactionType _type)
	{
		amount = _amount;
		date = get_current_date();
		category = _category;
		type = _type;
	}

	template <typename T>
	explicit Transaction(T a) {};

	int GetAmount() const
	{
		return this->amount;
	}

	auto GetDate() const
	{
		return this->date;
	}

	auto GetCategory()
	{
		switch (category)
		{
		case TransactionCategory::CHEMISTRY: {return "CHEMISTRY"; break;}
		case TransactionCategory::GASOLINE: {return "GASOLINE"; break;}
		case TransactionCategory::HOMEPAY: {return "HOMEPAY"; break;}
		case TransactionCategory::PRODUCTS: {return "PRODUCTS"; break;}
		}

	}

	auto GetType()
	{
		switch (type)
		{
		case TransactionType::INCOME: {return "INCOME"; break;}
		case TransactionType::OUT: {return "OUT"; break;}
		
		}

	}
};