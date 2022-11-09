class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> elementsInSpiralOrder;

        int leftBoundary = 0;
        int rightBoundary = matrix[0].size()-1;
        int topBoundary = 0;
        int bottomBoundary = matrix.size()-1;
        

        while (leftBoundary <= rightBoundary && topBoundary <= bottomBoundary){
            for (int j = leftBoundary; j <= rightBoundary; j++){
                elementsInSpiralOrder.push_back(matrix[topBoundary][j]);
            }
            topBoundary++;
            
            for (int i = topBoundary; i <= bottomBoundary; i++){
                elementsInSpiralOrder.push_back(matrix[i][rightBoundary]);
            }
            rightBoundary--;
            
            if (leftBoundary > rightBoundary || topBoundary > bottomBoundary){
                break;
            }
            
            for (int j = rightBoundary; j >= leftBoundary; j--){
                elementsInSpiralOrder.push_back(matrix[bottomBoundary][j]);
            }
            bottomBoundary--;
            
            for (int i = bottomBoundary; i >= topBoundary; i--){
                elementsInSpiralOrder.push_back(matrix[i][leftBoundary]);
            }
            leftBoundary++;
        }
        
        return elementsInSpiralOrder;
    }
};
