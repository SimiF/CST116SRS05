#include "stdafx.h"
#include <iostream>


int main()
{
	int year_1{};
	int month_1{};
	int day_1{};

	int year_2{};
	int month_2{};
	int day_2{};

	char c{};

	const int floor_year{ 1901 };
	const int ceil_year{ 2099 };
	const int month_ceil{ 12 };

	const int ceil_days31{ 31 };
	const int ceil_days30{ 30 };
	const int ceil_days28{ 28 };
	const int ceil_days29{ 29 };

	std::cin >> year_1 >> c >> month_1 >> c >> day_1 >> year_2 >> c >> month_2 >> c >> day_2;

	if (month_1 > month_ceil || month_2 > month_ceil || year_1 > ceil_year
		|| year_1 < floor_year || year_2 > ceil_year || year_2 < floor_year)
	{
		std::cout << "Date is incorrect. Try another date." << std::endl;
	}
	else if ((month_1 = 1, 3, 5, 7, 8, 10, 12) || (month_2 = 1, 3, 5, 7, 8, 10, 12))
	{
		if ((day_1 <= 0 || day_1 > ceil_days31) || (day_2 <= 0 || day_2 > ceil_days31))
		{
			std::cout << "Date is incorrect. Try another date." << std::endl;
		}
	}
	else if ((month_1 = 4, 6, 9, 11) || (month_2 = 4, 6, 9, 11))
	{
		if ((day_1 <= 0 || day_1 > ceil_days30) || (day_2 <= 0 || day_2 > ceil_days30))
		{
			std::cout << "Date is incorrect. Try another date." << std::endl;
		}
	}
	else if ((month_1 = 2) || (month_2 = 2))
	{
		// Do if statements to check if month 2 is in a leap year or not
	}

    return 0;
}

