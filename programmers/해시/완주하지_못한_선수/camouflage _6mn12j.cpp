#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
    map<string, int> closet;  //종류 : 갯수
    int answer = 1;
    
    for(int i =0 ;i < clothes.size();i++)
    {
        closet[clothes[i][1]]++;
    }
    for(auto m : closet)
    {
        answer *= m.second + 1;
       
    }
   
    return answer-1;
}