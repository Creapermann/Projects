#include <iostream>
#include "primes.hpp"

void printPrimeVec(TIntVec);

int main(){
    std::cout << "Top: " << std::endl;
    int n;
    std::cin >> n;

    GetPrimes gp;
    TIntVec resPrimeVec = gp.findAllPrimes(n);

    printPrimeVec(resPrimeVec);

    return 1;
}


void printPrimeVec(TIntVec primeVec){
    for(auto i : primeVec){
        if(i != -1)
            std::cout << i << " ";
    }
    std::cout << std::endl;
}
