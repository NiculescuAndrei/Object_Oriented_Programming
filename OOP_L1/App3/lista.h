#pragma once
#include <stdio.h>
#include <malloc.h>

struct nod {
	int nota;
	char *nume;
	struct nod* next;
};

void adaugare_concurent_la_inceputul_listei(struct nod* head, int nota_concurent, char nume_concurent[20]);
void afisare_lista(struct nod* head);
void cautare_nume(struct nod* head, char nume_concurent[20]);
void sortare_lista(struct nod* head);
void separare_liste(struct nod* head, struct nod* head1, struct nod* head2);