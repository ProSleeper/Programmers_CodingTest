////
////  String_Random_Sort.cpp
////  Programmers_CodingTest
////
////  Created by kyw on 19/03/2021.
////  Copyright © 2021 kyw. All rights reserved.
////



//#include "String_Random_Sort.h"

//1차 풀이 테스트 케이스는 통과. 실제 채점에서 실패
//vector<string> solution(vector<string> strings, int n)
//{
//	vector<string> answer;
//	string tempString;
//
//	for(int i = 0; i < strings.size(); i++)		{
//		for(int j = 0; j < strings.size() - 1 - i; j++){
//		
//			if(strings[j][n] > strings[j + 1][n])	{
//				tempString = strings[j];
//				strings[j] = strings[j + 1];
//				strings[j + 1] = tempString;
//			}
//			else if(strings[j][n] == strings[j + 1][n])	{
//				for(int k = 0; k < strings[j].size(); k++)		{
//					if(strings[j][k] > strings[j + 1][k])	{
//						tempString = strings[j];
//						strings[j] = strings[j + 1];
//						strings[j + 1] = tempString;
//					}
//				}
//			}
//		}
//	}
//
//
//
//	return strings;
//}


//2차 풀이
//여기서는 비교한 인덱스n의 문자가 서로 같을 때는
//문자열을 비교해서 사전순으로 작은 순서대로 출력함
//예를 들어서 "abce"와 "abcd"는 abc는 모두 같으므로 무시하고 마지막 d와 e를 비교할때 d보다 e가 아스키 코드 값이(d는 99, e는 100) 이기 때문에 더 d를 더 작다고 판단해서 정렬하게 함
//vector<string> solution(vector<string> strings, int n)
//{
//	vector<string> answer;
//	string tempString;
//
//	for(int i = 0; i < strings.size(); i++)		{
//		for(int j = 0; j < strings.size() - 1 - i; j++){
//		
//			if(strings[j][n] > strings[j + 1][n])	{
//				tempString = strings[j];
//				strings[j] = strings[j + 1];
//				strings[j + 1] = tempString;
//			}
//			else if(strings[j][n] == strings[j + 1][n])	{
//				if(strings[j] > strings[j + 1])
//				{
//					tempString = strings[j];
//					strings[j] = strings[j + 1];
//					strings[j + 1] = tempString;
//				}
//			}
//		}
//	}
//
//	return strings;
//}


//메인함수 부분
//template <typename T>
//void PrintVector(T pVector)
//{
//    for(auto item : pVector){
//        cout << item << endl;
//    }
//}
//
//int main(int argc, const char* arg[]) {
//
//
//
//    vector<string> strings({ "sun", "bed", "car" });
//    vector<string> strings2({ "abce", "abcd", "cdx" });
//
//    PrintVector(solution(strings, 1));
//    PrintVector(solution(strings2, 2));
//
//
//
//    return 0;
//}