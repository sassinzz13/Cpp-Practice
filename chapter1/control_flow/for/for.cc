#include <iostream>

// rewriting the while loop logic with a for
int forLoopExample(){
    int sum = 0;
    for(int val = 1; val <= 10; ++val){
        sum += val; //sum = sum + val
    }
    std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}

int forLoopToSumNumbers(){
   int sumThisNumber = 10;
   int reachThisNumber = 100;
   std::cout << sumThisNumber << std::endl;
   for(sumThisNumber; sumThisNumber <= reachThisNumber; sumThisNumber++){
    sumThisNumber+=reachThisNumber;
   }
   return 0;
}

int forLoopThatTakesTwoIntegerAndPrintsTheirRange(){
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    for(n1; n1 <= n2; n1++){
        std::cout << n1 << std::endl;
    }
    return 0;
}



int main(){
    // forLoopExample();
    // forLoopToSumNumbers();
    // forLoopThatTakesTwoIntegerAndPrintsTheirRange();   
}