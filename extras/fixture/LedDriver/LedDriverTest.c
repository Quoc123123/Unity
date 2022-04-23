#include "unity_fixture.h"
#include "LedDriver.h"

TEST_GROUP(UnityFixture);

TEST_SETUP(UnityFixture)
{
    
}

TEST_TEAR_DOWN(UnityFixture)
{
    
}

TEST(UnityFixture, LedsOffAfterCreate)
{
    uint16_t virtualLeds = 0xFFFF;
    LedDriver_Create(&virtualLeds);
    TEST_ASSERT_EQUAL_HEX16(0, virtualLeds);
}


