#include "Tarsashaz.h"

Tarsashaz::Tarsashaz(int maxCapacity) : maxCapacity(maxCapacity)
{ /* ... */ }

bool Tarsashaz::LakasHozzaad(std::shared_ptr<Lakas> lak)
{
	if (garazsCount + lakasCount < maxCapacity - 1) {
		lakasCount++;
		ingatlanok.push_back(lak);
		return true;
	}

	return false;
}


bool Tarsashaz::GarazsHozzaad(std::shared_ptr<Garazs> garazs)
{
	if (garazsCount + lakasCount < maxCapacity) {
		garazsCount++;
		ingatlanok.push_back(garazs);
		return true;
	}

	return false;
}

int Tarsashaz::osszesLako() const
{
	int count = 0;

	for (size_t i = 0; i < ingatlanok.size(); i++) {
		Lakas* lPointer = dynamic_cast<Lakas*>(ingatlanok[i].get());

		if (lPointer) {
			count += lPointer->lakokSzama();
		}
	}

	return count;
}

int Tarsashaz::ingatlanErtek() const
{
	int sum = 0;
	for (size_t i = 0; i < ingatlanok.size(); i++) {
		sum += ingatlanok[i]->osszesKoltseg();
	}
	return sum;
}
