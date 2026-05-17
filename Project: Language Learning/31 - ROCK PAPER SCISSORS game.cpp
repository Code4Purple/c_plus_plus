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
        player =  static_cast<char>(std::tolower(player));
            
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getComputerChoice(){
    char computer;
    std::srand(time(nullptr));
    int pcSelect = (std::rand() % 3) + 1;
    
    switch(pcSelect){
        case 1: 
            computer = 'r';
            break;
        case 2: 
            computer = 'p';
            break;
        case 3: 
            computer = 's';
            break;
        default: std::cout << "ERROR: Computer pick FAILED" << std::endl;
            break;
    }

    return computer;
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
    if(player == computer){
        std::cout << "Both of you TIED!" << std::endl;
    }
    else if(player == 'r' && computer == 's' || computer == 'r' && player == 's'){
        std::cout << "Rock beats Scissors" << std::endl;
        if(computer == 'r'){
            std::cout << "Computer Wins!" << std::endl;
        }
        else{
            std::cout << "Player Wins!" << std::endl;
        }
        
    }
}