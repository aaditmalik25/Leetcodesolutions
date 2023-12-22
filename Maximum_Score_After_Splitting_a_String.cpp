class Solution {
public:
    int maxScore(string s) {
        int onec = 0;
        int result =0;
        for(int j=0;j< s.length() ;j++){
            if(s[j]=='1'){
                onec++;
            }
        }
        int zeroc = 0;
        for(int i=0;i< s.length()-1;i++){
            if(s[i]=='1'){
                onec--;
            }
            else{
                zeroc++;
            }
            result = max(zeroc+onec,result);
        }
        return result;
    }
};
