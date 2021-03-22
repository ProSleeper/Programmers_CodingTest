//
//  Gem_Shopping.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 19/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

#include "Gem_Shopping.h"


//1차 풀이 정확성은 통과, 효율성 실패
//bool GemMapCheck(map<string, int>* gemMap)
//{
//    for (pair<string, int> data : *gemMap) {
//        if (data.second == -1) {
//            return false;
//        }
//    }
//    return true;
//}
//
//vector<int> solution(vector<string> gems) {
//    vector<int> answer;
//    map<string, int> gemMap;
//
//    int current = 0;
//
//    for (string gem : gems) {
//        gemMap.insert({gem, -1});
//    }
//
//
//    //pair<iterator,bool> 형태로 반환 됨
//    //iterator는 first, bool값은 second
//    //second는 gem삽입시 중복데이터를 검사해서 중복이면 false 중복이 아니고 삽입 가능시 true를 반환해준다.
//    //iterator는 vector<int> 형태의 컨테이너라면 vector<int>::iterator it;
//
//    int minValue = 0;
//    int maxValue = 0;
//
//
//    for (string gem : gems) {
//
//        gemMap.find(gem)->second = current;
//        minValue = 100000;
//        maxValue = -1;
//
//        if(GemMapCheck(&gemMap)){   //GemMapCheck에서 false가 나오는 의미는 아직 중복되지 않는 원소중에서 못 찾은 원소가 존재 한다는 뜻
//            for (pair<string, int> data : gemMap) {
//
//                //여기서 second는 배열의 인덱스
//                if (minValue > data.second) {
//                    minValue = data.second;
//                }
//
//                if (maxValue < data.second) {
//                    maxValue = data.second;
//                }
//            }
//
//            if (answer.size() == 0) {
//                answer.push_back(maxValue - minValue);
//                answer.push_back(minValue + 1);
//                answer.push_back(maxValue + 1);
//
//            }
//            else{
//                if (answer[0] > (maxValue - minValue)) {
//                    answer[0] = maxValue - minValue;
//                    answer[1] = minValue + 1;
//                    answer[2] = maxValue + 1;
//                }
//            }
//        }
//        current++;
//    }
//    answer.erase(answer.begin());
//    return answer;
//}

//2차 풀이 모르겠다.... 후아 진짜 모르겠다.. 그래도 계속 해보자
//2차 풀이의 개념이 잘못 됐다는 생각을 가지게 됨. 21/03/22 다른 방법으로 3차풀이 ㄱㄱ
//bool GemMapCheck(map<string, int>* gemMap)
//{
//    for (pair<string, int> data : *gemMap) {
//        if (data.second == -1) {
//            return false;
//        }
//    }
//    return true;
//}
//
//vector<int> solution(vector<string> gems) {
//    vector<int> answer;
//    vector<string> inputVector;
//    map<string, int> gemMap;
//    map<string, int> inputMap;
//    vector<vector<int>> store;
//
//
//
//    for (string gem : gems) {
//        gemMap.insert({gem, -1});
//    }
//
//    int minValue = 100000;
//    int maxValue = 0;
//    int front   = 0;
//    int end     = 0;
//    int count   = 0;
//
//
//    bool exact = false;
//    while (true) {
//        if (end >= gems.size()) {
//            break;
//        }
//        pair<map<string, int>::iterator, bool> currentValue = inputMap.insert({gems[end], end});
//        if (currentValue.second) {
//            count++;    //inputmap의 카운트를 세서 현재 확인 되어 지는 요소의 값과 중복제거된 요소의 값과 비교
//            inputVector.push_back(gems[0]);
//        }
//        else{
//            currentValue.first->second = end;
//            inputVector.push_back(gems[0]);
//        }
//
//
//
//        if (count == gemMap.size()) {   //중복되지 않은 원소를 가진 map의 크기 이상이어야 최소한의 정답 조건을 만족함
//            //current - minValue;
//            if (gemMap.size() == (end - front + 1)) {
//                answer.push_back(front + 1);
//                answer.push_back(end + 1);
//                break;
//            }
//            else{
//                for (int i = end - front; i >= gemMap.size(); i--) {
//                    string zeroValue = *(inputVector.begin());
//                    inputVector.erase(inputVector.begin());
//                    front++;
//
//                    for (auto item : inputVector) {
//                        if (item == zeroValue) {
//                            vector<int> temp;
//                            temp.push_back(end - front + 1);
//                            temp.push_back(front + 1);
//                            temp.push_back(end + 1);
//                            store.push_back(temp);
//                            break;
//                        }
//                    }
//                }
//
//            }
//        }
//
//        end++;
//
////        if (current >= gems.size()) {
////           break;
////        }
//
//
//
////        pair<map<string, int>::iterator, bool> currentValue = gemMap.insert({gem, current});
////                if (!(currentValue.second)) {
////                    currentValue.first->second = current;
////                    front = current;
////                }
//
//        //        minValue = 100000;
//        //        maxValue = -1;
//        //        if (!exact) {
//        //            exact = GemMapCheck(&gemMap);
//        //        }
//
//
//                //
//        //        //중복되지 않은 원소들을 1개 이상씩 다 찾았을 때 시작
//        //        if(exact){
//        //            for (pair<string, int> data : gemMap) {
//        //                    //여기서 second는 배열의 인덱스
//        //                if (minValue > data.second) {
//        //                    minValue = data.second;
//        //                }
//        //
//        //                if (maxValue < data.second) {
//        //                    maxValue = data.second;
//        //                }
//        //            }
//        //            if (temp.size() == 0) {
//        //                temp.push_back(maxValue - minValue);
//        //                temp.push_back(minValue + 1);
//        //                temp.push_back(maxValue + 1);
//        //
//        //            }
//        //            else{
//        //                if (temp[0] > (maxValue - minValue)) {
//        //                    temp[0] = maxValue - minValue;
//        //                    temp[1] = minValue + 1;
//        //                    temp[2] = maxValue + 1;
//        //                }
//        //            }
//        //        }
//
//    }
//    int tempMin = 0;
//    int start = 0;
//    int back = 0;
//
//    for (auto item : store) {
//        if (tempMin < item[0]) {
//            tempMin = item[0];
//            start = item[1];
//            back = item[2];
//        }
//    }
//
//    answer.push_back(start);
//    answer.push_back(back);
//
//    //answer.push_back(temp[1]);
//    //answer.push_back(temp[2]);
//    return answer;
//}


//3차 풀이
//정답! 다만 조금 더 개선할 여지는 있어보이고
//투포인터 알고리즘을 이용해서 풀었고 백준에서 나오는 다른 투포인터 문제보다 좀 더 어렵긴 하다.
//투포인터 알고리즘은 1차원으로 되어있는 정말 큰 배열이나 리스트에서 사용하기 좋을 듯
//vector<int> solution(vector<string> gems) {
//    vector<int> answer;
//    map<string, int> gemsMap;
//    map<string, vector<int>> checkGems;
//    vector<string> storeGems;
//
//
//
//    for (string gem : gems) {
//        gemsMap.insert({gem, -1});
//    }
//
//    int front = 0;
//    int back = 0;
//
//    //idx 0은 크기, 1은 front, 2는 back값 저장할 부분
//    answer.push_back(100000);
//    answer.push_back(0);
//    answer.push_back(0);
//    //vector<int>* idx = nullptr;
//
//
//    while (true) {
//
//        if (gems.size() < back and checkGems.find(gems[back]) == checkGems.end()) {    //find해서 발견하면 해당iterator를 반환 못 찾으면 end를 반환함
//
//            //idx = new vector<int>();
//            vector<int> idx;
//            checkGems.insert({gems[back],
//                idx});
//            checkGems[gems[back]].push_back(back);
//            storeGems.push_back(gems[back]);
//            back++;
//        }
//        else{   //이 부분으로 왔다는 것은 checkGems에서 해당 key를 찾았다는 것이고
//                //이제부터는 중복되는 부분이라는 것
//            if (checkGems.size() == gemsMap.size()) {
//                //값 저장 부분
//                if (answer[0] > back - front) {
//                    answer[0] = back - front;
//                    answer[1] = front + 1;
//                    answer[2] = back;
//                }
//                checkGems[storeGems[front]].erase(checkGems[storeGems[front]].begin());
//                if (checkGems[storeGems[front]].size() == 0) {
//                    checkGems.erase(storeGems[front]);
//                }
//                front++;
//            }
//            else{
//                if (back >= gems.size()) {
//                    break;
//                }
//                checkGems[gems[back]].push_back(back);
//                storeGems.push_back(gems[back]);
//                back++;
//            }
//        }
//    }
//
//    answer.erase(answer.begin());
//    return answer;
//}

//메인 함수 부분
//template <typename T>
//void PrintVector(T pVector)
//{
//    for(auto item : pVector){
//        cout << item << endl;
//    }
//}
//
//
//
//
//int main(int argc, const char* arg[]) {
//
//    vector<string> gems1({ "DIA", "RUBY", "RUBY", "DIA", "DIA", "EMERALD", "SAPPHIRE", "DIA" }); //    {3, 7}
//    vector<string> gems2({ "AA", "AB", "AC", "AA", "AC" });    //    {1, 3}
//    vector<string> gems3({ "XYZ", "XYZ", "XYZ" });    //    {1, 1}
//    vector<string> gems4({ "ZZZ", "YYY", "NNNN", "YYY", "BBB" });    //    {1, 5}
//    vector<string> gems5({ "DIA", "EM", "EM", "RUB", "DIA" });    //    {3, 5}
//
//
//    PrintVector(solution(gems1));
//    PrintVector(solution(gems2));
//    PrintVector(solution(gems3));
//    PrintVector(solution(gems4));
//    PrintVector(solution(gems5));
//
//    return 0;
//}

