/*
 * Unit tests main file
 */

#include "gtest/gtest.h"

TEST(PlatformTest, TestPointerSize)
{
    // Check pointer size cause we are testing for ARM 32-bit platform
    ASSERT_EQ(sizeof(void*)*8, 32U);
}
