class Solution {
public:
  
int secondHighest(string s) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    
    // Fix: Track digits we have already seen to avoid duplicate clutter
    bool visited[10] = {false};

    for(int i=0; i<s.size(); i++){
        int current_digit = -1;

        if(s[i]=='0'){
            current_digit = 0;
        }else if(s[i]=='1'){
            current_digit = 1;
        }
        else if(s[i]=='2'){
            current_digit = 2;
        }
        else if(s[i]=='3'){
            current_digit = 3;
        }
        else if(s[i]=='4'){
            current_digit = 4;
        }
        else if(s[i]=='5'){
            current_digit = 5;
        }
        else if(s[i]=='6'){
            current_digit = 6;
        }
        else if(s[i]=='7'){
            current_digit = 7;
        }
        else if(s[i]=='8'){
            current_digit = 8;
        }
        else if(s[i]=='9'){
            current_digit = 9;
        }else{
            continue;
        }

        // Only push to heap if it's a unique digit we haven't processed yet
        if (!visited[current_digit]) {
            visited[current_digit] = true;
            pq.push(current_digit);
        }

        if(pq.size()>2){
            pq.pop();
        }
    }

    // Fix: If we don't have exactly 2 unique digits, a second highest doesn't exist
    if (pq.size() < 2) {
        return -1;
    }

    // Your exact extraction logic (now safe because size is guaranteed to be 2)
    int val = pq.top();
    pq.pop();
    int val2 = pq.top();

    if(val==val2){
        return -1;
    }
    return val;
}

};