class Solution {
public:
    int numberOfRounds(string startTime, string finishTime) {
        int startHour = stoi(startTime.substr(0,2));
        int startMinute = stoi(startTime.substr(3));
        
        int finishHour = stoi(finishTime.substr(0,2));
        int finishMinute = stoi(finishTime.substr(3));
        
        int ans = (finishHour - startHour)*4 + (finishMinute/15) - (startMinute+14)/15 + 96;
        return ans%96;
    }
};
thanyou
