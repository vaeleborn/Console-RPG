#include "Globals.h"

std::string RepeatChar(char c, int n)
{
    std::stringstream rtn;
    for (int i = 0; i < n; i++)
    {
        rtn << c;
    }
    return std::string(rtn.str());
}
