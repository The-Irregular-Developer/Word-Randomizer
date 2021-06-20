#include <iostream>
#include <random>
#include <vector>
#include <string>


int main() {
    std::string data;

    std::cout << "What word would you like to randomly mix up: ";
    std::getline(std::cin, data);
    std::cout << std::endl << std::endl;

    std::vector <char> dataWord(data.begin(), data.end());
    std::random_device rd;
    for (int i = 0; i < data.size(); i++) {
        std::mt19937 mt(rd());
        std::uniform_int_distribution<int> uid(0, dataWord.size()-1);
        int random = uid(mt);
        std::cout << dataWord[random];
        dataWord.erase(dataWord.begin() + random);
    }
    std::cout << std::endl << std::endl;
    std::cout << "Press any key to continue...";
    std::cin.get();
    return 0;
}
