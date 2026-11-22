#include <iostream>
#include "Dialogue/Dialogue.h"
#include "Randomizer/Randomizer.h"

int main() {
    component comp;
    angry angry;
    disappointment disappointment;
    joy joy;
    sad sad;
    shock shock;
    openingDialogue(comp.answer);
    randomizeCharacteristics(angry.indication, disappointment.indication, joy.indication, sad.indication, shock.indication);
    Typical(angry.indication, disappointment.indication, joy.indication, sad.indication, shock.indication);
    return 0;
}