// Jeu du juste prix ! Tente de trouver le nombre mystere genere aleatoirement entre 1 et 100
// Note à moi-même : 1er jeu en C++ que je code !

#include <iostream>
#include <random>

int main()
{
	int nbrmystere, nbrjoueur, nbressai;
	nbrjoueur = 0;
	nbressai = 0;
    std::cout << "Bienvenue dans le jeu du juste prix v1.0!" << std::endl;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1, 100); // inclusif
	nbrmystere = dist(gen);
    std::cout << "Un nombre entre 1 et 100 a ete genere !" << std::endl;
	//std::cout << "[DEBUG] Nombre mystere : " << nbrmystere << std::endl;
	while (nbrjoueur != nbrmystere) {
		std::cout << "Entrez votre proposition : ";
		std::cin >> nbrjoueur;
		nbressai = nbressai + 1;
		if (nbrjoueur < nbrmystere) {
			std::cout << "C'est plus !" << std::endl;
		}
		else if (nbrjoueur > nbrmystere) {
			std::cout << "C'est moins !" << std::endl;
		}
		else {
			std::cout << "Bravo ! Vous avez trouve le juste prix en " << nbressai << " essais !" << std::endl;
		}
	}
    return 0;
}