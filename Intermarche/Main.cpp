#include <string>
#include <iostream>
#include "Article.h"

#define CYN "\e[0;36m"

using namespace std;


void main()
{
	//------------------------------------------------
	string MESSAGE_ARTICLE = "Informations par rapport à l'article: ";
	string MESSAGE_PRIX = "Choisisez le prix de l'article: ";
	string MESSAGE_STOCK = "Saisir le stock actuel: ";
	string MESSAGE_SEPARATION = " ";

	int nombreArticle = 3;
	int clavierChoice_Prix;
	int clavierChoice_Stock;
	//------------------------------------------------

	//Article* tableau[nombreArticle];
	Article* article1 = new Article("Essence");
	Article* article2 = new Article("Steak");
	Article* article3 = new Article("purée");

		cout << MESSAGE_ARTICLE << endl;
		cout << MESSAGE_PRIX << endl;
		cin >> clavierChoice_Prix;
		cout << MESSAGE_SEPARATION << endl;
		cout << MESSAGE_STOCK << endl;
		cin >> clavierChoice_Stock;
		cout << MESSAGE_SEPARATION << endl;
		article1->setStock(clavierChoice_Stock);
		article1->setPrixHT(clavierChoice_Prix);

};