#pragma once
#include "Lakas.h"

class CsaladiApartman : public Lakas
{
public:
	CsaladiApartman(double terulet, int szobaSzam, int nmAr);
	void GyerekSzuletik();
	virtual bool bekoltozik(int letszam) override;
	virtual std::string toString() const override;
	int osszesKoltseg() const override;
private:
	int gyerekekSzama;
};

