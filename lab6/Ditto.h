#ifndef DITTO_H
#define DITTO_H

#include <string>
#include <vector>
#include "Pokemon.h"
using namespace std;

class Ditto : public Pokemon{
    public:
        // --------------- Constructors --------------- 
        Ditto();
        Ditto(string name, int hp, int att, int def, vector<string> t);
        // --------------- Mutator Functions --------------- 
        void speak()/* override */; 
        void printStats()/*override*/;
    private:
        vector<string> skills;

};
#endif
