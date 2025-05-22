//
// Created by andre on 5/22/2025.
//

#ifndef MEDIA_H
#define MEDIA_H

#include<string>
#include <utility>

class Client;

using namespace std;

/**
 * @class Media
 * @brief Abstract base class representing a media item that can
 * be borrowed by a client.
 *
 * This class serves as a base for various types of media (e.g., books, DVDs).
 * It includes basic metadata such as title and format, as well as a pointer
 * to the client who borrowed it.
 *
 * Derived classes must implement the display() method.
 */

class Media {
public:
    virtual void display() const = 0;   // pure virtual to display media info
    virtual ~Media() = default;     // abstract destructor

protected:

    // constructor
    explicit Media
        (
        std::string title = "",
        std::string format = "",
        Client* client = nullptr
        ) :
        title(std::move(title)),
        format(std::move(format)),
        clientThatBorrowed(client) {}

    string title;                   // title of media item
    string format;                  // format of media i.e. book
    Client* clientThatBorrowed;     // pointer to client that borrowed the media
};

#endif //MEDIA_H
