#include <iostream>

// rewriting the while loop logic with a for
int forLoopExampleInContextOfTheWhileLoopEarlier(){
    int sum = 0;
    for(int val = 1; val <= 10; ++val){
        sum += val; //sum = sum + val
    }
    std::cout << "sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}



int main(){
    forLoopExampleInContextOfTheWhileLoopEarlier();
}