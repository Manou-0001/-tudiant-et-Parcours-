#include <iostream>
#include "Etudiant.h"
#include "Parcours.h"
#include <string>
using namespace std;
int main()
{
    Etudiant Et=Etudiant();
    Et.setNomEtudiant("Manou");
    Parcours Pa=Parcours();
    Pa.setNomParcours("Phe");
    Pa.inscription();
    return 0;

}
