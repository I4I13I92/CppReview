#include <iostream>

enum class CardRank
{
	TWO,
	THREE, 
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN,
	JACK,
	QUEEN,
	KING,
	ACE,

	MAX_CARDS

};

enum class CardSuit
{
	CLUB,
	SPADES,
	HEARTS,
	DIAMONDS,

	MAX_SUITS
};

struct card
{
	CardSuit suit{};
	CardRank rank{};
};

void PrintDeck(const card& card)
{
	switch (card.rank)
	{
	case CardRank::TWO:
		std::cout << '2';
		break;
	case CardRank::THREE:
		std::cout << '3';
		break;
	case CardRank::FOUR:
		std::cout << '4';
		break;
	case CardRank::FIVE:
		std::cout << '5';
		break;
	case CardRank::SIX:
		std::cout << '6';
		break;
	case CardRank::SEVEN:
		std::cout << '7';
		break;
	case CardRank::EIGHT:
		std::cout << '8';
		break;
	case CardRank::NINE:
		std::cout << '9';
		break;
	case CardRank::TEN:
		std::cout << '10';
		break;
	case CardRank::JACK:
		std::cout << 'J';
		break;
	case CardRank::QUEEN:
		std::cout << 'Q';
		break;
	case CardRank::KING:
		std::cout << 'K';
		break;
	case CardRank::ACE:
		std::cout << 'A';
		break;
	default:
		std::cout << '?';
		break;
		break;
	}

	switch (card.suit)
	{
	case CardSuit::CLUB:
		std::cout << 'C';
		break;
	case CardSuit::SPADES:
		std::cout << 'S';
		break;
	case CardSuit::HEARTS:
		std::cout << 'H';
		break;
	case CardSuit::DIAMONDS:
		std::cout << 'D';
		break;
	default:
		std::cout << '?';
		break;
		break;
	}
}




int main()
{
	return 0;
}