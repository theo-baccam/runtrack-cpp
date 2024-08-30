#ifndef TERRESTRE_H_
#define TERRESTRE_H_

class Terrestre {
    public:
        Terrestre();
        ~Terrestre();
        virtual void marche();
    protected:
        double vitesseMarche;
};

#endif // TERRESTRE_H_