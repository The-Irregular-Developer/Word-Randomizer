#include <iostream>
#include <vector>
#include <ctime>
#include <string>


int main() {
    std::string data;

    std::cout << "What word would you like to randomly mix up: ";
    std::getline(std::cin, data);
    std::cout << std::endl << std::endl;

    std::vector <char> dataWord(data.begin(), data.end());
    srand(time(NULL));
    for (int i = 0; i < data.size(); i++) {
        int random = rand() % dataWord.size();
        std::cout << dataWord[random];
        dataWord.erase(dataWord.begin() + random);
    }
    std::cout << std::endl << std::endl;
    system("pause");
    return 0;
}
