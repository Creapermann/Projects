#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

#include "primes.hpp"


GetPrimes::GetPrimes(){};



bool checkIfPrime(int a);           //Function Prototype

TIntVec GetPrimes::findAllPrimes(const int n){


    //Filling up The Vector
    TIntVec baseVec(n - 1);

    int a = 2;
    std::generate(baseVec.begin(), baseVec.end(), [&a](){ return a++; });



    //Finding Primes
    int pIndex = 0;
    bool allFound = false;
    while(allFound == false){
        int p = baseVec[pIndex];

        for(int i = (pIndex+1); i < n; i++){
            if(baseVec[i] % p == 0){
                baseVec[i] = -1;
            }
        }

        for(int i = pIndex + 1; i < n; i++){
            if(baseVec[i] != -1){
                pIndex = i;
                break;
            }
        }

        allFound = true;
        for(int i = pIndex + 1; i < n; i++){
            if(baseVec[i] != -1){
                allFound = false;
            }
        }
    }

    return baseVec;
}
