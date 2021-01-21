#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(vector<int> a, vector<int> b) {
    return a[1] > b[1];
}

int solution(vector<vector<int>> jobs) {
    int answer = 0, cur_time = 0, i = 0; 
    bool comp = false;
    vector<vector<int>> q;
    
    sort(jobs.begin(), jobs.end());

    while(i == jobs.size() && q.empty()) {
        if(i < jobs.size() && jobs[i][0] <= cur_time) {
            q.push_back(jobs[i++]);
            comp = true;
            continue;
        }
        if(q.empty()) {
            cur_time = jobs[i][0];
            q.push_back(jobs[i++]); // 정렬 횟수 줄이기
        }
        else {
            if(comp) {
                sort(q.begin(), q.end(), compare); 
                comp = false;
            }
            cur_time += q.back()[1];
            answer += cur_time - q.back()[0];
            q.pop_back();
        }
    }
    return answer / jobs.size();
}
