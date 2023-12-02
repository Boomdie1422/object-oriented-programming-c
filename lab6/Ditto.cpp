#include <iostream>
#include <stdio.h>
#include "Ditto.h"

/**
 * @brief Construct a new Charmander:: Charmander object
 * 
 */
Ditto::Ditto() : Pokemon() {
    type.push_back("Normal");
    skills.push_back("Limber");
    skills.push_back("Imposter");

    cout << "Default Constructor (Ditto)\n";
}

/**
 * @brief Construct a new Charmander:: Charmander object
 * 
 * @param name 
 * @param hp 
 * @param att 
 * @param def 
 * @param t 
 */
Ditto::Ditto(string name, int hp, int att, int def, vector<string> t) : Pokemon(name, hp, att, def, t) {
    type.push_back("Normal");
    skills.push_back("Limber");
    skills.push_back("Imposter");

    cout << "Overloaded Default Constructor (Ditto)\n";
}

/**
 * @brief says what a Ditto says
 * 
 */
void Ditto::speak(){
    cout << "Ditto-Ditto\n";
}

/**
 * @brief calls printStats from the parent class (Pokemon) and appends the skills used for Charmander
 * 
 */
void Ditto::printStats(){
    Pokemon::printStats();
    cout << "Skills: ";
    for(int i = 0; i < skills.size(); i++){
        cout << skills[i] << "\t";
    }
    cout << endl;
}