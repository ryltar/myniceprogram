#include <utility>
#include <iostream>
#include <assert.h>

#include "Identitee.h"
#include "Helper.h"

std::string Identitee::toString() {
    std::string * retour = new std::string("Identitee : " + this->nom + " " + this->prenom);
    if (this->age != 0) {
        return retour + " " + (char) this->age;
    }
    return retour;
}

std::string Identitee::toString(bool printNumber = false) {
    if (printNumber == false){
        return toString();
    }
    Helper helper = new Helper;
    return std::string("Identitee : " + this->prenom + " " + this->nom + " " + helper.formatNumber("yoyoyo"));
}

Identitee::Identitee(const std::string nom, const std::string prenom) {
    this->prenom = prenom;
    this->nom = nom;
}

Identitee::Identitee(const std::string nom, const std::string prenom, int age) {
    Identitee identitee(nom, prenom);
    this->age = age;
}

void Identitee::setPhoneNumber(std::string phoneNumber) {
    this->phoneNumber = std::move(phoneNumber);
}