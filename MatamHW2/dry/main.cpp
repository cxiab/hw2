#include <iostream>
#include "Pirate.h"
#include <cstring>

using std::cout;
using std::endl;


int main() {

    Pirate luffy("Luffy");
    Pirate zoro("Zoro");

    const int crewSize = 2;
    
    Pirate strawHatCrew[2] = {Pirate("Luffy"), Pirate("Zoro")};

    
    cout << "Straw Hat crew contains:" << endl;
    for (int i = 0; i < crewSize; i++) {
        cout << strawHatCrew[i] << endl;
    }

    return 0;
}