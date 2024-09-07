#include "Parcours.h"
#include "Etudiant.h"
#include <string>
#include <iostream>
using namespace std;

Parcours::Parcours(){}
void Parcours::setNomParcours(string Nom)
{
    nomParcours=Nom;
}
string Parcours::getNomParcours()
{
    return nomParcours;
}
void Parcours:: inscription()
{
     Etudiant e;
    e.afficheEtudiant();
    cout<<"Nom Parcours:"<<nomParcours<<endl;

}
