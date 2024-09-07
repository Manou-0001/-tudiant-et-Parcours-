#ifndef PARCOURS_H_INCLUDED
#define PARCOURS_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Parcours
{
    public:
        Parcours();
        void setNomParcours(string Nom);
        string getNomParcours();
    void inscription();
    private:
        string nomParcours;
};

#endif // PARCOURS_H_INCLUDED
