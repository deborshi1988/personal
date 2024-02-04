
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> pascals;
      for( int i = 1; i <= numRows; i++) { 
          pascals.push_back(generateRow(i));
      }
      return pascals;
        
    }

    vector<int> generateRow(int row) {
          long long int ans = 1;
          vector<int> rows;
          rows.push_back(ans);

          for( int col = 1; col <row; col++) {
            ans = ans * (row - col);
            ans = ans / col;
            rows.push_back(ans);
          }
          return rows;
    }
};