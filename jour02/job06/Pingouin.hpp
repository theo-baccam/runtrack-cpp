#include <vector>
#include <memory>
#include <list>
#include <string>

#include "Aquatique.hpp"
#include "Terrestre.hpp"


class Pingouin : public Aquatique, public Terrestre {
    public:
        Pingouin();
        Pingouin(const Pingouin &p);
        ~Pingouin();

        void nage() override;
        void marche() override;
        void presenter();

        void setVitesseMarche(double vitesseMarche);
        void setVitesseNage(double vitesseNage);
        void setVitesseGlisse(double vitesseGlisse);

        double getTempsTotal();

        static void ajouterLieuDeRencontre(std::string nom);
        static void supprimerLieuDeRencontre(std::string nom);

        static std::vector<std::shared_ptr<Pingouin>> colonie;
        static std::list<std::string> lieuxDeRencontre;
        static void parcoursPingouins();
        static void trierPingouins();

    protected:
        double vitesseGlisse;
};