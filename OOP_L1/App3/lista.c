#include "lista.h"

void adaugare_concurent_la_inceputul_listei(struct nod* head, int nota_concurent, char nume_concurent[20])
{
	struct nod* concurent = malloc(sizeof(struct nod));
	concurent->nume = nume_concurent;
	concurent->nota = nota_concurent;
	concurent->next = head->next;
	head->next = concurent;
}

void afisare_lista(struct nod* head)
{
	struct nod* iterator = head;
	while (iterator->next != NULL)
	{
		printf("%s %d \n",iterator->next->nume, iterator->next->nota);
		iterator = iterator->next;
	}
}

void cautare_nume(struct nod* head, char nume_concurent[20])
{
	struct nod* iterator = head;
	while (iterator->next != NULL)
	{
		if (iterator->next->nume == nume_concurent)
		{
			printf("\nNota concurentului cautat este: %d\n", iterator->next->nota);
		}
		iterator = iterator->next;
	}
}

void sortare_lista(struct nod* head)
{
	struct nod* iterator1 = head;
	struct nod* iterator2 = head;

	iterator1 = iterator1->next;
	iterator2 = iterator2->next;

	while (iterator1->next != NULL)
	{
		while (iterator2->next != NULL)
		{
			if (iterator2->next->nota < iterator1->nota)
			{
				int temp = iterator2->next->nota;
				iterator2->next->nota = iterator1->nota; // interschimbare note
				iterator1->nota = temp;

				char* aux = iterator2->next->nume;
				iterator2->next->nume = iterator1->nume; // interschimbare nume
				iterator1->nume = aux;
			}
			iterator2 = iterator2->next;
		}
		iterator1 = iterator1->next;
		iterator2 = iterator1;
	}
}

void separare_liste(struct nod* head, struct nod* head1, struct nod* head2)
{
	struct nod* iterator = head;
	while (iterator->next != NULL)
	{
		if (iterator->next->nota >= 5)
		{
			adaugare_concurent_la_inceputul_listei(head1, iterator->next->nota, iterator->next->nume);
		}
		else
		{
			adaugare_concurent_la_inceputul_listei(head2, iterator->next->nota, iterator->next->nume);
		}
		iterator = iterator->next;
	}
}