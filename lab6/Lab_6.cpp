/***
 * CSE 2010 Fall 2023
 * Lab #{6}
 * {dan nguyen} #{007736788}
 * {Date}
 *
 * {Using a uml format with constroctors, vectors, and linking files to eachother, we created a pokemon charmander}
 *
 * {Describe 1) the most challangeing part of the code was trying to link my pokemon into it
 *  and 2) i solved this my using // to block the charmander portion and created my own .h and .cpp files for my own pokemon
 *
***/

#include <iostream>
//#include "Charmander.h"
#include "Ditto.h"
using namespace std;

int main()
{  
    // create POKEMON type vector;
    vector<string> pokemonType;
    //pokemonType.push_back("Fire");
    pokemonType.push_back("Normal");

    cout << "-------Constructor Created---------\n";
    //Charmander charlie = Charmander("Charlie", 100, 4, 4, pokemonType);
    Ditto dit = Ditto("dit", 48, 48, 48, pokemonType);

    // Charmander
    cout << "\n-------Direct Speak---------\n";
    //charlie.speak();
    dit.speak();
    
    // Pokemon pointer to Charmander
    //Pokemon * p1 = &charlie ;
    Pokemon * p2 = &dit ;
    cout << "\n------- Speak called from Pokemon Pointer---------\n";
    //(*p1).speak();
    (*p2).speak();

    // Charmander pointer to Charmander
    //Charmander * c1 = &charlie ;
    //cout << "\n------- Speak called from Charmander Pointer---------\n";
    //(*c1).speak();

    cout << "\n------- Speak called from Ditto Pointer---------\n";
    Ditto * c2 = &dit ;
    (*c2).speak();

    // Charmander
    //cout << "\n------- Print Stats---------\n";
    //charlie.printStats();
    cout << "\n------- Print Stats---------\n";
    dit.printStats();
}

