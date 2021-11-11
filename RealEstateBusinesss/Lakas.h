#pragma once
#include "IIngatlan.h"

class Lakas : public IIngatlan
{
public:
	Lakas(double ter, int szobaSzam, int lakok, int nmAr);
	virtual bool bekoltozik(int letszam) = 0;
	int lakokSzama() const;
	virtual std::string toString() const;
protected:
	double terulet;
	int szobaSzam;
	int lakok;
	int nmAr;
};