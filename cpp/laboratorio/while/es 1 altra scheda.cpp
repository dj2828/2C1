#include <iostream>
using namespace std;

int main() {

    int scelta, port, prez, tot, i=0;

    cout << "Scegli quante portate vuoi: ";
    cin >> port;
    system("cls"); // Pulisce lo schermo

    do{

        cout << "Inserisci il prodotto:\n";
        cout << "1. Margherita\n2. Marinara\n3. Napoletana\n4. whurstel?\n5. patatine\n6. bibita\n7. dolce\n8. caffe\n";
        cin >> scelta;

        switch (scelta)
        {
        case 1:
            prez = 5;
            break;
        case 2:
            prez = 4;
            break;
        case 3:
            prez = 6;
            break;
        case 4:
            prez = 3;
            break;
        case 5:
            prez = 2;
            break;
        case 6:
            prez = 1;
            break;
        case 7:
            prez = 2;
            break;
        case 8:
            prez = 1;
            break;
        
        default:
            cout << "Scelta non valida, riprova.\n";
            continue; // Skip to the next iteration of the loop
            break;
        }

        tot += prez;
        system("cls"); // Pulisce lo schermo
        
        i++;
    } while(i<port);

    cout << "Il totale e': " << tot << endl;

    system("pause");
    return 0;
}