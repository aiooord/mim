#include "morse_decoder.h"

int main(int argc, char* argv[])
{
	std::string name = "-- ^.. ^.-.. ^.- ^-.. / -.- ^.- ^.... ^... ^.- ^.-. ^.. / .- ^.-.. ^.... ^.- ^-.. ^..";
	std::cout << MorseCodeToPlaintext(name) << std::endl;

	return 0;
}