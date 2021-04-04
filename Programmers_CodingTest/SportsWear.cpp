////
////  SportsWear.cpp
////  Programmers_CodingTest
////
////  Created by kyw on 22/03/2021.
////  Copyright © 2021 kyw. All rights reserved.
////
//
//#include "SportsWear.h"
//
//
//int solution(int n, vector<int> lost, vector<int> reserve) {
//    int answer = 0;
//    
//    //기본 상태 0, 잃어버린 상태 1, 여분을 가지고 있는 상태 2, 여분을 가졌을때 잃어버리면 그냥 1 기본상태로 보기
//    vector<int> student(n);
//    for (int lostStudent : lost) {
//        student[lostStudent - 1] = 1;
//    }
//    for (int reserveStudent : reserve) {
//        if (student[reserveStudent - 1] == 1){
//            student[reserveStudent - 1] = 0;
//
//        }
//        else{
//            student[reserveStudent - 1] = 2;
//        }
//    }
//    
//    for (int i = 0; i < student.size(); i++) {
//        if (student[i] == 1) {
//            if (i >= 0 and student[i - 1] == 2) {
//                student[i] = 0;
//                student[i - 1] = 0;
//            }
//            else if(i < (student.size() - 1) and student[i + 1] == 2){
//                student[i] = 0;
//                student[i + 1] = 0;
//            }
//        }
//    }
//    
//    
//    for (int ordinaryStudent : student) {
//        if (ordinaryStudent == 0 or ordinaryStudent == 2) {
//            answer++;
//        }
//    }
//    
//    
//    return answer;
//}
//
//
////메인함수
//int main(int argc, const char* arg[]) {
//
//    vector<int> lost1({ 2, 4 });
//    vector<int> reserve1({ 2, 3, 5 });
//
//
//    vector<int> lost2({ 2, 4 });
//    vector<int> reserve2({ 3 });
//
//
//    vector<int> lost3({ 3 });
//    vector<int> reserve3({ 1 });
//
//
//    cout << solution(5, lost1, reserve1);
//    cout << solution(5, lost2, reserve2);
//    cout << solution(3, lost3, reserve3);
//
//
//    return 0;
//}
