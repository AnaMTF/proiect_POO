#pragma once
#include <iostream>
#include <string>

using namespace std;


void tipComanda(char* tip) {
	char delimiter[] = " ";
	char* token = strtok(tip, delimiter);
	while (token) {

	}
	if (strcmp(tip, "CREATE")) {
		Create();
	}
	else if (strcmp(tip, "UPDATE")) {
		Update();
	}
	else if (strcmp(tip, "SELECT")) {
		Select();
	}
	else if (strcmp(tip, "INSERT")) {
		Insert();
	}
	else if (strcmp(tip, "DELETE")) {
		Delete();
	}
	else if (strcmp(tip, "DROP")) {
		Drop();
	}
	else if (strcmp(tip, "DISPLAY")) {
		Display();
	}
}

class tipComanda {
private:
	char* nume_comanda = nullptr;
public:
	tipComanda(const char* nume) {
		//this->nume_comanda = nume;
	}
	tipComanda(const tip_comanda& tip) {
		this->nume_comanda = tip.nume_comanda;
	}
	switch (this->nume_comanda) {
	case1: "SELECT";
	}

};

class Select {
private:

public:

};

class Update {
private:

public:

};

class Insert {
private:

public:

};

class Delete {
private:

public:

};

class Create {
private:

public:

};

class Drop {
private:

public:

};

class Display {
private:

public:

};

class Coloana {
private:
	string nume_coloana;
	string tip;
	string descriere;
};
