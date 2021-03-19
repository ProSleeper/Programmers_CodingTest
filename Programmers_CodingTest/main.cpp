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
#include "Gem_Shopping.h"


template <typename T>
void PrintVector(T pVector)
{
    for (auto item : pVector) {
        cout << item << endl;
    }
}




int main(int argc, const char * arg[]) {

    vector<string> gems1({"DIA", "RUBY", "RUBY", "DIA", "DIA", "EMERALD", "SAPPHIRE", "DIA"});
    vector<string> gems2({"AA", "AB", "AC", "AA", "AC"});
    vector<string> gems3({"XYZ", "XYZ", "XYZ"});
    vector<string> gems4({"ZZZ", "YYY", "NNNN", "YYY", "BBB"});
    vector<string> gems5({"DIA", "EM", "EM", "RUB", "DIA"});

    
    //solution(gems1);
    
    PrintVector(solution(gems1));
    PrintVector(solution(gems2));
    PrintVector(solution(gems3));
    PrintVector(solution(gems4));
    PrintVector(solution(gems5));

    
    
//    {3, 7}
//    {1, 3}
//    {1, 1}
//    {1, 5}
//    {3, 5}
   

    
    return 0;
}
