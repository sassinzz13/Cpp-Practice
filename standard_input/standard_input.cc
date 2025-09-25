#include <iostream>

int inputOutputStreamExercise(){
    std::cout << "Hello, World" << std::endl; // prints out Hello world
    int p1 = 0, p2 = 0; // variable declartion of intergers p1 and p2
    std::cin >> p1 >> p2; // takes input for p1 and p2
    std::cout << "the product is " << p1 * p2 << std::endl; // prints out the input
    return 0; // return 0
}

int identifyLegalCommentsExercise(){
    // std::cout << "/*"; legal 
    // std::cout << "*/"; legal
    // std::cout << /*"*/"*/; illegal
    // std::cout << /* "*/" /* "/*" */; illegal
}

int main(){
    // inputOutputStreamExercise();
    // identifyLegalCommentsExercise();
}
