#include <iostream>

double weekly_amount(double hourly_rate);
double bi_weekly_amount(double weekly_amount);
double annual_amount(double weekly_amount);

double hourly_rate;

void result_of_data();

int main(){
    std::cout << "What is the cuurent hourly rate?" << std::endl;
    std::cin >> hourly_rate;

    //std::cout << "What would you like to know? " << std::endl;
    //options_for_user_input();
    //std::cout << "Input: ";
    //std::cin >> userInput;

    result_of_data();
}

double weekly_amount(double hourly_rate){
    return hourly_rate * 40; // One full week in a full time job is 40 hours
};

double bi_weekly_amount(double weekly_amount){
    return weekly_amount * 2; // 40 x2 is 80 hours for 2 weeks worth of
};

double annual_amount(double weekly_amount){
    return weekly_amount * 52; // one week times 52 weeks in a year
};


void result_of_data(){
    std::cout << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;
    std::cout << "| ** Disclaimer: Taxes are not included with the estimated income ** |" << std::endl;
    std::cout << "----------------------------------------------------------------------" << std::endl;
    printf("     Hourly Rate    : %.2f\n", hourly_rate);
    printf("     Weelky Rate    : %.2f\n", weekly_amount(hourly_rate));
    printf("     Bi-Weekly Rate : %.2f\n", bi_weekly_amount(weekly_amount(hourly_rate)));
    printf("     Annual Rate    : %.2f\n", annual_amount(weekly_amount(hourly_rate)));
};