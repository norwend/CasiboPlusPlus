#include "header.hpp"

int main()
{
    //setlocale(LC_ALL,"Russian"); -- для виндопедиков
    
    try 
	{
    	roller();
	}
    catch (std::exception& e) {
        std::cerr << e.what();
    }
}
