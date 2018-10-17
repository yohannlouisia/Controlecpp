/*! \file controle.cpp
* \brief programme qui gere une liste de nombres reels
* \author Yohann.Louisia
* \version 0.1
* \date 17 Octobre 2018
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/*!
* \main
* \brief
* Gérer une liste de nombre
*/

int main(){
	vector <int> tab;
	int nb;
	int choix;
	/*!
	* \param nb le nombre qu'on entre
	* \param choix le nombre pour choisir les fonctions
	*/

	while (choix != 5){
	cout << "1) Ajoutez un nombre " << endl;
	cout << "2) Affichez la liste" << endl;
	cout << "3) Supprimez un seul nombre" << endl;
	cout << "4) Supprimez tous les nombres de la liste égal à celui entré" << endl;
	cout << "5) Quitter" << endl;
	cin >> choix;

		switch (choix){
		/*! \brief Permet d'ajouter un nombre à la liste
		*/
		case 1:
			cout << "Ajoutez un nombre dans la liste : " << endl;
			cin >> nb;
			tab.push_back(nb);

			sort (tab.begin(), tab.end());

			break;
		/*! \brief Afficher la liste
		*/
		case 2:
			cout << "La liste :" << endl;
			for(int i=0;i<tab.size();i++){

				cout  << tab[i] << endl;
			}
			break;
		/*! \brief Effacer un seul nombre de liste
		*/
		case 3 :

			cout << "Entrez un nombre : (seul le premier de la liste sera supprimé)" << endl;
			cin >> nb;

			for(int j=0; j<tab.size(); j++){
				if (nb == tab[j]){

					tab.erase(tab.begin()+j);
				}
			}
			break;
		/*! \brief Effacer les nombres de la liste
		*/
		case 4 :
			cout << "Entrez un nombre : (tous ceux de la liste seront supprimés)" << endl;
			cin >> nb;

			for(int j=0; j<tab.size(); j++){

				if (nb == tab[j]) {
					tab.erase(tab.begin()+j);
					j--;
				}
			}
			break;
		/*! \brief Quitter
		*/
		case 5 :
			return 0;
		}
	}
	return 0;
}
