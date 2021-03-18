//
//  K's Number.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 19/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

//프로그래머스
//Level1 - 정렬 - K번째 수

//#include "K's Number.h"
//
//
//vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//    vector<int> answer;
//    
//    vector<int> caculateArray;
//    
//    for (vector<int> innerCmd : commands) {
//        caculateArray = array;
//        for (int i = 0; i < innerCmd[0] - 1; i++) {
//            caculateArray.erase(caculateArray.begin());
//        }
//        caculateArray.erase(caculateArray.begin() + (innerCmd[1] - (innerCmd[0] - 1)), caculateArray.end());
//        sort(caculateArray.begin(), caculateArray.end());
//        answer.push_back(caculateArray[innerCmd[2] - 1]);
//    }
//    
//    return answer;
//}
//
//#include "K's Number.h"
//
//
//int main(int argc, const char * arg[]) {
//
//    vector<int> array({1, 5, 2, 6, 3, 7, 4});
//    vector<vector<int>> commands({{2, 5, 3}, {4, 4, 1}, {1, 7, 3}});
//    
//    //리턴 값 [5, 6, 3]
//    
//    vector<int> answer = solution(array, commands);
//    
//    for (int item : answer) {
//        cout << item << '\n';
//    }
//    
//    return 0;
//}
