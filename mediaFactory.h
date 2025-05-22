//
// Created by andre on 5/22/2025.
//

#ifndef MEDIAFACTORY_H
#define MEDIAFACTORY_H
#ifndef MEDIA_FACTORY_H
#define MEDIA_FACTORY_H

#include <string>
class Media;

// Add any other media headers here

using namespace std;

class MediaFactory {
public:
    MediaFactory();                               // default constructor
    Media* createMedia() const = 0; //
};

#endif // MEDIA_FACTORY_H

#endif //MEDIAFACTORY_H
