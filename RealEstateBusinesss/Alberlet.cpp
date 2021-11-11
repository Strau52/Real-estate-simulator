#include "Alberlet.h"

Alberlet::Alberlet(double ter, int szobaSzam, int nmAr) : Lakas(ter, szobaSzam, 0, nmAr), honapSzam(0)
{ /* ... */ }

int Alberlet::mennyibeKerul(const int honapokSzama)
{
	int szam = lakokSzama();
	if (szam == 0) {
		return 1;
	}
	return (osszesKoltseg() / szam) * honapokSzama;
}

bool Alberlet::lefoglaltE()
{
	return honapSzam != 0;
}

bool Alberlet::lefoglal(const int honapokSzama)
{
	if (!lefoglaltE()) {
		honapSzam = honapokSzama;
		return true;
	}
	else {
		return false;
	}
}

bool Alberlet::bekoltozik(int letszam)
{
	// Max letszam es mennyien fernek el
	if (letszam <= (szobaSzam * 8) && letszam * 2 <= terulet) {
		lakok = letszam;
		return true;
	}
	else {
		return false;
	}

}

std::string Alberlet::toString() const
{
	return Lakas::toString() + " Lefoglalt hónapok száma: " + std::to_string(honapSzam);
}

int Alberlet::osszesKoltseg() const
{
	return static_cast<int>(terulet) * nmAr;
}
