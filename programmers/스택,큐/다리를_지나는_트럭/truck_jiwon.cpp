#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> truck;
    vector<int> bridge;

    for(int i = 0;i<truck_weights.size();i++)
        truck.push(truck_weights.at(i));

    int sum = 0;
    while(truck_weights.size()){
        answer++;
        if(!bridge.size()){
            sum += truck.front();
            truck.pop();
            bridge.push_back(bridge_length);
        }
        else{
            for(int i = 0;i<bridge.size();i++)
                bridge.at(i) -= 1;

            if(bridge.front() == 0){
                bridge.erase(bridge.begin());
                sum -= truck_weights.front();
                truck_weights.erase(truck_weights.begin());
            }

            if(bridge.size() <bridge_length && sum < weight && truck.size()){
                if( (sum+truck.front())<= weight ){
                    sum += truck.front();
                    truck.pop();
                    bridge.push_back(bridge_length);
                }
            }
        }
    }
    return answer;
}
