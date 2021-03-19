////
////  Phoneketmon.cpp
////  Programmers_CodingTest
////
////  Created by kyw on 19/03/2021.
////  Copyright © 2021 kyw. All rights reserved.
////

//프로그래머스 코딩 테스트 연습
//Level 1 폰켓몬

#include "Phoneketmon.h"


int solution(vector<int> nums)
{
    int answer = 0;
    map<int, int> monsterMap;

    for(int item : nums){
        int temp = item;
        monsterMap.insert({ temp, 0 });
    }


    answer = (nums.size() / 2) > monsterMap.size() ? monsterMap.size() : (nums.size() / 2);

    return answer;
}


