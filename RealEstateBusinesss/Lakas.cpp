#include "Lakas.h"

Lakas::Lakas(double ter, int szobaSzam, int lakok, int nmAr) : terulet(ter), szobaSzam(szobaSzam), lakok(lakok), nmAr(nmAr)
{ /* ... */ }

int Lakas::lakokSzama() const
{
	return lakok;
}

std::string Lakas::toString() const
{
	return "Terület: " + std::to_string(terulet) + ", Szobaszám: " + std::to_string(szobaSzam) + ", Lakók száma: " + std::to_string(lakok) + ", NmÁr: " + std::to_string(nmAr);
}
