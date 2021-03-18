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
//#include "New_ID_Recommendation.h"
#include "K's Number.h"


int main(int argc, const char * arg[]) {

    vector<int> array({1, 5, 2, 6, 3, 7, 4});
    vector<vector<int>> commands({{2, 5, 3}, {4, 4, 1}, {1, 7, 3}});
    
    //리턴 값 [5, 6, 3]
    
    vector<int> answer = solution(array, commands);
    
    for (int item : answer) {
        cout << item << '\n';
    }
    
    return 0;
}
