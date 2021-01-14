// 프로그래머스 고득점 kit 스택/큐 - 주식가격
import java.util.*;

public class practice1 {
	public static int[] solution(int[] prices) {
        var stk = new Stack<Integer>();
        int[] answer = new int[prices.length];
        for(int i = 0; i < prices.length; i++) {
            stk.push(prices[i]);
            answer[i] = 0;
        }
        for(int i = 0; i < prices.length; i++) {
            for(int j = i+1; j < prices.length; j++) {
                answer[i] += 1;
                if(stk.elementAt(i) > stk.elementAt(j)) break;
            }
        }
        return answer;
    }
	public static void main(String[] args) {
        int[] prices = {1, 2, 3, 2, 3};

        int[] answer = solution(prices);

        for (int i = 0; i < answer.length; i++) {
            System.out.print(answer[i] + " ");
        }
    }
}
