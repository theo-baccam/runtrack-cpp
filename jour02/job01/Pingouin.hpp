#include "Aquatique.hpp"
#include "Terrestre.hpp"


class Pingouin : public Aquatique, public Terrestre {
    public:
        Pingouin();
        ~Pingouin();
        void nage() override;
        void marche() override;
        void presenter();
};