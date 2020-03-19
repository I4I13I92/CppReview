#include <iostream>

int getGuessedNumber()
{
	int num_to_guess{};
	std::cout << "Enter a number to guess for the other player." << '\n';
	std::cout << "Entered number: " << '\n';
	std::cin >> num_to_guess;

	return num_to_guess;
}

bool playAgain(bool lost)
{
	char play{};

	if (lost)
	{
		std::cout << "Out of tries, you lose.\n";
	}
	else
	{
		std::cout << "YOU WON!!!\n";
	}

	std::cout << "Play Again?\n";
	std::cout << "Enter y for replay, q to quit\n";

	std::cin >> play;

	if (play == 'y' || play == 'Y')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int nextGuess(int num_to_guess, int guess, int tries)
{
	if (tries == 7)
	{
		std::cout << "Enter next your guess: ";
	}
	else
	{
		if (guess > num_to_guess)
		{
			std::cout << "Your guess is high.\n";
			std::cout << "Enter next your guess: ";
		}
		else
		{
			std::cout << "Your guess is low\n";
			std::cout << "Enter next your guess: ";
		}
	}
	

	int x_guess{};

	std::cin >> x_guess;
	std::cout << '\n';

	return x_guess;
}


bool guessGame(int num_to_guess)
{
	int tries{ 7 };
	int guess{};

	while (tries > -1)
	{
		if (guess == num_to_guess)
		{
			//if user wins ask if they would like to play again. 
			std::cout << "You guessed right\n";
			std::cout << "The number was: " << num_to_guess << "\n";
			//return false if the do not want to play again, true if they do. 
			return playAgain(false);
		}
		else if (tries == 0)
		{
			//ask user if he wants to play again after failing to play the game
			return playAgain(true);
		}
		else
		{
			//inform user of guess(hi/lo), get next guess
			std::cout << "You have " << tries << " guessses left\n";
			guess = nextGuess(num_to_guess, guess, tries);
			tries--;
		}

	}
}
