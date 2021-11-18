#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv) {
    string napis ="Hades czasami jest zaliczany do grona bogów olimpijskich, mimo że nie uczestniczył w biesiadach olimpijskich. Starożytni Grecy nie uważali Hadesa za siłę zła, w przeciwieństwie do późniejszej koncepcji szatana w chrześcijaństwie. Niewątpliwie był to bóg surowy i budzący strach, ale przy tym bardzo sprawiedliwy. Czczony był w całej Grecji, jednak starano się to robić w trwodze i milczeniu. Zazwyczaj Grecy starali się nie wypowiadać jego imienia, a hołdy składano mu na kolanach (odniesienie do tego, że bóg ten żył w podziemiu), w przeciwieństwie do hołdów składanych na stojąco z wyciągniętymi rękami do bogów olimpijskich.";
	
    string tekst;
    cout << "Podaj tekst: ";
    cin >> tekst;

    for (int i = 0; i < napis.size(); i++) {
        if (tekst[0] == napis[i]) { // czy pierwsza litetra szukanego napisu sie zgadza
            // czy pozostałe liter sa takie same (czy_te_same)
            bool czy_te_same = true;
            for (int j = 1; j < tekst.size(); j++)
                if (tekst[j] != napis[i+j]) { // jezeli nie sa takie same, to przerwij
                    czy_te_same = false;
                    break;
                }
            if (czy_te_same) cout << i << " "; // jesli znalazlem, to na jakiej pozycji
            for (int j = 0; j < tekst.size(); j++) cout << napis[i+j]; // wypisanie szukanego tesktu w napisie
            cout << endl;
        }
    }

	return 0;0 
}

