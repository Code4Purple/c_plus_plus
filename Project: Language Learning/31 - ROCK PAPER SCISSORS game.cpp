#include <iostream>
#include <cctype> // required for std::tolower

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getUserChoice();
    std::cout << "player selected: ";
    showChoice(player); 
    computer = getComputerChoice();

    return 0;
}


char getUserChoice(){
    char player;
    std::cout << "********************************\n";
    std::cout << "    Rock-Paper-Scissors Game!   \n";
    std::cout << "********************************\n";
    do{
        std::cout << "| r - rock | ";
        std::cout << "p - paper | ";
        std::cout << "s - Scissors |\n";
        std::cout << "player selection: ";
        std::cin >> player;
        // Convert and update the variable
        player =  static_cast<char>(std::tolower(letter));
            
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice(){
    char computer;
    std::srand(time(nullptr));
    int pcSelect = (std::rand() % 3) + 1;
}

void showChoice(char choice){
    switch(choice){
        case 'r' : std::cout << "rock" << std::endl;
            break;
        case 's' : std::cout << "scissors" << std::endl;
            break;
        case 'p' : std::cout << "paper" << std::endl;
            break;
    }

}

void chooseWinner(char player, char computer){
    return 0;
}
