// 프로그래머스 고득점 kit 스택/큐 - 다리를 지나는 트럭
import java.util.*;

public class practice3 {
	public static int solution(int bridge_length, int weight, int[] truck_weights) {
		Queue<Integer> bridge = new LinkedList<Integer>();
		int answer = 0;
		int sum = 0;
		for(int i : truck_weights) {
			while(true) {
				if(bridge.isEmpty()) {
					bridge.add(i);
					sum += i;
					answer++;
					break;
				} else if(bridge.size() == bridge_length) {
					sum -= bridge.poll();
				} else {
					if(sum + i > weight) {
						answer++;
						bridge.add(0);
					} else {
						bridge.add(i);
						sum += i;
						answer++;
						break;
					}
				}
			}
		}
		return answer + bridge_length;
	}
	
	public static void main(String[] args) {
		int bridge_length = 2;
		int weight = 10;
		int[] truck_weights = {7, 4, 5, 6};
		int answer = solution(bridge_length, weight, truck_weights);
		System.out.println(answer);
	}
}
