//
//  H_Index.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 10/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

//프로그래머스 코딩 테스트 연습
//정렬-> H-Index


#include "H_Index.h"
//
//int solution(vector<int> citations) {
//    int answer = 0;
//    int hUpperCount = 0;
//    int hLowwerCount = 0;
//    
//    int startValue = int(citations.size());
//    sort(citations.begin(), citations.end(), [](int f, int s) -> bool{ return f > s; });
//    
//    for (int i = startValue; i >= 0; i--) { //여기서 i는 인덱스가 아닌 논문의 수
//        for (int j = 0;  j < citations.size(); j++) {
//            if (citations[j] >= i) {
//                hUpperCount++; // h이상 인용된 논문의 숫자 "h"
//            }
//            else{
//                hLowwerCount++;
//            }
//        }
//        
//        if (hUpperCount >= i and hLowwerCount <= i) {
//            answer = i;
//            break;
//        }
//        else{
//            hUpperCount = 0;
//            hLowwerCount = 0;
//        }
//    }
//    
//    // 0, 1, 3, 5, 6
//    // {6, 5, 3, 1, 0}
//    // [0, 1, 1, 1, 1, 3, 3, 4] 답은 1
//    
//    
//    // [0, 1, 1, 1, 1, 3, 3, 4]
//    // h=4 cond1 false, cond2 false
//    // h=3 cond1 true, cond2 false
//    // h=2 cond1 true, cond2 false
//    // h=1 cond1 true, cond2 true
//    
//    // {0, 1, 3, 5, 6}
//    // h=5 cond1 false, cond2 true;
//    // h=4 cond1 false, cond2 true;
//    // h=3 cond1 true, cond2 true;
//    // h=2 cond1 true, cond2 true;
//    // h=1 cond1 true, cond2 true;
//    // h=0 cond1 true, cond2 false;
//    
//    
//    return answer;
//}

//메인 함수에서 실행 할 부분
//vector<int> citations({3, 0, 6, 1, 5});
//vector<int> citations({0, 1, 1, 1, 1, 3, 3, 4});
//vector<int> citations({0, 0, 0, 0});
//cout << solution(citations);
