//
//  More_Spicy.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 11/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

#include "More_Spicy.h"
#include <algorithm>


//내가 하는 테스트 케이스 통과는 다 하는데 뭐가 문제인지 모르겠다.

int solution(vector<int> scoville, int K) {
    int answer = 0;
    int temp = 0;
    
    sort(scoville.begin(), scoville.end());
    if (K == 0) {
        return 0;
    }
    
    
    for (int i = 0; i < scoville.size() - 1; i++) {
        if (scoville[i] > scoville[i + 1]) {
            temp = scoville[i];
            scoville[i] = scoville[i + 1];
            scoville[i + 1] = temp;
        }
        temp = scoville[i] + (scoville[i + 1] * 2);
        scoville.erase(scoville.begin());
        scoville[i] = temp;
        i--;
        answer++;
        
        if (scoville.size() < 2 and scoville[i + 1] >= K) {
            return answer;
        }
        if (scoville[i + 1] >= K and scoville[i + 2] >= K) {
            return answer;
        }
    }
    
    return -1;
}
