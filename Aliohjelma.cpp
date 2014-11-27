#include "Maarittelu.h"
void TulostaHenkilo(hlot p_i)
{
	cout << "\nHenkilon tiedot" << endl;
	cout << "Nimi: " << p_i.etunimi << "\n" << "Koulumatka: " << p_i.koulumatka << "\n" << "Hatun koko: " << p_i.hattu << endl;
}

int Valikko(void)
{
	int valinta;
	cout << "VALIKKO";
	cout << "\n\n1 Lisää henkilo ";
	cout << "\n2 Näytä henkilo";
	cout << "\n3 Näytä kaikki henkilot";
	cout << "\n0 Lopeta ";
	cin >> ws >> valinta;
	return valinta;
}

void TulostaKaikkiHenkilot(hlot i[], int kpl)
{

	for (int ind = 0; ind<kpl; ind++)
		cout << "Nimi: " << i[ind].etunimi << "\n" << "Koulumatka: " << i[ind].koulumatka << "\n" << "Hatun koko: " << i[ind].hattu << endl;
}

void LisaaHenkilo(hlot i[], int *kpl)
{

	cout << "Anna etunimi, koulumatkan pituus ja hatun koko ";
	cin >> i[*kpl].etunimi >> ws >> i[*kpl].koulumatka >> ws >> i[*kpl].hattu;
	(*kpl)++;

}