#include "Randomizer.h"
#include <cstdlib>
#include <iostream>

void randomizeCharacteristics(std::string& angry, std::string& disappointment, std::string& joy, std::string& sad, std::string& shock) {
    srand(time(NULL));
    int random = rand() % 5 + 1;
    switch (random) {
        case 1:
            angry = "angry";
            break;
        case 2:
            disappointment = "disappointment";
            break;
        case 3:
            joy = "joy";
            break;
        case 4:
            sad = "sad";
            break;
        case 5:
            shock = "shock";
            break;
        default:
            std::cout << "Huh?";
            break;
    }
}

void Typical(const std::string& angry, const std::string& disappointment, const std::string& joy, const std::string& sad, const std::string& shock) {
    if (angry == "angry") {
        std::cout << "Careful on your choice now, the person in front of you have high temperament.\n";
    } else if (disappointment == "disappointment") {
        std::cout << "The person in front of you can't accept harsh truth, but the choice is still on your hand.\n";
    } else if (joy == "joy") {
        std::cout << "Seems like the person in front of you are in good mood.\n";
    } else if (sad == "sad") {
        std::cout << "This person is kinda... have soft heart.\n";
    } else if (shock == "shock") {
        std::cout << "Careful now, this person is kinda have short heart attack.\n";
    }
}
