//
//  SpeedTrap.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 10/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

#include "SpeedTrap.h"


int solution(vector<vector<int>> routes) {
    int answer = 0;
    
    //{{-20,15}, {-14,-5}, {-18,-13}, {-5,-3}}
    
    //[[0,1], [1,2], [2,3] ,[3,4], [5,4], [5,6], [6,7], [8,7], [8,9] ,[9,10], [10,11], [11,12], [12,13], [13,14] , [14,15] ]
    
//    for (int i = 0; i < routes.size() - 1; i++) {
//        if (routes[i][0] > routes[i][1]) {
//            VectorSwap(&routes[i]);
//        }
//        for (int j = 1; j < routes.size(); j++) {
//            if (routes[j][0] > routes[j][1]) {
//                VectorSwap(&routes[j]);
//            }
//            //겹치는지 안겹치는지 구함
//            if (routes[i][0] <= routes[j][1] and routes[i][1] >= routes[j][0]) {
//                routes.erase(routes.begin() + j);
//                j--;
//            }
//        }
//        answer++;
//
//    }
    //다시 생각해서 해봅시다.
    return answer;
}

void VectorSwap(vector<int>* routes)
{
    int temp = 0;
    temp = (*routes)[0];
    (*routes)[0] = (*routes)[1];
    (*routes)[1] = temp;
}
