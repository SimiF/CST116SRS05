#include "stdafx.h"
#include <iostream>
#include <iomanip>

int main()
{
	int year_1{};
	int month_1{};
	int day_1{};

	int year_2{};
	int month_2{};
	int day_2{};

	int day_ceil{};

	char a{};
	char b{};
	char c{};
	char d{};

	int valid_1{};

	const int JAN{ 1 };
	const int FEB{ 2 };
	const int MAR{ 3 };
	const int APR{ 4 };
	const int MAY{ 5 };
	const int JUN{ 6 };
	const int JUL{ 7 };
	const int AUG{ 8 };
	const int SEP{ 9 };
	const int OCT{ 10 };
	const int NOV{ 11 };
	const int DEC{ 12 };

	std::cin >> year_1 >> a >> month_1 >> b >> day_1 >> year_2 >> c >> month_2 >> d >> day_2;

	if ((month_1 > 12) || (month_1 <= 0) || (year_1 > 2099) || (year_1 < 1901))
	{
		valid_1 = 3;
	}

	if ((month_2 > 12) || (month_2 <= 0) || (year_2 > 2099) || (year_2 < 1901))
	{
		valid_1 = 3;
	}

	if (a != '-' || b != '-' || c != '-' || d != '-')
	{
		valid_1 = 3;
	}

	switch (month_1)
	{
	case JAN:
	case MAR:
	case MAY:
	case JUL:
	case AUG:
	case OCT:
	case DEC:
		if (day_1 <= 0 || day_1 > 31)
		{
			valid_1 = 3;
		}
		break;
	case APR:
	case JUN:
	case SEP:
	case NOV:
		if (day_1 <= 0 || day_1 > 30)
		{
			valid_1 = 3;
		}
		break;
	case FEB:
		year_1 % 4 == 0 ? (day_1 > 29 ? valid_1 = 3 : valid_1) : day_1 > 28 ? valid_1 = 3 : valid_1;
		break;
	default:
		valid_1 = 3;
		break;
	}

	switch (month_2)
	{
	case JAN:
	case MAR:
	case MAY:
	case JUL:
	case AUG:
	case OCT:
	case DEC:
		if (day_2 <= 0 || day_2 > 31)
		{
			valid_1 = 3;
		}
		break;
	case APR:
	case JUN:
	case SEP:
	case NOV:
		if (day_2 <= 0 || day_2 > 30)
		{
			valid_1 = 3;
		}
		break;
	case FEB:
		year_2 % 4 == 0 ? (day_2 > 29 ? valid_1 = 3 : valid_1 = 2) : day_2 > 28 ? valid_1 = 3 : valid_1 = 2;
		break;
	default:
		valid_1 = 3;
		break;
	}

	if (valid_1 == 3)
	{
		return 0;
	}

	const int holder_year_1 = year_1;
	const int holder_month_1 = month_1;
	const int holder_day_1 = day_1;

	const int holder_year_2 = year_2;
	const int holder_month_2 = month_2;
	const int holder_day_2 = day_2;


	if (year_1 > year_2)
	{
		year_1 = holder_year_2;
		year_2 = holder_year_1;

		month_1 = holder_month_2;
		month_2 = holder_month_1;

		day_1 = holder_day_2;
		day_2 = holder_day_1;
	}
	else if (month_1 > month_2 && year_1 == year_2)
	{
		month_1 = holder_month_2;
		month_2 = holder_month_1;

		day_1 = holder_day_2;
		day_2 = holder_day_1;
	}
	else if (day_1 > day_2 && month_1 == month_2 && year_1 == year_2)
	{
		day_1 = holder_day_2;
		day_2 = holder_day_1;
	}

	while (year_1 <= year_2)
	{
		if (year_1 == year_2)
		{
			while (month_1 < month_2)
			{
				switch (month_1)
				{
				case JAN:
				case MAR:
				case MAY:
				case JUL:
				case AUG:
				case OCT:
				case DEC:
				{
					day_ceil = 31;
				}
				break;
				case APR:
				case JUN:
				case SEP:
				case NOV:
				{
					day_ceil = 30;
				}
				break;
				case FEB:
				{
					year_1 % 4 == 0 ? day_ceil = 29 : day_ceil = 28;
				}
				break;
				default:
					break;
				}

				while (day_1 <= day_ceil)
				{
					std::cout << year_1 << "-" << std::setfill('0') << std::setw(2) << month_1 << "-" << std::setw(2) << day_1 << std::endl;
					++day_1;
				}

				day_1 = 1;
				++month_1;
			}

			if (month_1 == month_2)
			{
				while (day_1 < day_2)
				{
					std::cout << year_1 << "-" << std::setfill('0') << std::setw(2) << month_1 << "-" << std::setw(2) << day_1 << std::endl;
					++day_1;
				}
			}
		}
		if (year_1 < year_2)
		{
			while (month_1 <= 12)
			{
				switch (month_1)
				{
				case JAN:
				case MAR:
				case MAY:
				case JUL:
				case AUG:
				case OCT:
				case DEC:
				{
					day_ceil = 31;
				}
				break;
				case APR:
				case JUN:
				case SEP:
				case NOV:
				{
					day_ceil = 30;
				}
				break;
				case FEB:
				{
					year_1 % 4 == 0 ? day_ceil = 29 : day_ceil = 28;
				}
				break;
				default:
					break;
				}

				while (day_1 <= day_ceil)
				{
					std::cout << year_1 << "-" << std::setfill('0') << std::setw(2) << month_1 << "-" << std::setw(2) << day_1 << std::endl;
					++day_1;
				}

				day_1 = 1;
				++month_1;
			}
		}

		month_1 = 1;
		++year_1;
	}


	return 0;
}
