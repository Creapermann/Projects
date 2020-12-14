#include <iostream>
#include <vector>

#include "primes.hpp"

PrintPrimes::PrintPrimes(){
}


TIntVec PrintPrimes::calculateAndPrintPrimes(int amount){

    std::vector<int> numVec;

    for(int i = 2; i < amount; i++){
        if(i == 2 || i == 3 || i == 5 || i == 7){
            std::cout << i << " ";
            numVec.emplace_back(i);
        }
        if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0){
            std::cout << i << " ";
            numVec.emplace_back(i);
        }
    }
    std::cout << std::endl;
    return numVec;
}

int PrintPrimes::a(){
    return 1;
}


