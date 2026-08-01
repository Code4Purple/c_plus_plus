// Simple Classification Task Example

#include <iostream> 
 
class DesisionTree{
    public:
        std::string classify(const std::string &email_content){
            if(email_content.find("discount") != std::string::npos || email_content.find("buy now") != std::string::npos){
                return "spam";
            }
            return "not spam";
        }
};

int main(){
    DesisionTree dt;
    std::string email = "Hurry! Get a discount on your next purchase!";
    std::cout << "Email Classification: " << dt.classify(email) << std::endl;
    return 0;
}