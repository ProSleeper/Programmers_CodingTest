//
//  ChooseTwoNumber.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 16/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

//프로그래머스
//두 개 뽑아서 더하기


#include "ChooseTwoNumber.h"

vector<int> solution(vector<int> numbers)
{
    vector<int> answer;
    
    for (int i = 0; i < numbers.size() - 1; i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            answer.push_back(numbers[i] + numbers[j]);
        }
    }
    
    sort(answer.begin(), answer.end());
    
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}
