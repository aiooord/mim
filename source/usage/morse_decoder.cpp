#include "morse_decoder.h"

std::string MorseCodeToPlaintext(const std::string& arg_morse)
{
    std::string decoded_string;
    std::istringstream stream(arg_morse);
    std::string morse_char;
    while (stream >> morse_char)
    {
        if (g_ReverseMorseCodeMap.find(morse_char) != g_ReverseMorseCodeMap.end())
        {
            decoded_string += g_ReverseMorseCodeMap.at(morse_char);
        }
    }
    return decoded_string;
}