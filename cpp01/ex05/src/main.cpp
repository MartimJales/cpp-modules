#include <iostream>
#include <string>
#include <map>

class Harl {
private:
    void debug() {
        std::cout << "Debug message." << std::endl;
    }

    void info() {
        std::cout << "Info message." << std::endl;
    }

    void warning() {
        std::cout << "Warning message." << std::endl;
    }

    void error() {
        std::cout << "Error message." << std::endl;
    }

    typedef void (Harl::*ptr)();

public:
    void complain(std::string level) {
        std::map<std::string, ptr> functions;
        functions.insert(std::make_pair("debug", &Harl::debug));
        functions.insert(std::make_pair("info", &Harl::info));
        functions.insert(std::make_pair("warning", &Harl::warning));
        functions.insert(std::make_pair("error", &Harl::error));

        (this->*(functions.find(level)->second))();
    }
};

int main() {
    Harl harl;
    harl.complain("debug");
    harl.complain("info");
    harl.complain("warning");
    harl.complain("error");

    return 0;
}
