// Copyright 2021 Murygin Kirill murygin280702@gmail.com

#include <gtest/gtest.h>
#include "hex.h"

TEST(TEST, HEX){
    std::string str = _hex(70);
    EXPECT_EQ(str, "46");
    std::string str1 = _hex(123);
    EXPECT_EQ(str1, "7b");
}
