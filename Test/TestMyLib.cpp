#include <gtest/gtest.h>

#include "MyLib.h"

TEST(MyLibTest, Add) {
    EXPECT_EQ(2, add(1,1));
}
