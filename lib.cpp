#include <iostream>
#include "lib.h"
bool car(char &a) {
    if (a >= 97 && a <= 122) {// minuscolo-> maiuscolo
        a=a-32;

        return true;
    }

    else if (a >= 65 && a <= 90) {//maiuscolo -> minuscolo
        a+=32;

        return true;
    }

    else return false;//numero
}
