//
// Created by andre on 5/22/2025.
//

#ifndef CHILDREN_H
#define CHILDREN_H
#include<string>
#include "publication.h"

/**
 * @class Children
 * @brief Represents a children's book, derived from the Publication class.
 *
 * This class models a specific type of publication intended for children.
 * It adds a field for the author's name, and provides a method to access it.
 */
using namespace std;
class Children : public Publication {
public:
    Children();             // default constructor
    ~Children() override;   // destructor
    string getAuthor();     // returns authors name as a string
private:
    string author;          // name of author for childrens book
};

#endif //CHILDREN_H
