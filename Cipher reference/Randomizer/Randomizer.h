#pragma once
#include <string>

struct angry {
    std::string indication;
    std::string emotion;
    std::string reaction;
};
struct disappointment {
    std::string indication;
    std::string emotion;
    std::string reaction;
};
struct joy {
    std::string indication;
    std::string emotion;
    std::string reaction;
};
struct sad {
    std::string indication;
    std::string emotion;
    std::string reaction;
};
struct shock {
    std::string indication;
    std::string emotion;
    std::string reaction;
};
void randomizeCharacteristics(std::string& angry, std::string& disappointment, std::string& joy, std::string& sad, std::string& shock);
void Typical(const std::string& angry, const std::string& disappointment, const std::string& joy, const std::string& sad, const std::string& shock);
#ifndef CIPHER_REFERENCE_RANDOMIZER_H
#define CIPHER_REFERENCE_RANDOMIZER_H

#endif //CIPHER_REFERENCE_RANDOMIZER_H
