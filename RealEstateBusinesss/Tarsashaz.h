#pragma once
#include "Lakas.h"
#include "Garazs.h"
#include <vector>

class Tarsashaz
{
public:
	Tarsashaz(int maxCapacity);
	bool LakasHozzaad(std::shared_ptr<Lakas> lak);
	bool GarazsHozzaad(std::shared_ptr<Garazs> garazs);
	int osszesLako() const;
	int ingatlanErtek() const;
private:
	std::vector<std::shared_ptr<IIngatlan>> ingatlanok;
	int lakasCount = 0;
	int garazsCount = 0;
	int maxCapacity = 0;
};

