#include "Maarittelu.h"
int main()
{
	hlot i[10];
	int ind1 = 0;


	int valinta;
	do
	{
		valinta = Valikko();


		switch (valinta)
		{
		case 0: cout << "Loppu";
			break;

		case 1:
			LisaaHenkilo(i, &ind1);
			/*cout << "Anna etunimi, koulumatkan pituus ja hatun koko ";
			cin >> i[ind1].etunimi >> ws >> i[ind1].koulumatka >> ws >> i[ind1].hattu;
			ind1++;*/
			break;

		case 2:
			int luku;
			cout << "Valitse henkilö 1-10 ";
			cin >> luku;
			TulostaHenkilo(i[luku - 1]);
			//cout << "Nimi: " << i[luku - 1].etunimi << "\n" << "Koulumatka: " << i[luku - 1].koulumatka << "\n" << "Hatun koko: " << i[luku - 1].hattu << endl;
			break;


		case 3:
			TulostaKaikkiHenkilot(i, ind1);
			//for (int ind = 0; ind<kpl; ind++)
			//cout << "Nimi: " << i[ind].etunimi << "\n" << "Koulumatka: " << i[ind].koulumatka << "\n" << "Hatun koko: " << i[ind].hattu << endl;

			break;

		default:	cout << "\nVirhe: ei ko. toimintoa!";
			break;
		}

	} while (valinta != 0);

	return 0;
}