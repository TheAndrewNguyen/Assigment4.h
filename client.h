//
// Created by andre on 5/22/2025.
//

#ifndef CLIENT_H
#define CLIENT_H

#include<string>
#include<set>

class Media;

using namespace std;
/**
 * @class Client
 * @brief Represents a library client who borrows and returns media items.
 *
 * This class holds client information and manages records of media that
 * have been checked out and historically borrowed. It supports tracking
 * a client's currently borrowed media as well as their borrowing history.
 */

class Client {
public:
    Client();                              // constructor
    ~Client();                             // destructor
    int getId() const;                     // returns client id
    void addToCheckedOut(Media*);          // adds media to currently checkedout
    void addToRecord(Media*);              // adds media to clients record
    Media* findInCheckedOut(Media*) const; // retreives item that is checkedout
    void displayHistory() const;           // print clients borrowing history

protected:
    int id;                         // unique client Id
    string firstName;               // clients first name
    string lastName;                // clients last name
    set<Media*> checkedOutMedia;    // items currently checked out to client
    set<Media*> clientRecord;       // all items client has checked out
};

#endif //CLIENT_H
