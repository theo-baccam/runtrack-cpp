#include <iostream>

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include "Pingouin.hpp"


Pingouin::Pingouin() {
    this->vitesseMarche = 0.8;
    this->vitesseNage = 3;
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
