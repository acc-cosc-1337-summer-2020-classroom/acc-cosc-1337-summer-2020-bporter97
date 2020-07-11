#include "tic_tac_toe.h"


int main() 
{
	TicTacToe tic_tac_toe;
	std::string player;
	std::string option;
	do
	{
		std::cout<<"Enter X or O: " << std::endl;
		std::cin>>player;
		while(!(player == "X" || player == "O"))
		{
			std::cout<<"That entry was invalid. Please enter X or O: " << std::endl;
			std::cin>>player;
		}

		tic_tac_toe.start_game(player);

		do
		{
			int position;
			std::cout<<"Enter position from 1 to 9: " << std::endl;
			std::cin>>position;
			while(position <= 0 || position > 9)
			{
				std::cout<<"That entry was invalid. Please enter in numbers 1 - 9: " << std::endl;
				std::cin>>position;
			}
			tic_tac_toe.mark_board(position);
			tic_tac_toe.display_board();

		} 
		while(tic_tac_toe.game_over() == false);
		{
			std::cout<<"Would you like to play a new game? Press Y for 'yes' "<< std::endl;
			std::cin>>option;
		}
	}
	while(option == "Y" || option == "y");

	std::cout<<"Game over";
	
	

	return 0;
}