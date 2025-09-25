#include <iostream>


int theWhileLoopExample(){
    int sum = 0, val = 1;

    // keep executing the while as long as val is less than or equal to 10
    while(val <= 10){
        sum+= val; // assigns sum + val to sum
        ++val;    // add 1 to val
    }
    std::cout << " sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0; 

    /*
    A while executes by (alternately) testing the condition and executing the associated 
    statement until the condition is false

    A condition is an expression that yields a
    result that is either true or false

    Writing ++val is the same as writing val = val + 1
    */
}

int whileLoopToSumNumbers(){
   int sumThisNumber = 10;
   int reachThisNumber = 100;
//    int placeHolder = 0;
   while(sumThisNumber <= reachThisNumber){
    sumThisNumber += reachThisNumber;
   }
   std::cout << sumThisNumber << std::endl;
   return 0;
}

int whileLoopThatTakesTwoIntegerInputsAndPrintsTheirRanges(){
    int n1 = 0, n2 = 0;
    std::cin >> n1 >> n2;
    while(n1 <= n2){
        std::cout << n1 << std::endl;
        ++n1;
    }
    return 0;
}



int main(){
    // theWhileLoopExample();
    whileLoopToSumNumbers();
    // whileLoopThatTakesTwoIntegerInputsAndPrintsTheirRanges();
}