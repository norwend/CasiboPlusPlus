#include "header.hpp"

int random_num() 
{
	int max = 7;
	return (rand()%(max+1)+rand()%(max+1))/2;
}

void print_nums (int first_num, int second_num, int third_num) 
{
    std::cout << "| " << first_num << " | " << second_num << " | " << third_num << " |\n"; 
}

int roll() 
{
    int first_num = random_num();
    int second_num = random_num();
    int third_num = random_num();
    print_nums(first_num, second_num, third_num);
    if ((first_num == second_num) || (third_num == second_num) || (first_num == third_num)) 
	    return 1;
    if ((first_num == second_num) && (third_num == second_num)) 
	    return 2;
    return 0;
}
