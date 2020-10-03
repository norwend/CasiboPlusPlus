#include <iostream>
#include <ctime>
#include <cstdlib> // для функций rand() и srand()
#include <windowsx.h>
unsigned short getRandomNumber()
{
    int min = 1;
    int max = 7;
    static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
    // Равномерно распределяем рандомное число в нашем диапазоне
    return static_cast<unsigned short>(rand() * fraction * (max - min + 1) + min);
}

int main()
{
        setlocale(LC_ALL,"Russian");
    unsigned short FisrtNum = 0;
    unsigned short SecondNum = 0;
    unsigned short ThirdNum = 0;
    long long MySchore = 2000;
    while (true) {
        std::cout << "Введите ставку" << std::endl;
        std::cout <<"Ваш балланс "<< MySchore << "\n";
        int stavka = 0;
        std::cin >> stavka;
        if (stavka > MySchore) {
            std::cout << "idi naxuy\n";
        }
        else {
            FisrtNum = getRandomNumber();
            SecondNum = getRandomNumber();
            ThirdNum = getRandomNumber();
            if (FisrtNum == SecondNum == ThirdNum) {
std::cout << FisrtNum << " " << SecondNum << " " << ThirdNum << "\n" << "777 win! +" << stavka * 10 << "\n";
MySchore += stavka * 10;
                }
            else if ((FisrtNum == SecondNum) || (FisrtNum == ThirdNum)) {
std::cout << FisrtNum << " " << SecondNum << " " << ThirdNum << "\n" << "win! +" << stavka * 5 << "\n";
                MySchore += stavka * 5;
            }
            else if (SecondNum == ThirdNum) {
std::cout << FisrtNum << " " << SecondNum << " " << ThirdNum << "\n" << "win! +" << stavka * 5 << "\n";
                MySchore += stavka * 5;
            }
            else {
            std::cout<<FisrtNum << " " << SecondNum << " " << ThirdNum << "\n"<<"неть -"<<stavka<<"\n";
            MySchore -= stavka;
                }
        }
         int a = 0;
        //std::cin>>a;
        if(MySchore == 0){
                MySchore += 2000;
                a++;
                std::cout<<a;
            }
        system("Pause");
        system("cls");
        }
}
