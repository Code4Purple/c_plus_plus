#include <iostream>

using namespace std;

double oneWeek;
double biWeekly;

double weeklyIncome(double hourlyRate, int minHours)
{

	oneWeek = hourlyRate * minHours;
	// printf("Weekly Income: %.2f", oneWeek);
	return oneWeek;
};

double biWeeklyIncome(double weekly)
{
	biWeekly = weekly * 2;
	return biWeekly;
};
void annualIncome(double weekly)
{
	double annual;
	annual = weekly * 52;
	printf("Annual Income: %.2f\n", annual); // one week * 52 weeks in a year = annual income
};

int main()
{
	weeklyIncome(18.45, 80);
	printf("Weekly Income: %.2f \n", oneWeek);
	biWeeklyIncome(oneWeek);
	printf("Bi-Weekly Income: %.2f\n", biWeekly);
	return 0;
}
