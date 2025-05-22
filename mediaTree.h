//
// Created by andre on 5/22/2025.
//

#ifndef MEDIATREE_H
#define MEDIATREE_H
#include <string>

class Media;

//struct represents a single node in a binary tree, where each node holds a
//pointer to a Media object and pointers to its left and right child nodes.
struct MediaNode {

    // default constructor
    MediaNode() :
    data(nullptr),
    left(nullptr),
    right(nullptr) {}

    // constructor
    explicit MediaNode(Media* media) :
    data(media),
    left(nullptr),
    right(nullptr) {}


    Media * data;       // address of media being stored
    MediaNode * left;   // pointer to left child
    MediaNode * right;  // pointer to right child
};

/**
 * @class MediaTree
 * @brief A binary tree structure for organizing Media objects.
 *
 * This class manages a tree of MediaNode elements, supporting operations
 * such as insertion, removal, and searching. It is intended for use in
 * collections such as MediaContainer for organizing media by category or type.
 */

class MediaTree {
    explicit MediaTree(MediaNode *); // constructor

    MediaNode * root; //

    bool insert(Media *); // insert media object into treee
    bool remove(Media *); // remove media object from tre
    Media * find(std::string title) const; // find media object in tree

};
#endif //MEDIATREE_H
