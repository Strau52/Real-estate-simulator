#include "Hazmester.h"
#include "Alberlet.h"
#include "CsaladiApartman.h"
#include "Garazs.h"

#include <iostream>
#include <fstream>
#include <sstream>

void Hazmester::ReadFile(std::string path)
{
	Tarsashaz th(10);

	std::ifstream inputFile(path);

	if (inputFile.is_open()) {
		std::string s;
		while (!inputFile.eof()) {
			std::getline(inputFile, s);

			std::istringstream iss(s);
			std::vector<std::string> words{ std::istream_iterator<std::string>{iss}, std::istream_iterator<std::string>{} };

			if (words[0] == "Alberlet") {
				std::shared_ptr<Alberlet> alberlet = std::make_shared<Alberlet>(std::stod(words[1]), std::stoi(words[2]), std::stoi(words[3]));
				th.LakasHozzaad(alberlet);

				if (!(alberlet->lefoglaltE())) {
					if (alberlet->lefoglal(5)) {
						alberlet->bekoltozik(5);
					}
				}
				std::cout << alberlet->toString() << std::endl;
				std::cout << "Bérleti dij: " << alberlet->mennyibeKerul(5) << std::endl;
			}
			else if (words[0] == "CsaladiApartman") {
				std::shared_ptr<CsaladiApartman> csaladi = std::make_shared<CsaladiApartman>(std::stod(words[1]), std::stoi(words[2]), std::stoi(words[3]));
				th.LakasHozzaad(csaladi);
				if (csaladi->bekoltozik(5)) {
					csaladi->GyerekSzuletik();
				}
				std::cout << csaladi->toString() << std::endl;
			}
			else if (words[0] == "Garazs") {
				bool futott = words[3] == "futott";
				std::shared_ptr<Garazs> garazs = std::make_shared<Garazs>(std::stod(words[1]), std::stoi(words[2]), futott);
				th.GarazsHozzaad(garazs);
				garazs->autoKiBeAll();
				std::cout << garazs->toString() << std::endl;
				std::cout << "Bérleti dij: " << garazs->mennyibeKerul(5) << std::endl;
			}
		}
	}

	std::cout << "Lakás összérték: " << th.ingatlanErtek() << std::endl;
	std::cout << "Lakás összes lakója: " << th.osszesLako() << std::endl;
}
