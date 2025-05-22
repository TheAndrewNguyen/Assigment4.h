//
// Created by andre on 5/22/2025.
//

#ifndef FICTION_H
#define FICTION_H
// Fiction.h
#include<string>
#include "publication.h"

using namespace std;

/**
 * @class Fiction
 * @brief Represents a fiction publication,
 *  derived from the Publication base class.
 *
 * This class is intended to model fiction books or media with an
 *   associated author.
 */
class Fiction : public Publication {
public:
    Fiction();              // constructor
    ~Fiction() override;    // destructor
    string getAuthor();     // returns author
private:
    string author;          // author of publication
};

#endif //FICTION_H
