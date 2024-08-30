#include <iostream>

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include "Pingouin.hpp"


Pingouin::Pingouin() {
    this->vitesseMarche = 0.8;
    this->vitesseNage = 3;
    this->vitesseGlisse = 4;
}
Pingouin::Pingouin(const Pingouin &p) {
    this->vitesseMarche = p.vitesseMarche;
    this->vitesseNage = p.vitesseNage;
    this->vitesseGlisse = p.vitesseGlisse;
}
Pingouin::~Pingouin() {}

void Pingouin::marche(){
    std::cout << "Je marche a " << this->vitesseMarche << " m/s\n";
}
void Pingouin::nage() {
    std::cout << "Je nage a " << this->vitesseNage << " m/s\n";
}
void Pingouin::presenter() {
    std::cout << "Bonjour!\n";
}

void Pingouin::setVitesseMarche(double vitesseMarche) {
    this->vitesseMarche = vitesseMarche;
}
void Pingouin::setVitesseNage(double vitesseNage) {
    this->vitesseNage = vitesseNage;
}
void Pingouin::setVitesseGlisse(double vitesseGlisse) {
    this->vitesseGlisse = vitesseGlisse;
}