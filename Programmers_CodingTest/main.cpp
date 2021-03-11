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
#include "Integer_Triangle.h"


int main(int argc, const char * argv[]) {

    
    vector<vector<int>> triangle({{7}, {3, 8}, {8, 1, 0}, {2, 7, 4, 4}, {4, 5, 2, 6, 5}});
    
    cout << solution(triangle);
    
    
    return 0;
}

//{{-2,-1}, {1,2},{-3,0}}
//{{0,0},}
//{{0,1}, {0,1}, {1,2}}
//{{0,1}, {2,3}, {4,5}, {6,7}}
//{{-20,-15}, {-14,-5}, {-18,-13}, {-5,-3}}
//{{-20,15}, {-14,-5}, {-18,-13}, {-5,-3}}
//{{-20,15}, {-20,-15}, {-14,-5}, {-18,-13}, {-5,-3}}
//{{-7,0}, {-6,-4}, {-5,-3}, {-3,-1}, {-1,4}, {1,2}, {3,4}}
//{{-5,-3}, {-4,0}, {-4,-2}, {-1, 2}, {0,3}, {1,5}, {2,4} }
//{{0,1}, {1,2}, {2,3} ,{3,4}, {5,4}, {5,6}, {6,7} , {8,7}, {8,9} ,{9,10}, {10,11}, {11,12}, {12,13}, {13,14} , {14,15} }
