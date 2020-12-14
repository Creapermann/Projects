#include <iostream>
#include "primes.hpp"


int main(){
    std::cout << "Top: " << std::endl;
    int n;
    std::cin >> n;
    PrintPrimes pp;
    pp.calculateAndPrintPrimes(n);

    return 1;
}
