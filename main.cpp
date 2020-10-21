#include <iostream>
#include <cstdlib> // для функций rand() и srand()

int random_num() 
{
	int max = 7;
	return (rand()%(max+1)+rand()%(max+1))/2;
}

void print_nums (int first_num, int second_num, int third_num) 
{
    std::cout << "| " << first_num << " | " << second_num << " | " << third_num << " |\n"; 
}

int roll() {
    int first_num = random_num();
    int second_num = random_num();
    int third_num = random_num();
    print_nums(first_num, second_num, third_num);
    if ((first_num == second_num) || (third_num == second_num) || (first_num == third_num)) return 1;
    if ((first_num == second_num) && (third_num == second_num)) return 2;
    return 0;
}

int main()
{
    //setlocale(LC_ALL,"Russian"); -- для виндопедиков
    
    long long score = 2000;
    int a = 0;
    try {
        while (true) {
            std::cout <<"Ваш баланс: "<< score << "\n";
            std::cout << "Введите ставку: ";
            int bet = 0;
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
                a++;
                std::cout << "lose count: " << a << '\n';
            }
        }
    }
    catch (std::exception& e) {
        std::cerr << e.what();
    }
}

/*
do
do class
do class if
do
do class
do class if

do!
do class!
do class if
do class if!
do class if inline
do class if inline
do class if inline
bool this delete define!

this do int break sizeof public
try if struct for auto static
while!
while!

Rammstein
*/
