//
// Created by andre on 5/22/2025.
//

#ifndef PERIODICAL_H
#define PERIODICAL_H
#include "publication.h"

/**
 * @class Periodical
 * @brief Represents a periodical publication (e.g., magazine, journal).
 *
 * Inherits from the Publication class and adds time-specific information
 * such as the year and month of publication.
 */
class Periodical: public Publication {
public:
    Periodical();           // constructor
    ~Periodical() override; // destructor
    int getYear();          // returns year published as string
    int getMonth();         // returns month published as string
private:
    int year;               // year periodical was published
    int month;              // month periodical was publiished
};

#endif //PERIODICAL_H
