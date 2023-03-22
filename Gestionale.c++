#include <iostream>
#include <string>

using namespace std;

class cliente {
    public:
        string nome;
        string cognome;
        string indirizzo;
        string email;
        string telefono;
};

class ordine {
    public:
        int id_ordine;
        string data_ordine;
        float importo;
        cliente cl;
};

void inserisci_cliente(cliente *cl) {
    cout <<endl;
    cout << "BENVENUTO NEL GESTIONALE E PREPARATI A CREARE IL TUO ORDINE" << endl;
    cout << "---------------------------------------------------------" << endl;
    cout <<endl;
    cout <<endl;
    cout << "Inserisci nome: ";
    cin >> cl->nome;
    cout <<endl;

    cout << "Inserisci cognome: ";
    cin >> cl->cognome;
    cout <<endl;
    cout <<endl;
    cout << "Inserisci indirizzo: ";
    cin >> cl->indirizzo;
    cout <<endl;
    cout <<endl;
    cout << "Inserisci email: ";
    cin >> cl->email;
    cout <<endl;
    cout <<endl;
    cout << "Inserisci telefono: ";
    cin >> cl->telefono;
}

void inserisci_ordine(ordine *o, cliente *cl) {
    cout <<endl;
    cout << "Inserisci data ordine (gg/mm/aaaa): ";
    cin >> o->data_ordine;
    cout <<endl;
    cout <<endl;
    cout << "Inserisci importo: ";
    cin >> o->importo;
    cout <<endl;
    o->cl = *cl;
    
    o->id_ordine = 1;

    cout << "Ordine inserito con successo." << endl;
}

int main() {
    cliente cl;
    ordine o;


    inserisci_cliente(&cl);
    inserisci_ordine(&o, &cl);


    return 0;
}


/*In questo project, Ho creato due classi: `cliente` e `ordine`. La classe `cliente` viene utilizzata per memorizzare le informazioni dei clienti e la classe `ordine` viene utilizzata per memorizzare le informazioni sugli ordini.

Ho quindi creato due funzioni, `inserisci_cliente` e `inserisci_ordine`, per consentirmi di inserire i dati del cliente e dell'ordine.

Nel `main`, ho creato un nuovo oggetto `cliente` e lo abbiamo passato alla funzione `inserisci_cliente` per inserire i suoi dati. Quindi abbiamo creato un nuovo oggetto `ordine` e lo abbiamo passato alla funzione `inserisci_ordine` insieme all'oggetto `cliente` per inserire i dati dell'ordine.

Ovviamente questo è solo un esempio, e la complessità e la struttura del programma gestionale dipenderà dalle specifiche esigenze dell'utente.*/