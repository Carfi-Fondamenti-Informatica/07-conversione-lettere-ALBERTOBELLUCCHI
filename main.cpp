#include <iostream>
#include "lib.h"
using namespace std;

bool car(char &a);

int main() {
    char val;
    cin>>val;

    if (car(val)) cout<<(char)val;
    else cout<<"errore";

    return 0;
}
