#include <string>
#include <iostream>
#include <vector>

#include "Gestion.h"
#include "Article.h"

using namespace std;

void ajouterArticle(string nom, double prixHT, int stock)
{
	vector<Article*> * lesArticles;

	lesArticles->push_back(new Article(nom));
	lesArticles->back()->setPrixHT(prixHT);
	lesArticles->back()->setStock(stock);

}

void modifierArticle(int EAN, double prixHT, int stock)
{
	vector<Article*>* lesArticles;

	lesArticles->at(EAN)->setPrixHT(prixHT);
	lesArticles->at(EAN)->setStock(stock);

}

void supprimerArticle(int EAN)
{
	vector<Article*>* lesArticles;

	lesArticles->at(EAN)->~Article();

}
