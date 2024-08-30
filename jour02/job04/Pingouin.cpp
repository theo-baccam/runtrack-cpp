#include <iostream>

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include "Pingouin.hpp"


std::vector<std::shared_ptr<Pingouin>> Pingouin::colonie;

Pingouin::Pingouin() {
    this->vitesseMarche = 0.8;
    this->vitesseNage = 3;
    this->vitesseGlisse = 4;
    colonie.push_back(std::shared_ptr<Pingouin>(this));
}
Pingouin::Pingouin(const Pingouin &p) {
    this->vitesseMarche = p.vitesseMarche;
    this->vitesseNage = p.vitesseNage;
    this->vitesseGlisse = p.vitesseGlisse;
    colonie.push_back(std::shared_ptr<Pingouin>(this));
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

void Pingouin::parcoursPingouins() {
    int i = 0;
    for (std::shared_ptr<Pingouin> p : Pingouin::colonie) {
        double tempsPente = 15 / p->vitesseGlisse;
        double tempsPlat1 = 20 / p->vitesseMarche;
        double tempsNage = 50 / p->vitesseNage;
        double tempsPlat2 = 15 / p->vitesseMarche;
        double total = tempsPente + tempsPlat1 + tempsNage + tempsPlat2;

        std::cout
            << "//////// " << i << " \\\\\\\\\\\\\\\\\n"
            << "Pente 15m: " << tempsPente << " secs\n"
            << "Marche 20m: " << tempsPlat1 << " secs\n"
            << "Nage 50m: " << tempsNage << " secs\n"
            << "Marche 15m: " << tempsPlat2 << " secs\n"
            << "Total: " << total << " secs\n"
            << '\n';

        i++;
    }
}