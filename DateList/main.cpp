#include "stdafx.h"
#include <iostream>
#include <cmath>


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

	int valid{ 2 };

		std::cin >> year_1 >> c >> month_1 >> c >> day_1 >> year_2 >> c >> month_2 >> c >> day_2;

		if (month_1 > month_ceil || month_2 > month_ceil || year_1 > ceil_year
			|| year_1 < floor_year || year_2 > ceil_year || year_2 < floor_year)
		{
			valid = 3;
		}

		else if ((month_1 == 1, 3, 5, 7, 8, 10, 12) || (month_2 == 1, 3, 5, 7, 8, 10, 12))
		{
			if ((day_1 <= 0 || day_1 > ceil_days31) || (day_2 <= 0 || day_2 > ceil_days31))
			{
				valid = 3;
			}
		}

		else if ((month_1 == 4, 6, 9, 11) || (month_2 == 4, 6, 9, 11))
		{
			if ((day_1 <= 0 || day_1 > ceil_days30) || (day_2 <= 0 || day_2 > ceil_days30))
			{
				valid = 3;
			}
		}

		else if ((month_1 == 2) || (month_2 == 2))
		{
			if (year_1 % 4 == 0 || year_2 % 4 == 0)
			{
				if (day_1 > 29 || day_2 > 29)
				{
					valid = 3;
				}
			}
			else if (day_1 > 28 || day_2 > 28)
				{
					valid = 3;
				}			
		}

		if (valid == 3)
		{
			std::cout << "Date is incorrect. Try another date." << std::endl;
		}
		else
		{
			while (year_1 <= year_2)
			{
				if (year_1 == year_2)
				{
					while (month_1 < month_2)
					{
						if (month_1 == month_2)
						{
							while (day_1 < day_2)
							{
								std::cout << year_1 << "-" << month_1 << "-" << day_1 << std::endl;
								++day_1;
							}
						}
						if ((month_1 == 1, 3, 5, 7, 8, 10, 12) && month_1 != month_2)
						{
							while (day_1 < 31)
							{
								std::cout << year_1 << "-" << month_1 << "-" << day_1 << std::endl;
								++day_1;
							}
						}
						if ((month_1 == 4, 6, 9, 11) && month_1 != month_2)
						{
							while (day_1 < 30)
							{
								std::cout << year_1 << "-" << month_1 << "-" << day_1 << std::endl;
								++day_1;
							}
						}
						if ((month_1 == 2) && month_1 != month_2)
						{
							if ((year_1 % 4) == 0)
							{
								while (day_1 < 29)
								{
									std::cout << year_1 << "-" << month_1 << "-" << day_1 << std::endl;
									++day_1;
								}
							}
							else
							{
								while (day_1 < 28)
								{
									std::cout << year_1 << "-" << month_1 << "-" << day_1 << std::endl;
								}
							}
						}

						++month_1;

						if ((month_1 % 12) == 0)
						{
							month_1 = 1;
						}
						if (month_1 == 1, 3, 5, 7, 8, 10, 12)
						{
							if ((day_1 % 31) == 0)
							{
								day_1 = 1;
							}
						}
						if (month_1 == 4, 6, 9, 11)
						{
							if ((day_1 % 30) == 0)
							{
								day_1 = 1;
							}
						}
						if (month_1 == 2)
						{
							if ((year_1 % 4) == 0)
							{
								if ((day_1 % 29) == 0)
								{
									day_1 = 0;
								}
							}
							else
							{
								if ((day_1 % 28) == 0)
								{
									day_1 = 0;
								}
							}
						}
					}
				}
				if (year_1 < year_2)
				{
					while (month_1 <= 12)
					{
						if (month_1 == month_2)
						{
							while (day_1 < day_2)
							{
								std::cout << year_1 << "-" << month_1 << "-" << day_1 << std::endl;
								++day_1;
							}
						}
						if ((month_1 == 1, 3, 5, 7, 8, 10, 12) && month_1 != month_2)
						{
							while (day_1 <= 30)
							{
								std::cout << year_1 << "-" << month_1 << "-" << day_1 << std::endl;
								++day_1;
							}
						}
						if ((month_1 == 4, 6, 9, 11) && month_1 != month_2)
						{
							while (day_1 <= 29)
							{
								std::cout << year_1 << "-" << month_1 << "-" << day_1 << std::endl;
								++day_1;
							}
						}
						if ((month_1 == 2) && month_1 != month_2)
						{
							if ((year_1 % 4) == 0 || (year_2 % 4) == 0)
							{
								while (day_1 <= 28)
								{
									std::cout << year_1 << "-" << month_1 << "-" << day_1 << std::endl;
									++day_1;
								}
							}
							else
							{
								while (day_1 <= 27)
								{
									std::cout << year_1 << "-" << month_1 << "-" << day_1 << std::endl;
								}
							}
						}

						++month_1;

						if (month_1 == 1, 3, 5, 7, 8, 10, 12)
						{
							if ((day_1 % 31) == 0)
							{
								day_1 = 1;
							}
						}
						if (month_1 == 4, 6, 9, 11)
						{
							if ((day_1 % 30) == 0)
							{
								day_1 = 1;
							}
						}
						if (month_1 == 2)
						{
							if ((year_1 % 4) == 0)
							{
								if ((day_1 % 29) == 0)
								{
									day_1 = 0;
								}
							}
							else
							{
								if ((day_1 % 28) == 0)
								{
									day_1 = 0;
								}
							}
						}
					}
				}

				month_1 = 1;
				++year_1;
			}
		}


    return 0;
}

