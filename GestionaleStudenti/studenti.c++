#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Definizione della classe Studente
class Studente {
    private:
        string nome;
        string cognome;
        int anno;
        string corso;

    public:
        // Costruttore
        Studente(string _nome, string _cognome, int _anno, string _corso) {
            nome = _nome;
            cognome = _cognome;
            anno = _anno;
            corso = _corso;
        }

        // Metodo per ottenere il nome completo dello studente
        string nomeCompleto() {
            return nome + " " + cognome;
        }

        // Metodo per ottenere l'anno di iscrizione dello studente
        int getAnno() {
            return anno;
        }

        // Metodo per ottenere il corso a cui lo studente è iscritto
        string getCorso() {
            return corso;
        }

};

// Definizione della classe Classe
class Classe {
    private:
        string nomeCorso;
        vector<Studente> studenti;

    public:
        // Costruttore
        Classe(string _nomeCorso) {
            nomeCorso = _nomeCorso;
        }

        // Metodo per aggiungere uno studente alla classe
        void aggiungiStudente(Studente s) {
            studenti.push_back(s);
        }

        // Metodo per ottenere il numero di studenti in classe
        int numeroStudenti() {
            return studenti.size();
        }

        // Metodo per ottenere il nome del corso relativo alla classe
        string getNomeCorso() {
            return nomeCorso;
        }

        // Metodo per visualizzare i nomi completi di tutti gli studenti della classe
        void elencoStudenti() {
            cout << "Elenco studenti della classe di " << nomeCorso << ":\n";
            for(int i = 0; i < studenti.size(); i++) {
                cout << studenti[i].nomeCompleto() << endl;
            }
        }

};

// Funzione principale
int main() {
    // Creazione di due classi
    Classe classe1("Java");
    Classe classe2("C++");
    Classe classe3("Python");


    // Creazione di alcuni studenti
    Studente studente1("Serge", "Guea", 2022, "Java");
    Studente studente2("Valerio", "Amato", 2023, "Python");
    Studente studente3("Rosita", "B", 2023, "Java");
    Studente studente4("Marco", "Boscia", 2022, " php C++");
    Studente studente5("Riccardo", "Gatto", 2023, "C++");
    Studente studente6("Jacopo", "Federico", 2023, "Python");

    // Aggiunta degli studenti alle rispettive classi
    classe1.aggiungiStudente(studente1);
    classe2.aggiungiStudente(studente2);
    classe1.aggiungiStudente(studente3);
    classe2.aggiungiStudente(studente4);
    classe2.aggiungiStudente(studente5);
    classe3.aggiungiStudente(studente6);


    // Visualizzazione delle informazioni relative alle classi e agli studenti
    cout << "Benvenuto nel gestionale studenti!"<<endl;
    cout << "=================================="<<endl;

    cout << endl;
    cout << "Classe di " << classe1.getNomeCorso() << ":\n";
    cout <<endl;

    cout << "Numero studenti: " << classe1.numeroStudenti() << endl;
    cout << endl;
    classe1.elencoStudenti();
    cout <<"=================================="<<endl;

    cout << endl;

    cout << "Classe di " << classe2.getNomeCorso() << ":\n";
    cout << endl;
    cout << "Numero studenti: " << classe2.numeroStudenti() << endl;
    cout << endl;
    classe2.elencoStudenti();
    cout <<"=================================="<<endl;

    return 0;
}

