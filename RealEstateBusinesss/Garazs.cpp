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
    return "Ter�let: " + std::to_string(terulet) + ", nm�r: " + std::to_string(nmAr) + ", F�t�tt-e: " + std::to_string(futottE) + ", H�napok Sz�ma: " + std::to_string(honapSzam) + " Aut�: " + std::to_string(car);
}
