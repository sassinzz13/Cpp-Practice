#include <iostream>
#include "sales_item.h"

int theBookStoreProgram(){
    Sales_item total;  //variable to hold data for the next transaction
    if (std::cin >> total) // takes an input which is total
    {
        Sales_item trans; // hold the running sum
        //read and process the transaction
        while(std::cin >> trans){
            // if were still processing the same book
            if(total.isbn() == trans.isbn()){
                total += trans; // update the running total
            }else{
                // print result for the previous book
                std::cout << total << std::endl;
                total = trans; // total now refers to the next book
            }
        }
        std::cout << total << std::endl; // print the last transaction
    }else{
        // no input! warn the user
        std::cerr << "No data?!" << std::endl;
        return -1; // indicate failure
    }
    return 0;
}

int main(){
    theBookStoreProgram();
}