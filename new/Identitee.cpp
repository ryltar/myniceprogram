#include <utility>
#include <iostream>
#include <assert.h>

#include "Identitee.h"
#include "Helper.h"

std::string Identitee::toString() {
    std::string retour = "Identitee : " + this->nom + " " + this->prenom;
    if (this->age != 0) {
        return retour + " " + std::to_string(this->age);
    }
    return retour;
}

std::string Identitee::toString(bool printNumber) {
    if (!printNumber){
        return this->toString();
    }
    auto *helper = new Helper;
    std::string number = helper->formatNumber(this->phoneNumber);
    delete(helper);
    return this->toString() + " " + helper->formatNumber(this->phoneNumber);
}

Identitee::Identitee(const std::string nom, const std::string prenom) {
    this->prenom = prenom;
    this->nom = nom;
}

Identitee::Identitee(const std::string nom, const std::string prenom, int age) : Identitee::Identitee(nom,prenom)  {
    this->age = age;
}

void Identitee::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = std::move(phoneNumber);
}