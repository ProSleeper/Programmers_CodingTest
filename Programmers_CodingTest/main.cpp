//
//  main.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 10/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

#include <iostream>
//#include "Features_Development.h"
//#include "H_Index.h"
//#include "BFS.h"
//#include "SpeedTrap.h"
//#include "Integer_Triangle.h"
//#include "More_Spicy.h"
#include "String_Handling.h"

void PrintBool(bool peko)
{
    if (peko) {
        cout << "true";
        return;
    }
    cout << "false";
}

int main(int argc, const char * arg[]) {

    //string str  = "a234";
    //string str2 = "1234";
    string str3 = "0A12";

    
    
    
    //PrintBool(solution(str));
    //PrintBool(solution(str2));
    PrintBool(solution(str3));

    
    return 0;
}
