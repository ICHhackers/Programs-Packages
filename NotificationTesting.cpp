#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    std::string name;

    std::cout << "Enter site name or ip: ";
    std::cin >> name;

    if (name.empty()) {
        std::cout << "You need to enter a site's name!" << '\n';
        return 1;
    }

    std::string command = "ping -n 1000000" + name + " -p 80";

    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "Ping completed successfully." << '\n';
        system("pause");
    }
    else {
        std::cout << "Ping failed." << '\n';
        system("pause");
    }

    return 0;
}
