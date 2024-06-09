#include "morse_encoder.h"

int main(int argc, char* argv[])
{
    std::string input;
    
    while (true)
    {
        std::cout << std::endl;
        std::cout << "Enter the Plaintext: ";
        std::cin >> input;
        if (input != "exit")
        {
            std::string morse = EncodePlaintextToMorseCode(input);
            std::cout << "Encoded Plaintext to the Morse Code: " << morse << std::endl;
        }
        else
        {
            exit(0);
        }
    }

    return 0;
}