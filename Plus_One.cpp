class Solution {
public:
    vector<int> plusOne_indexI(vector<int>& digits, int i){
        if (++digits[i] < 10)
            return digits;
        else{
            if(i == 0){
                digits[0] = 0;
                digits.insert(digits.begin(), 1);
                return digits;
            }
            else{
                digits[i] = 0;
                return plusOne_indexI(digits, i - 1);
            }
        }
    }
    vector<int> plusOne(vector<int>& digits) {
        return plusOne_indexI(digits, digits.size() - 1);
    }
};
