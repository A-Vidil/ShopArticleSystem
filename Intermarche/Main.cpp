#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include "Article.h"
#include "Gestion.h"

using namespace std;


void main()
{
	//------------------------------------------------
	string MESSAGE_ARTICLE = "Informations par rapport à l'article: ";
	string MESSAGE_PRIX = "Choisisez le prix de l'article: ";
	string MESSAGE_STOCK = "Saisir le stock actuel: ";
	string MESSAGE_SEPARATION = " ";
	string MESSAGE_TICKET_CAISSE_0 = " ";


	int nombreArticle = 3;
	int clavierChoice_Prix;
	int clavierChoice_Stock;
	int EAN = 1;
	string nom;
	double prixHT;
	int stock;

	//------------------------------------------------

	vector<Article*>* lesArticles;
	lesArticles = new vector<Article*>();
	Gestion* gestion = new Gestion(); // Création de l'objet

	ofstream outFileStream(".\\article.dat");
	if (!outFileStream) {
		cout << "Erreur d'ouverture du flux de sortie" << endl;
		exit(-1);
	}

	//------------------------------------------------

	//Arriver sur programme
	
	//------------------------------------------------
	// Mode magasin

	// Crée un article (doit enregistrer dans un fichier)
	gestion->ajouterArticle(nom,prixHT,stock);


	// Modifier un article (doit prendre d'un fichier)
	gestion->modifierArticle(EAN, prixHT, stock);


	// Supprimer un article (doit supprimer l'article)
	gestion->supprimerArticle(EAN);

	//------------------------------------------------

	// Mode client
	// faire un ticket de caisse (ajouter article et stock

	//------------------------------------------------
	for (int i = 0; i < lesArticles->size(); i++)
	{
		outFileStream << lesArticles->at(i)->getNom();
		outFileStream << ";";
		outFileStream << lesArticles->at(i)->getPrixHT();
		outFileStream << ";";
		outFileStream << lesArticles->at(i)->getStock();
		outFileStream << ";";
	}

	delete lesArticles;
	outFileStream.close();

};