#include <vector>
#include <memory>

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

        static std::vector<std::shared_ptr<Pingouin>> colonie;
        static void parcoursPingouins();
        static void trierPingouins();

    protected:
        double vitesseGlisse;
};