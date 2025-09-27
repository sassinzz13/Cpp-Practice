#include <iostream>
#include "sales_item.h"

int exampleOfUsingClasses(){
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    std::cout << item1 + item2 << std::endl;
    return 0;
}

int summedSeveralTransactionsOfTheISBN(){
    Sales_item firstItem, secondItem;
    std::cin  >> firstItem;
    std::cin  >> secondItem;
    std::cout << "Congratulations on buying both books here is your receipt " << firstItem + secondItem << std::endl;
    return 0;
}



int main(){
    // exampleOfUsingClasses();
    // summedSeveralTransactionsOfTheISBN();
}