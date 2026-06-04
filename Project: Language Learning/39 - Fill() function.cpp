#include <iostream>

int main(){

    /*
        fill() = Fills a range of elements with a specified value
                    fill(begin, end, value)
    */

    const int size = 600;
    std::string drinks[size];

    fill(drinks, drinks + (size/3), "Pespi");
    fill(drinks + (size/3), drinks + (size/3)*2, "Mountain Dew");
    fill(drinks + (size/3)*2, drinks + size, "Starry");

    int i = 0;
    for(std::string drink : drinks){
        i++;
        std::cout << i << ". "<< drink << "\n";
        
    }


    return 0;
}