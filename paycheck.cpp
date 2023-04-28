#include <iostream>

using namespace std;

double oneWeek;
double biWeekly;
double monthly;
double annual;

double weeklyIncome(double hourlyRate, int minHours)
{
	minHours = minHours / 2;
	oneWeek = hourlyRate * minHours;
	// printf("Weekly Income: %.2f", oneWeek);
	return oneWeek;
};

double biWeeklyIncome(double weekly)
{
	biWeekly = weekly * 2;
	return biWeekly;
};

double monthlyIncome(double biWeekly)
{
	monthly = biWeekly * 2;
	return monthly;
};
double annualIncome(double weekly)
{
	annual = weekly * 52;
	return annual; // one week * 52 weeks in a year = annual income
};

int main()
{
	// Command Line UI
	string userInput;
	double userInputx, userInputy;
	cout << "Which command would you like to use?" << endl;
	cin >> userInput;

	if (userInput == "help" || userInput == "--help")
	{
		cout << "help menu" << endl;
	};
	if (userInput == "paycheck")
	{
		cout << "What is your hourly rate?" << endl;
		cin >> userInputx;
		cout << "What is your baseline hours total for one paycheck?" << endl;
		cin >> userInputy;
		cout << endl;
		weeklyIncome(userInputx, userInputy);
		printf("Weekly Income:     %.2f \n", oneWeek);
		biWeeklyIncome(oneWeek);
		printf("Bi-Weekly Income:  %.2f\n", biWeekly);
		monthlyIncome(biWeekly);
		printf("Monthly Income:    %.2f\n", monthly);
		annualIncome(oneWeek);
		printf("Annual Income:     %.2f\n", annual);
	}

	return 0;
}
