#ifndef ETUDIANT_H_INCLUDED
#define ETUDIANT_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Etudiant
{
    public:
        Etudiant();
        void setNomEtudiant(string Nom);
        string getNomEtudiant();
        void afficheEtudiant();
    private:
        string nomEtudiant;
};
#endif // ETUDIANT_H_INCLUDED
