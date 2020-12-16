#include "primes.hpp"
#include "gtest/gtest.h"

//Test Fxiture
class GetPrimesTest : public testing::Test{
public:
    GetPrimes gp;
};

//METHOD TO CALCULATE THE RIGHT AMOUNT OF PRIMES FROM 2 - n

//Tests
TEST_F(GetPrimesTest, sizeCompare){

    ASSERT_EQ(gp.findAllPrimes(100).size(), 25) << "Expected amount of Primes dont fit!";
}

TEST_F(GetPrimesTest, sizeCompare2){

    ASSERT_EQ(gp.findAllPrimes(200).size(), 46) << "Expected amount of Primes dont fit!";
}

TEST_F(GetPrimesTest, sizeCompare3){

    ASSERT_EQ(gp.findAllPrimes(300).size(), 62) << "Expected amount of Primes dont fit!";
}


TEST_F(GetPrimesTest, FirstVal){

    ASSERT_EQ(gp.findAllPrimes(100)[0], 2) << "First Prime is wrong!!";
}

TEST_F(GetPrimesTest, SecoundVal){

    ASSERT_EQ(gp.findAllPrimes(100)[1], 3) << "Second Prime is wrong";
}



TEST_F(GetPrimesTest, RndmVal1){

    ASSERT_EQ(gp.findAllPrimes(100)[13], 43) << "Random Prime is wrong";
}

TEST_F(GetPrimesTest, RndmVal2){

    ASSERT_EQ(gp.findAllPrimes(100)[20], 73) << "Random Prime is wrong";
}

TEST_F(GetPrimesTest, RndmVal3){

    ASSERT_EQ(gp.findAllPrimes(100)[24], 97) << "Random Prime is wrong";
}



int main() {

    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
