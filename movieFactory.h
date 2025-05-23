//
// Created by andre on 5/22/2025.
//
// A factory for creating movie objects. The factory will contain a hash table of Movie types.
// Object receives a character and returns a hash. The hash is then used in the array to return a type of movie (to be implemented later
// by the user)
// Assumptions:
// * A valid character is passed into the create function.
// * All numeric characters are ignored

#ifndef MOVIEFACTORY_H
#define MOVIEFACTORY_H
#include "Media.h"

class movieFactory {
private:
Movie* movList[5];
int hash();
public:
movieFactory();
~movieFactory();
Movie* create();
}

#endif //MOVIEFACTORY_H
