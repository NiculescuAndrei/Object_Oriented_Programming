#define _CRT_SECURE_NO_WARNINGS
#include "lista.h"

int main()
{
    struct nod* head = malloc(sizeof(struct nod));
    struct nod* head1 = malloc(sizeof(struct nod));
    struct nod* head2 = malloc(sizeof(struct nod));
    head->next = NULL;
    head1->next = NULL;
    head2->next = NULL;

    adaugare_concurent_la_inceputul_listei(head, 3, "Ana");
    adaugare_concurent_la_inceputul_listei(head, 3, "Alex");
    adaugare_concurent_la_inceputul_listei(head, 4, "Robert");
    adaugare_concurent_la_inceputul_listei(head, 10, "Andrei");
    adaugare_concurent_la_inceputul_listei(head, 8, "Ionel");
    adaugare_concurent_la_inceputul_listei(head, 7, "Costel");
    adaugare_concurent_la_inceputul_listei(head, 5, "Gigel");
    adaugare_concurent_la_inceputul_listei(head, 8, "Gabriel");
    printf("Lista este: \n");
    afisare_lista(head);
    cautare_nume(head, "Andrei");
    printf("\nLista sortata este: \n");
    sortare_lista(head);
    afisare_lista(head);
    separare_liste(head, head1, head2);
    printf("\nLista sortata a concurentilor admisi este: \n");
    sortare_lista(head1);
    afisare_lista(head1);
    printf("\nLista sortata a concurentilor picati este: \n");
    sortare_lista(head2);
    afisare_lista(head2);
}
