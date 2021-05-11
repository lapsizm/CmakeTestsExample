// Copyright 2021 Murygin Kirill murygin280702@gmail.ru

#include "hex.h"

std::string _hex(int a)
{
    std::stringstream stream;
    stream << std::hex << a;
    std::string result(stream.str());
    return result;
}
