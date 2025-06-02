#include <iostream>
#include <conio.h>

int main() {
    char ch;
    std::cout << "Press any key (press 'q' to exit):\n";

    while ((ch = _getch()) != 'q') {
        std::cout << "You pressed: " << ch << " with ASCII code: " << static_cast<int>(ch) << std::endl;
    }

    return 0;
}
