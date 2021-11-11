#pragma once
#include "IBerelheto.h"
#include "Lakas.h"

class Alberlet : public Lakas, public IBerelheto
{
public:
	Alberlet(double ter, int szobaSzam, int nmAr);
	int mennyibeKerul(const int honapokSzama) override;
	bool lefoglaltE() override;
	bool lefoglal(const int honapokSzama) override;
	bool bekoltozik(int letszam) override;
	std::string toString() const override;
	int osszesKoltseg() const override;
private:
	int honapSzam;
};

