//
// Created by andre on 5/22/2025.
// A factory for creating publication objects. The factory will contain a hash table of Publication types.
// Object receives a character and returns a hash. The hash is then used in the array to return either a Periodical,
// Childrens, or Fiction publication.
// Assumptions:
// * A valid character is passed into the create function.
// * All numeric characters are ignored

#ifndef PUBLICATIONFACTORY_H
#define PUBLICATIONFACTORY_H
class PublicationFactory {
private:
Publication* pubList[5];
int hash();

public:
PublicationFactory();
~PublicationFactory();
Publication* create();

}
#endif //PUBLICATIONFACTORY_H
