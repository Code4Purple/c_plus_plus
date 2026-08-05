#include <iostream>

class SimpleAgent {
    public:
        SimpleAgent() {
            srand(time(0));
        }
        int act(){
            //s Simple Decision-Making: 50% chance for action A or B
            return rand() % 2; // Returns 1 or 0
        }

        void learn(int action, int reward) {
            // Learning could be more complex; we'll just out for now
            std::cout << "Action: " << action << ", Reward: " << reward << "\n";
        }
};

int main(){
    SimpleAgent agent;
    for (int i = 0; i < 10; i++){
        int action = agent.act();
        int reward = (action == 0) ? 1 : 0; // Action 0 is rewarded 
        agent.learn(action, reward);
    }

    return 0;
}