#include <iostream>
#include <cstdlib> // для функций rand() и srand()
using namespace std;

int roll() {
    int max = 7;
    int first_num = rand()%(max+1);
    int second_num = rand()%(max+1);
    int third_num = rand()%(max+1);
    cout << "| " << first_num << " | " << second_num << " | " << third_num << " |\n"; 
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
            cout <<"Ваш баланс: "<< score << "\n";
            cout << "Введите ставку: ";
            int bet = 0;
            cin >> bet;
        
            if (bet > score) {
              cout << "Ставка слишком велика! (пошёл нахуй)\n";
              break;
            }
            switch (roll()) {
                case 0:
                    cout << "проебал!\t-" << bet << '\n';
                    score -= bet;
                    break;
                case 1:
                    cout << "win!\t+" << bet * 5 << '\n';
                    score += bet * 5;
                    break;
                case 2:
                    cout << "big win!\t+" << bet * 100 << '\n';
                    score += bet * 100;
                    break;
                default:
                    throw runtime_error("suka ty kak eto slomal");
            }
            if (score == 0) {
                score += 2000;
                a++;
                cout << "lose count: " << a << '\n';
            }
        }
    }
    catch (exception& e) {
        cerr << e.what();
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
