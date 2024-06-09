#include "morse_encoder.h"

std::string EncodePlaintextToMorseCode(const std::string& arg_input)
{
    std::string morse_code;
    for (const char& c : arg_input)
    {
        if (g_MorseCodeMap.find(c) != g_MorseCodeMap.end()) 
        {
            morse_code += g_MorseCodeMap.at(c) + " ";
        }
    }
    return morse_code;
}