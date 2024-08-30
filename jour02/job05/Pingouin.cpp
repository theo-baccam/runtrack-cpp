#define DISTANCE_PENTE 15
#define DISTANCE_PLAT_1 20
#define DISTANCE_NAGE 50
#define DISTANCE_PLAT_2 15

#include <iostream>
#include <algorithm>
#include <functional>

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

double Pingouin::getTempsTotal() {
        double tempsPente = DISTANCE_PENTE / this->vitesseGlisse;
        double tempsPlat1 = DISTANCE_PLAT_1 / this->vitesseMarche;
        double tempsNage = DISTANCE_NAGE / this->vitesseNage;
        double tempsPlat2 = DISTANCE_PLAT_2 / this->vitesseMarche;
        return tempsPente + tempsPlat1 + tempsNage + tempsPlat2;
}

void Pingouin::parcoursPingouins() {
    int i = 0;
    for (std::shared_ptr<Pingouin> p : Pingouin::colonie) {
        double tempsPente = DISTANCE_PENTE / p->vitesseGlisse;
        double tempsPlat1 = DISTANCE_PLAT_1 / p->vitesseMarche;
        double tempsNage = DISTANCE_NAGE / p->vitesseNage;
        double tempsPlat2 = DISTANCE_PLAT_2 / p->vitesseMarche;
        double total = p->getTempsTotal();

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

void Pingouin::trierPingouins() {
    std::sort(
        Pingouin::colonie.begin(),
        Pingouin::colonie.end(),
        [](auto a, auto b) {
            return a->getTempsTotal() < b->getTempsTotal();
        }
    );
    /*
    pour imprimer les contenus de colonie
    for (std::shared_ptr<Pingouin> p : Pingouin::colonie) {
        std::cout << p->getTempsTotal() << '\n';
    }
    */
}