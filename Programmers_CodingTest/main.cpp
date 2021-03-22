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
//#include "String_Handling.h"
//#include "ChooseTwoNumber.h"
//#include "New_ID_Recommendation.h"
//#include "K's Number.h"
//#include "Phoneketmon.h"
//#include "Gem_Shopping.h"
//#include "String_Random_Sort.h"
#include "SportWear.h"
#include "typeinfo"


template <typename T>
void PrintValue(T param)
{
    for(auto item : param){
        cout << item << endl;
    }
}




int main(int argc, const char* arg[]) {

    
    vector<int> lost1({2, 4});
    vector<int> reserve1({2, 3, 5});

    
    vector<int> lost2({2, 4});
    vector<int> reserve2({3});

    
    vector<int> lost3({3});
    vector<int> reserve3({1});
    
    
    cout << solution(5, lost1, reserve1);
    cout << solution(5, lost2, reserve2);
    cout << solution(3, lost3, reserve3);
    
    
    return 0;
}
