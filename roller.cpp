#include "header.hpp"

void roller() 
{
	int score = 2000;
	int lose_count = 0;
    while (true) {
       
		std::cout <<"Ваш баланс: "<< score << "\n";
        
		int bet = 0;
        std::cout << "Введите ставку: ";
     
	 	std::cin >> bet;
    
        if (bet > score) {
          std::cout << "Ставка слишком велика! (пошёл нахуй)\n";
          break;
        }
        switch (roll()) {
            case 0:
                std::cout << "проебал!\t-" << bet << '\n';
                score -= bet;
                break;
            case 1:
                std::cout << "win!\t+" << bet * 5 << '\n';
                score += bet * 5;
                break;
            case 2:
                std::cout << "big win!\t+" << bet * 100 << '\n';
                score += bet * 100;
                break;
            default:
                throw std::runtime_error("suka ty kak eto slomal");
        }
        if (score == 0) {
            score += 2000;
            lose_count++;
            std::cout << "lose count: " << lose_count << '\n';
        }
    }

}
