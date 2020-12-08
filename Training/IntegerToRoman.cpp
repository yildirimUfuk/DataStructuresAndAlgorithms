#include "IntegerToRoman.h"

std::string IntegerToRoman::intToRoman(int num)
{
    char symbol[9] = { 'I','V','X','L','C','D','M','*','?' };
    std::string romanNumber = "";
    uint8_t index = 1;
    while (num > 0)
    {
        if (num % 10 < 4)romanNumber.insert(0, (num % 10), symbol[index - 1]);
        else if (num % 10 == 4) {
            romanNumber.insert(0, 1, symbol[index]);
            romanNumber.insert(0, 1, symbol[index - 1]);
        }
        else if (num % 10 == 5) romanNumber.insert(0, 1, symbol[index]);
        else if (num % 10 == 9) {
            romanNumber.insert(0, 1, symbol[index + 1]);
            romanNumber.insert(0, 1, symbol[index - 1]);
        }
        else
        {
            romanNumber.insert(0, (num % 10) % 5, symbol[index - 1]);
            romanNumber.insert(0, 1, symbol[index]);
        }
        index += 2;
        num /= 10;
    }
    return romanNumber;
}

