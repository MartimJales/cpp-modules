#include "../inc/Harl.hpp"

int main() {
    Harl harl;
    harl.complain("debug");
    harl.complain("info");
    harl.complain("error");
    harl.complain("warning");

    return 0;
}
