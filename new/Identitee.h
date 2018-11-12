//
// Created by vsilvestre on 31/10/18.
//

#ifndef MYNICEPROGRAM_IDENTITEE_H
#define MYNICEPROGRAM_IDENTITEE_H


#include <string>

class Identitee {
public:
    std::string toString();
    std::string toString(bool withNumber);
    Identitee(std::string nom, std::string prenom, int age);
    Identitee(std::string nom, std::string prenom);
    void setPhoneNumber(std::string phoneNumber);
private:
    std::string nom, prenom;
    int age = 0;
    std::string phoneNumber;
};
#endif //MYNICEPROGRAM_IDENTITEE_H
