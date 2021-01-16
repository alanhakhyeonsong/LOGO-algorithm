function solution(priorities, location) {
    var answer = 0;
    const priority = priorities.map((prior,index)=>({
        target: index === location,
        value : prior
    }));
    /*
    	[
  { target: true, value: 1 },
  { target: false, value: 1 },
 
    ]
    */
    while(true){
        let current = priority.splice(0,1)[0];
        if(priority.some(ing => ing.value > current.value)){
            priority.push(current);
        } else {
            answer ++;
            if(current.target) break;
        }
    }
    console.log(priority);
    return answer;
}