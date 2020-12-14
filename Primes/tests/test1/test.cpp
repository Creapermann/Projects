#include "primes.hpp"
#include "gtest/gtest.h"

//Test Fxiture
class PrimesTest : public testing::Test{
public:
    PrintPrimes pp;
};


//Tests
TEST_F(PrimesTest, FirstVal){

    ASSERT_EQ(pp.calculateAndPrintPrimes(100)[0], 2);
}

TEST_F(PrimesTest, SecoundVal){

    ASSERT_EQ(pp.calculateAndPrintPrimes(100)[1], 3);
}

TEST_F(PrimesTest, ThirdVal){

    ASSERT_EQ(pp.calculateAndPrintPrimes(100)[2], 5);
}

TEST_F(PrimesTest, RndmVal1){

    ASSERT_EQ(pp.calculateAndPrintPrimes(100)[13], 43);
}

TEST_F(PrimesTest, RndmVal2){

    ASSERT_EQ(pp.calculateAndPrintPrimes(100)[20], 73);
}

TEST_F(PrimesTest, RndmVal3){

    ASSERT_EQ(pp.calculateAndPrintPrimes(100)[24], 97);
}



int main() {

    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
