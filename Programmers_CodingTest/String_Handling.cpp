//
//  String_Handling.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 15/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

#include "String_Handling.h"

//0A12

bool solution(string s)
{
    bool answer = true;
    
    if(s.length() == 4 or s.length() == 6){
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < 26; j++) {
                if (s[i] == 65 + j or s[i] == 97 + j) {
                    answer = false;
                }
            }
        }
    }
    else{
        answer = false;
    }
    
    return answer;
}
