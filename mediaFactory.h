//
// Created by andre on 5/22/2025.
//

#ifndef MEDIAFACTORY_H
#define MEDIAFACTORY_H
#ifndef MEDIA_FACTORY_H
#define MEDIA_FACTORY_H

#include <string>
#include "media.h"
#include "publicationFactory.h"
#include "movieFactory.h"

// A factory that contains sub-factories for publications and movies. A character is passed and produces a hash which then
// determines which factory the hash needs to be passed into.

using namespace std;

class MediaFactory {
public:
    MediaFactory();                               // default constructor
    ~MediaFactory();
    Media* createMedia() const = 0; //
private:
publicationFactory pubFac;
movieFactory movFac;
int hash();
};

#endif // MEDIA_FACTORY_H

#endif //MEDIAFACTORY_H
