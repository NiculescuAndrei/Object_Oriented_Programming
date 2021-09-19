#pragma once
#include "Card.h"
class Deck
{
public:
	Card* pachet = new Card[52];
	void generare_pachet();
	int simulare_blackjack();
};

