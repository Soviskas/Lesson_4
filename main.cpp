#include<iostream>


int main() {
    using namespace std;
   /* int num;
    std :: cout << "enter num: ";
    std :: cin >> num;

    bool is_has_car = true;
    if (num >= 3 && is_has_car == true) {                      ////// is_has_car != true(==false(!is_has_car(is_has_car)))
        std::cout << "num is bigger than 3"<< endl;
        if (num == 5) {
            std::cout << "num == 5";
        }
    }
    else if (num == 2) {
        std :: cout << "num == 2";
    }
    else if (num == 1) {
        std::cout << "num == 1";
    }
    else if (num == -12) {
        std::cout << "num == -12";
    }
    else {
        std::cout << "Your answer is rong!";
    }*/
    int num;
    std::cin >> num;

    switch (num) {
    case 5: 
        std::cout << "Num is 5!"; break;
    case 50:
        std::cout << "Num is 50!"; break;
    default:
        std::cout << "Case is not found";
    }
    return 0;
}