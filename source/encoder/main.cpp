#include "morse_encoder.h"

int main(int argc, char* argv[])
{
    std::cout << "Ai000 Cybernetics QLab - Morse Code Obfuscator" << std::endl;
    std::cout << "Ai000 Cybernetics QLab - acql.ir" << std::endl;

    std::string input;
    
    while (true)
    {
        std::cout << std::endl;
        std::cout << "Enter the Plaintext: ";
	
	// Improve input handling to read full lines using std::getline
        std::getline(std::cin, input);
	
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
