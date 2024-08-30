#ifndef AQUATIQUE_H_
#define AQUATIQUE_H_

class Aquatique {
    public:
        Aquatique();
        ~Aquatique();
        virtual void nage();
    protected:
        double vitesseNage;
};

#endif // AQUATIQUE_H_