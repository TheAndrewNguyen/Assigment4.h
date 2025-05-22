//
// Created by andre on 5/22/2025.
//

#ifndef SHHH_H
#define SHHH_H
#include <set>
#include<string>

class Publication;
class Client;
class MediaContainer;

using namespace std;

class SHHH {

private:
  void display() const;
  void checkoutItem(const std::string& clientId, Publication* publication);
  void returnItem(const std::string, Publication* publication);
  void addClient(Client* client);
  void addMedia();
  void removeMedia();

private:
  MediaContainer * media;  // stores media Trees
  set<Client *> clients;  // stores clients
}

#endif //SHHH_H
