#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Fonction qui trie par ordre de grandeur grâce à la méthode de trie par bulle
void trie(vector<int>& tab)
{
    //Récupère la 1ère valeur du tableau est vérifie si elle est plus grande que celle d'après
    for (int j = 0; j < tab.size() - 1; j++)
    {
        //Initialisation d'un booleen pour vérifier si le tableau est déjà trier
        bool alreadySort = true;

        for (int i = 0; i < tab.size() - 1; i++)
        {
            //Si vraie alors échange l'emplacements des valeurs dans le tableau
            if (tab[i] > tab[i + 1])
            {
                tab[i] += tab[i + 1];
                tab[i + 1] = tab[i] - tab[i + 1];
                tab[i] -= tab[i + 1];
                alreadySort = false;
            }
        }

        //Si tableau est déjà trier alors arrêt de la boucle
        if (alreadySort) break;
    }
}

int main() {

    //Initialisation du tableau
    vector<int> tab;

    //Ajout des valeurs dans le tableau et initialise la taille du tableau
    for (int i = 0; i < 20; i++) {
        tab.push_back(i);
    }

    //Mélange les valeurs 
    random_shuffle(tab.begin(), tab.end());
    trie(tab);
    
    //Affiche les valeurs du tableau
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << endl;
    }
    return 0;
}