#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    sort(citations.begin(), citations.end());
    
    int h=0;
    while(h<citations.back()){
        int cnt=0;
        for(int i=0;i<citations.size();i++){
            if(citations.at(i)>=h)
                cnt++;
        }
        if(cnt>=h)
            answer = h;
        h++;
    }
    return answer;
}
