//
//  Features_Development.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 10/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

//프로그래머스 코딩 테스트 연습
//스택&큐->기능개발

#include "Features_Development.h"

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int completeCount = 0;
    
    while (true) {
        
        for (int i = 0; i < progresses.size(); i++) {
            progresses[i] += speeds[i];
        }
        for (int i = 0; i < progresses.size(); i++) {
            if (progresses[i] >= 100) {
                completeCount++;
                progresses.erase(progresses.begin() + i);
                speeds.erase(speeds.begin() + i);
                i--;
            }
            else{
                break;
            }
        }
        
        if (completeCount > 0) {
            answer.push_back(completeCount);
            completeCount = 0;
        }
        if (progresses.size() == 0) {
            break;
        }
        
    }
    
    return answer;
}


//메인 함수에서 실행 할 부분
//for main
//vector<int> prog({93, 30, 55});
//vector<int> spd({1, 30, 5});
//
//vector<int> result = solution(prog, spd);
//
//for (int i : result) {
//    cout << i << endl;
//}
