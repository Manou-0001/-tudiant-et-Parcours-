#include "Etudiant.h"
#include <iostream>
#include <string>
using namespace std;

Etudiant::Etudiant(){}
void Etudiant::setNomEtudiant(string Nom)
{
    nomEtudiant=Nom;
}
string Etudiant::getNomEtudiant()
{
    return nomEtudiant;

}
void Etudiant::afficheEtudiant()
{
    cout<<"Nom d'Etudiant:"<<nomEtudiant<<endl;
}
