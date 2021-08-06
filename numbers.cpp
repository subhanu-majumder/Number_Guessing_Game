#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
std::cout << "             N    N     UU    UU     M       M     BBBBB       EEEEE     RRRR";
std::cout << "             N N  N     UU    UU     M M   M M     B    B      EE        R    R";
std::cout << "             N  N N     UU    UU     M  M M  M     BBBBB       EEEEE     RRRRR";
std::cout << "             N   NN     UU    UU     M   M   M     B    B      EE        R R";
std::cout << "             N    N       UUUU       M       M     BBBBB       EEEEE     R   R";
std::cout << "**************************************************************************************************" << '\n';
*/

int main(int argc, char const *argv[])
{
    std::cout << "Welcome to Number Guessing Game!"
              << "\n\n";
    std::cout << "I am Thinking of a number between 1 and 100 :- "
              << "\n\n";
    std::cout << "Press 'h' for hard and'e' for easy :- ";
    char ch;
    std::cin >> ch;
    srand(time(0));
    int num = (rand() % 100) + 1;
    switch (ch)
    {
    case 'h':
        for (size_t i = 1; i <= 5; i++)
        {
            int guess;
            std::cout << "Guess the number :- ";
            std::cin >> guess;
            if (guess == num && i <= 5)
            {
                std::cout << "You Won!!!!!!" << '\n';
                break;
            }
            else if (i == 5)
            {
                std::cout << "No More Tries Left!!!" << '\n';
                std::cout << "The number was :- " << num;
                break;
            }
            else
            {
                if (guess > num)
                {
                    std::cout << "Too High!" << '\n';
                }
                else
                {
                    std::cout << "Too Low!" << '\n';
                }
                printf("%d Tries Left!!!\n", (5 - i));
            }
        }
        break;
    case 'e':
        for (size_t i = 1; i <= 10; i++)
        {
            int guess;
            std::cout << "Guess the number :- ";
            std::cin >> guess;
            if (guess == num && i <= 10)
            {
                std::cout << "You Won!!!!!!" << '\n';
                break;
            }
            else if (i == 10)
            {
                std::cout << "No More Tries Left!!!" << '\n';
                std::cout << "The Number was :- " << num;
                break;
            }
            else
            {
                if (guess > num)
                {
                    std::cout << "Too High!" << '\n';
                }
                else
                {
                    std::cout << "Too Low!" << '\n';
                }
                printf("%d Tries Left!!!\n", (10 - i));
            }
        }
        break;
    }
    return 0;
}
