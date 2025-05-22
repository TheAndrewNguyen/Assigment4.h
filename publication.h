//
// Created by andre on 5/22/2025.
//

#ifndef PUBLICATION_H
#define PUBLICATION_H
#include<string>

#include "media.h"

class Client;
using namespace std;

/**
 * @class Publication
 * @brief Represents a specific type of media item stored in the library.
 *
 * Inherits from the Media base class. This class serves as an intermediate
 * or concrete type of media, such as books, periodicals, or fiction.
 * It stores a title and can be extended further.
 */
class Publication : Media {
public:
    Publication();          // constructor
    ~Publication() override; // destructor
    string getTitle();      // return title of as a string

private:
    string title;   // title of publication
};

#endif //PUBLICATION_H
