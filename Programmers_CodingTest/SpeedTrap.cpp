//
//  SpeedTrap.cpp
//  Programmers_CodingTest
//
//  Created by kyw on 10/03/2021.
//  Copyright © 2021 kyw. All rights reserved.
//

#include "SpeedTrap.h"


//int solution(vector<vector<int>> routes) {
//    int answer = 0;
//    
//    //{{-20,15}, {-14,-5}, {-18,-13}, {-5,-3}}
//    
//    //[[0,1], [1,2], [2,3] ,[3,4], [5,4], [5,6], [6,7], [8,7], [8,9] ,[9,10], [10,11], [11,12], [12,13], [13,14] , [14,15] ]
//    
////    for (int i = 0; i < routes.size() - 1; i++) {
////        if (routes[i][0] > routes[i][1]) {
////            VectorSwap(&routes[i]);
////        }
////        for (int j = 1; j < routes.size(); j++) {
////            if (routes[j][0] > routes[j][1]) {
////                VectorSwap(&routes[j]);
////            }
////            //겹치는지 안겹치는지 구함
////            if (routes[i][0] <= routes[j][1] and routes[i][1] >= routes[j][0]) {
////                routes.erase(routes.begin() + j);
////                j--;
////            }
////        }
////        answer++;
////
////    }
//    //다시 생각해서 해봅시다.
//    return answer;
//}
//
//void VectorSwap(vector<int>* routes)
//{
//    int temp = 0;
//    temp = (*routes)[0];
//    (*routes)[0] = (*routes)[1];
//    (*routes)[1] = temp;
//}

//메인함수에 쓸 부분
//vector<vector<int>> NumberOfVehicles({{-20,15}, {-14,-5}, {-18,-13}, {-5,-3}});
//vector<vector<int>> NumberOfVehicles({{-20,15}, {-14,-5}, {-18,-13}, {-5,-3}});
//{{0,2},{2,3},{3,4},{4,6}} 답은 2
//추가로 아래 부분들은 질문게시판 내용들 모았습니다.
//cout << solution({ {-20, 15}, {-14, -5}, {-18, -13}, {-5, -3} }); //2
//cout << endl;
//cout << solution({ {-2, -1}, {1, 2}, {-3, 0} });//2
//cout << endl;
//cout << solution({ {0, 0}, });//1
//cout << endl;
//cout << solution({ {0, 1}, {0, 1}, {1, 2} });//1
//cout << endl;
//cout << solution({ {0, 1}, {2, 3}, {4, 5}, {6, 7} });//4
//cout << endl;
//cout << solution({ {-20, -15}, {-14, -5}, {-18, -13}, {-5, -3} });//2
//cout << endl;
//cout << solution({ {-20, 15}, {-20, -15}, {-14, -5}, {-18, -13}, {-5, -3} });//2
//cout << endl;
//cout << solution({ {2,2},{0,1},{-10,9} });//2
//cout << endl;
//cout << solution({ {-7, 0}, {-6, -4}, {-5, -3}, {-3, -1}, {-1, 4}, {1, 2}, {3, 4} });//4
//cout << endl;
//cout << solution({ {-5, -3}, {-4, 0}, {-4, -2}, {-1, 2}, {0, 3}, {1, 5}, {2, 4} });//2
//cout << endl;
//cout << solution({ {0, 1}, {1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}, {6, 7}, {7, 8}, {8, 9}, {9, 10}, {10, 11}, {11, 12}, {12, 13}, {13, 14}, {14, 15} });//8
//cout << endl;
//cout << solution({ {0, 12}, {1, 12}, {2, 12}, {3, 12}, {5, 6}, {6, 12}, {10, 12} });//2
//cout << endl;
//cout << solution({ {-191, -107}, { -184,-151 }, { -150,-102 }, { -171,-124 }, { -120,-114 } }); // 2
//cout << endl;
//cout << solution({{0,1}, {1,2}, {2,3} ,{3,4}, {5,4}, {5,6}, {6,7} , {8,7}, {8,9} ,{9,10}, {10,11}, {11,12}, {12,13}, {13,14} , {14,15} }); // 8
//cout << endl;
//
//
//cout << solution(NumberOfVehicles);
