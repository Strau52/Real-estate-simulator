#pragma once
#include "IIngatlan.h"
#include "IBerelheto.h"

class Garazs : public IIngatlan, public IBerelheto
{
public:
	Garazs(double terulet, int nmAr, bool futottE);
	int mennyibeKerul(const int honapokSzama) override;
	bool lefoglaltE() override;
	bool lefoglal(const int honapokSzama) override;
	int osszesKoltseg() const override;
	void autoKiBeAll();
	std::string toString();
private:
	double terulet;
	int nmAr;
	bool futottE;
	int honapSzam;
	bool car;
};

