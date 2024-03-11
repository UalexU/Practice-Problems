// I included the vector library in the solution

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum = 0; 
        int total;
        for (auto& it : array){
            sum += it ;
        }
        total = n*(n+1) / 2;
        return total - sum; 
    }
};