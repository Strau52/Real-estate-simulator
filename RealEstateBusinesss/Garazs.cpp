#include "Garazs.h"

Garazs::Garazs(double terulet, int nmAr, bool futottE) : terulet(terulet), nmAr(nmAr), futottE(futottE), honapSzam(0), car(false)
{ /* ... */ }

int Garazs::mennyibeKerul(const int honapokSzama)
{
    if (futottE)
        return osszesKoltseg() * 1.5 * honapokSzama;

    return osszesKoltseg() * honapokSzama;
}

bool Garazs::lefoglaltE()
{
    return honapSzam > 0;
}

bool Garazs::lefoglal(const int honapokSzama)
{
    if (honapSzam == 0) {
        honapSzam = honapokSzama;
        return true;
    }
    return false;
}

int Garazs::osszesKoltseg() const
{
    return terulet * nmAr;
}

void Garazs::autoKiBeAll()
{
    car = !car;
}

std::string Garazs::toString()
{
    return "Terület: " + std::to_string(terulet) + ", nmÁr: " + std::to_string(nmAr) + ", Fütött-e: " + std::to_string(futottE) + ", Hónapok Száma: " + std::to_string(honapSzam) + " Autó: " + std::to_string(car);
}
