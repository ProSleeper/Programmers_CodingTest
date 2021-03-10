//
//  BFS.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 10/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

//프로그래머스 코딩 테스트 연습
//완전탐색->카펫

#include "BFS.h"


vector<int> solution(int brown, int yellow)
{
    vector<int> answer;
    
    int totalGrid = brown + yellow;
    int gridValue = 0;
    
    for (int i = 3; i < brown + yellow; i++) {
        gridValue = totalGrid / i;
        if (((i - 2) * (gridValue - 2)) == yellow) {
            answer.push_back(i);
            answer.push_back(gridValue);
            break;
        }
    }
    
    sort(answer.begin(), answer.end(), [](int f, int s) -> bool{ return f > s; });
    
    
    return answer;
}

//메인 함수에서 실행 할 부분
//vector<int> arrayNumber = solution(8, 1);
//cout << arrayNumber[0] << arrayNumber[1];
