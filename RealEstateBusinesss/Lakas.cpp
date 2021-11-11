#include "Lakas.h"

Lakas::Lakas(double ter, int szobaSzam, int lakok, int nmAr) : terulet(ter), szobaSzam(szobaSzam), lakok(lakok), nmAr(nmAr)
{ /* ... */ }

int Lakas::lakokSzama() const
{
	return lakok;
}

std::string Lakas::toString() const
{
	return "Ter�let: " + std::to_string(terulet) + ", Szobasz�m: " + std::to_string(szobaSzam) + ", Lak�k sz�ma: " + std::to_string(lakok) + ", Nm�r: " + std::to_string(nmAr);
}
