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
#include "More_Spicy.h"


int main(int argc, const char * arg[]) {

    
    vector<int> scoville({1, 0});

    //vector<int> scoville({1, 2});
    //vector<int> scoville({1, 1, 1});

    //int k = 7;
    
    cout << solution(scoville, 1);
    
    
    return 0;
}

//vector<int> scoville({1, 1, 1}, 4), 2)
//vector<int> scoville({10, 10, 10, 10, 10}, 100), 4)
//vector<int> scoville({1, 2, 3, 9, 10, 12}, 7), 2)
//vector<int> scoville({0, 2, 3, 9, 10, 12}, 7), 2)
//vector<int> scoville({0, 0, 3, 9, 10, 12}, 7), 3)
//vector<int> scoville({0, 0, 0, 0}, 7), -1)
//vector<int> scoville({0, 0, 3, 9, 10, 12}, 7000), -1)
//vector<int> scoville({0, 0, 3, 9, 10, 12}, 0), 0)
//vector<int> scoville({0, 0, 3, 9, 10, 12}, 1), 2)
//vector<int> scoville({0, 0}, 0), 0)
//vector<int> scoville({0, 0}, 1), -1)
//vector<int> scoville({1, 0}, 1), 1)
