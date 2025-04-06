class Solution {
public:
    bool bsearch2(vector<int>& arr, int start, int end, int target){
        int middle = start + (end - start) / 2;
        if (start == end)
            return (target == arr[middle])?true:false;
        else{
            if (arr[middle] > target)
                return bsearch2(arr, start, middle, target);
            else if (arr[middle] < target)
                return bsearch2(arr, middle + 1, end, target);
            else
                return true;
        }
    }
    int bsearch1(vector<int>& arr, int start, int end, int target){
        int middle = start + (end - start) / 2;
        if (end - start <= 1)
            return (arr[end] > target)?start:end;
        else{
            if (arr[middle] > target)
                return bsearch1(arr, start, middle, target);
            else if (arr[middle] < target)
                return bsearch1(arr, middle, end, target);
            else
                return middle;
        }
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> header;
        int target_row;
        for(int i = 0; i < matrix.size(); i++)
            header.push_back(matrix[i][0]);
        target_row = bsearch1(header, 0, header.size() - 1, target);
        return bsearch2(matrix[target_row], 0, matrix[target_row].size() - 1, target);

    }
};
