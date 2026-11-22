#include "Dialogue.h"
#include <iostream>
#include <windows.h>

void openingDialogue(const std::string& answer) {
    std::string teks = "Would everything will be okay? \n";
    for (char c : teks) {
        std::cout << c;
        Sleep(100);
    }
    if (answer == "no") {
        std::string acceptance = "..... i see, i doesn't anticipate you say no...";
        for (char c : acceptance) {
            std::cout << c;
            Sleep(100);
        }
    }
}
