//Jaa aiemmin esitetty henkilörekisteri - ohjelma omiin "osa-projekteihin" ja otsikkotiedostoihin.
//Laita pääohjelma omaan tiedostoon(paa.cpp), aliohjelmat omaan tiedostoon(ali.cpp) ja määritelmät omaan otsikkotiedostoon(maarittely.h).
//Projekti tulee koostaa toimivaksi Visual Studio - ympäristösssä.
//*****************
//Tapio Pekkarinen
//Harjoitus 23
//27.11.2014
//versio 1.0
#include <iostream>
using namespace std;


struct hlot
{
	char etunimi[10];
	float koulumatka;
	int hattu;
};
void TulostaHenkilo(hlot);
void TulostaKaikkiHenkilot(hlot[], int lkm);
void LisaaHenkilo(hlot[], int *lkm);
int Valikko(void);
