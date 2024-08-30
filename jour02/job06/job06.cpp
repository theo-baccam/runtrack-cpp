#include <iostream>

#include "Aquatique.hpp"
#include "Terrestre.hpp"
#include "Pingouin.hpp"


int main() {
    std::cout << "tux1\n";
    Pingouin tux1;
    tux1.presenter();
    tux1.marche();
    tux1.nage();

    std::cout << "Il y a " << Pingouin::colonie.size() << " pingouin(s)\n";

    std::cout << "tux2\n";
    Pingouin tux2(tux1);
    tux2.presenter();
    tux2.marche();
    tux2.nage();

    std::cout << "Il y a " << Pingouin::colonie.size() << " pingouin(s)\n";

    std::cout << "tux2\n";
    tux2.setVitesseMarche(0.5);
    tux2.setVitesseNage(3.2);
    tux2.setVitesseGlisse(3.8);
    tux2.presenter();
    tux2.marche();
    tux2.nage();

    Pingouin tux3;
    tux3.setVitesseMarche(1.2);
    tux3.setVitesseNage(4.1);
    tux3.setVitesseGlisse(4.2);

    Pingouin::parcoursPingouins();
    Pingouin::trierPingouins();

    for (std::string nom : Pingouin::lieuxDeRencontre) {
        std::cout << nom << '\n';
    }

    Pingouin::ajouterLieuDeRencontre("plage");
    Pingouin::supprimerLieuDeRencontre("lac");

    for (std::string nom : Pingouin::lieuxDeRencontre) {
        std::cout << nom << '\n';
    }

    return 0;
}