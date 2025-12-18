#include <iostream>

using namespace std;

enum class Platforma { PS4, PS5, Xbox, Switch, PC };

string platforma2(Platforma platforma) {
	switch (platforma)
	{
	case Platforma::PS4: return "PS4";
		break;
	case Platforma::PS5: return "PS5";
		break;
	case Platforma::Xbox:return "Xbox";
		break;
	case Platforma::Switch: return "Switch";
		break;
	case Platforma::PC: return "PC";
		break;
	default:
		break;
	}
}

struct Gra {
	string tytul;
	string wydawca;
	unsigned int rokWydania;
	unsigned int cena;
	Platforma platforma;
	void info();
};

void Gra::info() {
	cout << tytul << " wydany w " << rokWydania << " roku, przez studio " << wydawca << ", na " << platforma2(platforma) << " za cene: " << cena<<"zl" << endl;
}

int main()
{	
	 Gra tab[4] = { {"Overwatch","Blizzard",2010,200,Platforma::PC},
				{"LoL","Riot",2005,0,Platforma::PC },
				{"HollowKnightSilksong","TeamCherry",2025, 80, Platforma::PC},
				{"Mario","Nintendo",2000,500,Platforma::Switch }
	};

	// cout << "test";
	for (int i = 0; i < 4; i++)
	{
		tab[i].info();
	}

}

///////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

using namespace std;

enum class Platforma { PS4, PS5, Xbox, Switch, PC };

string platforma_to_string(Platforma platforma) {
	switch (platforma)
	{
	case Platforma::PS4: return "PS4";
		break;
	case Platforma::PS5: return "PS5";
		break;
	case Platforma::Xbox:return "Xbox";
		break;
	case Platforma::Switch: return "Switch";
		break;
	case Platforma::PC: return "PC";
		break;
	default:
		break;
	}
}

struct Gra {
	string tytul;
	string wydawca;
	unsigned int rokWydania;
	unsigned int cena;
	Platforma platforma;
	void info();
};

void Gra::info() {
	cout << tytul << " wydany w " << rokWydania << " roku, przez studio " << wydawca << ", na " << platforma_to_string(platforma) << " za cene: " << cena<<"zl" << endl;
}

struct kolekcjaGier {
	vector<Gra> kolekcja{};
	int wielkoscKolekcji{};
	void dodaj(Gra gra);
	void usunPoTytule(string tytul);
	void wypiszGre(int n);
	void wypiszWszystkieGry();
	Gra wyszukajPoTutule(string tytul);
	void wypiszPoPlatformie(string platforma);
	void wypiszPoCenachRosnaco();
};

void kolekcjaGier::dodaj(Gra gra) {
	int size_of_collection = size(kolekcja);
	kolekcja[size_of_collection] = gra;
}
void kolekcjaGier::usunPoTytule(string tytul) {

}
void kolekcjaGier::wypiszGre(int n) {

}
void kolekcjaGier::wypiszWszystkieGry() {

}
void kolekcjaGier::wypiszPoPlatformie(string platforma) {

}
void kolekcjaGier::wypiszPoCenachRosnaco() {

}

int main()
{	
	 Gra tab[4] = { {"Overwatch","Blizzard",2010,200,Platforma::PC},
				{"LoL","Riot",2005,0,Platforma::PC },
				{"HollowKnightSilksong","TeamCherry",2025, 80, Platforma::PC},
				{"Mario","Nintendo",2000,500,Platforma::Switch }
	};
	
	 kolekcjaGier mojaKolekcja;
	for (int i = 0; i < 4; i++)
	{
		mojaKolekcja.dodaj(tab[i]);
	}

}

