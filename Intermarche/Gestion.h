#pragma once
#include <string>

using namespace std;

class Gestion
{
public:

	void ajouterArticle(string nom, double prixHT, int stock);
	void modifierArticle(int EAN, double prixHT, int stock);
	void supprimerArticle(int EAN);

};
