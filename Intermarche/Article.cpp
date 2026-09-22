#include <string>
#include "Article.h"

using namespace std;

	Article::Article(string n) 
	{
		this->nom = n;
	}

	void Article::setPrixHT(double prix)
	{
		prixHT = prix;
	}

	void Article::setStock(int ajout)
	{
		stock = stock + ajout;
	}

	string Article::getNom()
	{
		return nom;
	}

	double Article::getPrixHT()
	{
		return prixHT;
	}

	int Article::getStock()
	{
		return stock;
	}

	Article::~Article()
	{}