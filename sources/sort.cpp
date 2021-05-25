// Copyright 2021 Murygin Kirill murygin280702@gmail.ru

#include "sort.h"

int* _sort(int* a, int size)
{
    std::sort(a, a + size);
    return a;
}
