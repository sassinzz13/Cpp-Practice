#include <iostream>
#include "sales_item.h"

int exampleOfAMemberFunction(){
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    // first check that item1 and item2 represent the same book
    if(item1.isbn() == item2.isbn()){
        std::cout << item1 + item2 << std::endl;
        return 0; // indicate success
    }else{
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1; // indicate failure
    }
}

int countHowManyTransactionsAndCountsOccur(){
    Sales_item currItem, nextItem;
    // take input

    //if the input is equal to the current Item
    if(std::cin >> currItem){ 
        int count = 1;
        // compare two isbn's
        if(nextItem.isbn() == currItem.isbn()){
            ++count; // same ISBN → increment
        }else{
            std::cout << currItem.isbn() << " occurs " << count << " times\n";
            currItem = nextItem;
            count = 1;
        }
        std::cout << currItem.isbn() << " occurs " << count << " times\n";
    }
    return 0;
}

int main(){
    countHowManyTransactionsAndCountsOccur();
}