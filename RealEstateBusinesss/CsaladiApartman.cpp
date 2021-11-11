#include "CsaladiApartman.h"

CsaladiApartman::CsaladiApartman(double terulet, int szobaSzam, int nmAr) : Lakas(terulet, szobaSzam, 0, nmAr), gyerekekSzama(0)
{
}

void CsaladiApartman::GyerekSzuletik()
{
	if (lakok - gyerekekSzama > 1) {
		gyerekekSzama++;
		lakok++;
	}
}

bool CsaladiApartman::bekoltozik(int letszam)
{
	int felnottek = lakok - gyerekekSzama;
	int szuksegesNM = lakok * 10 + gyerekekSzama * 5 + letszam * 10;
	double szobaIgeny = gyerekekSzama * 0.5 + felnottek;

	if (szuksegesNM < terulet && szobaIgeny < szobaSzam * 2) {
		lakok = letszam;
		return true;
	}

	return false;
}

std::string CsaladiApartman::toString() const
{
	return Lakas::toString() + ", Gyerekek száma: " + std::to_string(gyerekekSzama);
}

int CsaladiApartman::osszesKoltseg() const
{
	return static_cast<int>(terulet) * nmAr;
}
