//
//  Integer_Triangle.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 11/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

//프로그래머스 코딩 테스트 연습
//동적 계획법 -> 정수 삼각형
//트리 구조로 만들어진 삼각형에서 최대값을 구하는 문제

#include "Integer_Triangle.h"


//동적 계획법 혹은 동적 프로그래밍으로 불리는 방법으로 해결
//"동적 계획법이라는 것은 큰 문제를 한번에 해결하기 힘들 때 작은 부분으로 나누어 푸는 기업" 이라고 함
//개인적으로 이해 했을때는 위의 정의보다는 무식하게 계산했을 때는 반복적으로 계산되는 부분을 딱 한번씩만 계산하도록 해서 큰 문제를 최대한 빠르게 푸는 문제라고 생각됨.
//이것만 제대로 알고 있어도 웬만한 것들은 처리 가능할듯!

int solution(vector<vector<int>> triangle) {
    int answer = 0;
    
    int largeNumber = 0;
    
    //vector로 표현된 삼각형(트리구조)에서 최대값을 구하는 방식
    //제일 하단에서부터 상향식(bottom-up)으로 구해서 모든 노드를 거치면서 계산을 하지만 딱 한번만 계산을 하도록 반복문 구성
    for (int i = int(triangle.size() - 1); i >= 0; i--) {
        for (int j = 0; j < triangle[i].size() - 1; j++) {
            largeNumber = triangle[i][j] > triangle[i][j + 1] ? triangle[i][j] : triangle[i][j + 1];
            triangle[i - 1][j] += largeNumber;
        }
    }
    
    answer = triangle[0][0];
    
    return answer;
}


