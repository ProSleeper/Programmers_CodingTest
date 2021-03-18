//
//  main.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 10/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

//#include <iostream>
//#include "Features_Development.h"
//#include "H_Index.h"
//#include "BFS.h"
//#include "SpeedTrap.h"
//#include "Integer_Triangle.h"
//#include "More_Spicy.h"
//#include "String_Handling.h"
//#include "ChooseTwoNumber.h"
#include "New_ID_Recommendation.h"


int main(int argc, const char * arg[]) {

    string new_id = "...!@BaT#*..y.abcdefghijklm";
    string new_id2 = "z-+.^.";
    string new_id3 = "=.=";
    string new_id4 = "123_.def";
    string new_id5 = "abcdefghijklmn.p";
    
    cout << solution(new_id);
    cout << solution(new_id2);
    cout << solution(new_id3);
    cout << solution(new_id4);
    cout << solution(new_id5);
    
    return 0;
}
