#include <string>
#include <algorithm>
#include <vector>

using namespace std;

//내림차순 정렬
bool compare(pair<int,int>& i, pair<int,int>& j){
    if(i.first == j.first)
        return i.second > j.second;
    return i.first> j.first;
}

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    //중요도와 위치를 포함한 벡터 생성
    vector<pair<int,int>> print;  //중요도,위치
    for(int i=0;i<priorities.size();i++){
        print.push_back(make_pair(priorities[i], i));
    }
    
    //내림차순 정렬
    sort(print.begin(),print.end(),compare);
    
    //요청한 문서의 인쇄 순서 찾기
    for(int i=0;i<print.size();i++){
        if(location == print[i].second)
            answer = i+1;
    }
    
    return answer;
}
