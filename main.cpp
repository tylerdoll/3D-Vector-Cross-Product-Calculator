//
//  main.cpp
//  Cross Product Calculator
//
//  Created by Tyler Doll on 9/28/15.
//  Copyright © 2015 Tyler Doll. All rights reserved.
//

#include "Vector.hpp"
#include "utilities.hpp"


int main(int argc, const char * argv[]) {
    // Loop through over and over until user terminates program
    for (;;) {
        Vector a, b, c;
        
        // Get vector a
        printLn("Vector a");
        a.askForValues();
        printLn("");
        
        // Get vector b
        printLn("Vector b");
        b.askForValues();
        printLn("");
        
        
        // Print vectors
        printLn("Vector a = " + a.toString());
        printLn("Vector b = " + b.toString());
        
        // Cross vectors and print result
        c = a.crossWith(b);
        printLn("a x b = " + c.toString());
        printLn("");
        printLn("------------------------------------");
        printLn("");
    }
    
    return 0;
}
