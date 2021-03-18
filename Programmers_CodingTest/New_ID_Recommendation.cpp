//
//  New_ID_Recommendation.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 19/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

//프로그래머스 코딩 테스트 연습
//Level 1 신규 아이디 추천
//아마 문자열 다루기의 한 부분인듯
//사용하는 함수들이 다 문자열 관련된 부분

#include "New_ID_Recommendation.h"


string solution(string new_id)
{
    string answer = "";
    
    //Step 1
    for (int i = 0; i < new_id.size(); i++) {
    
        if (isalpha(new_id[i]) and isupper(new_id[i])) {
            new_id[i] =  tolower(new_id[i]);
        }
    }
    
    
    
    //Step 2
    for (int i = 0; i < new_id.size(); i++) {
        
        if (isalpha(new_id[i]) and islower(new_id[i])) {
            continue;
        }
        
        if (isdigit(new_id[i])) {
            continue;
        }
        
        if (new_id[i] == '-') {
            continue;
        }
        
        if (new_id[i] == '_') {
            continue;
        }
        
        if (new_id[i] == '.') {
            continue;
        }
        new_id.erase(i,1);
        i--;
    }
    
    
    for (int i = 0; i < new_id.size(); i++) {
        //Step 3
        if (i > 0 and new_id[i - 1] == '.' and new_id[i] == '.') {
            new_id.erase(i, 1);
            i--;
        }
    }
    
    //Step 4
    if(new_id[0] == '.')
    {
        new_id.erase(0, 1);
    }
    else if (new_id[new_id.size() - 1] == '.')
    {
        new_id.erase(new_id.size() - 1, 1);
    }
    
    //Step 5
    if (new_id.size() == 0) {
        new_id = "a";
    }
    
    //Step 6
    if (new_id.size() > 15) {
        new_id.resize(15);
    }
    if (new_id[new_id.size() - 1] == '.')
    {
        new_id.erase(new_id.size() - 1, 1);
    }
    
    //Step 7
    if (new_id.size() <= 2) {
        int lenth = int(new_id.size());
        for (int i = 0; i < (3 - lenth); i++) {
            new_id = new_id + new_id[new_id.size() - 1];
        }
    }

    answer = new_id;
    return answer;
}
