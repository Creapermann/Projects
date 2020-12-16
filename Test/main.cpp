#include <iostream>
#include <vector>
#include <algorithm>

using TIntVec = std::vector<int>;

int main()
{
    //Filling up The Vector
    int n;
    std::cout << "Top: " << std::endl;
    std::cin >> n;
    TIntVec baseVec(n - 1);

    int a = 2;
    std::generate(baseVec.begin(), baseVec.end(), [&a](){ return a++; });



    int pIndex = 0;
    //Finding Primes
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

    for(auto i : baseVec){
        if(i != -1)
            std::cout << i << " ";
    }

    std::cout << std::endl;

    return 0;
}
