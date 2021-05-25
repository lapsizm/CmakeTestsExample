// Copyright 2021 Murygin Kirill murygin280702@gmail.com

#include <gtest/gtest.h>
#include "sort.h"

TEST(TEST, SORT){
    int size = 10;
    int* a = new int[size]{2,3,1,4,6,5,7,9,8,0};
    _sort(a, size);
    for(size_t i = 0; i < size; ++ i){
        EXPECT_EQ(a[i], i);
    }
}
