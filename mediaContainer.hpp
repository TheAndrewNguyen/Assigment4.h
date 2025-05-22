//
// Created by andre on 5/22/2025.
//

#ifndef MEDIACONTAINER_HPP
#define MEDIACONTAINER_HPP
#include <map>
#include <string>

class Media;
class MediaTree;

using namespace std;

/**
 * @class MediaContainer
 * @brief A container that manages different types of MediaTree structures.
 *
 * This class holds a map of media category keys (e.g., "Fiction", "Periodical")
 * to their corresponding MediaTree instances. It provides methods to insert,
 * remove, and find Media objects within their respective trees.
 */

class MediaContainer {
public:
    bool insert(string key, Media *);  // insert media to specific tree
    bool remove(string key, Media * ); // remove media from specific tree
    Media* find(string key, string title) const;// find media from specific tree
private:
    map<string, MediaTree*> mediaTrees;    // map that stores all the mediaTrees
};
#endif //MEDIACONTAINER_HPP
