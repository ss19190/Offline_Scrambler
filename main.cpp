#include <iostream>
#include <vector>
#include <random>

int main(int argc, char const *argv[])
{

    std::vector<char> letters{'D', 'U', 'F', 'R', 'L', 'B'};

    // Create a random number engine
    std::random_device rd;  // Used to obtain a seed for the random number engine
    std::mt19937 gen(rd()); // Mersenne Twister 19937 engine with random seed from rd

    // Define a distribution
    std::uniform_int_distribution<> dis(0, 5); // Generate integers between 1 and 100

    int a = 0;
    int letter;

    for (int i = 0; i < 21; i++)
    {
        letter = dis(gen);

        while ( letter == a)
        {
            letter = dis(gen);
        }

        a = letter;

        if (dis(gen) % 2 == 0)
        {
            if (dis(gen) % 2 == 0)
                std::cout << "2" << letters[letter] << " ";
            else
                std::cout << letters[letter] << " ";
        }

        else
        {
            if (dis(gen) % 2 == 0)
                std::cout << "2" << letters[letter] << "' ";
            else
                std::cout << letters[letter] << "' ";
        }
    }

    std::cout << std::endl;

    return 0;
}
