#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//Fonction qui trie par ordre de grandeur gr�ce � la m�thode de trie par bulle
void trie(vector<int>& tab)
{
    //R�cup�re la 1�re valeur du tableau est v�rifie si elle est plus grande que celle d'apr�s
    for (int j = 0; j < tab.size() - 1; j++)
    {
        //Initialisation d'un booleen pour v�rifier si le tableau est d�j� trier
        bool alreadySort = true;

        for (int i = 0; i < tab.size() - 1; i++)
        {
            //Si vraie alors �change l'emplacements des valeurs dans le tableau
            if (tab[i] > tab[i + 1])
            {
                tab[i] += tab[i + 1];
                tab[i + 1] = tab[i] - tab[i + 1];
                tab[i] -= tab[i + 1];
                alreadySort = false;
            }
        }

        //Si tableau est d�j� trier alors arr�t de la boucle
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

    //M�lange les valeurs 
    random_shuffle(tab.begin(), tab.end());
    trie(tab);
    
    //Affiche les valeurs du tableau
    for (int i = 0; i < tab.size(); i++)
    {
        cout << tab[i] << endl;
    }
    return 0;
}