#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int row = matrix.size();
	int col = matrix[0].size();
	vector<int> rows, cols;

	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			if(matrix[i][j] == 0){
				rows.push_back(i);
				cols.push_back(j);
			}
		}
	}

	for(int i=0; i<rows.size(); i++){
		int idx = rows[i];
		for(int j=0; j<col; j++){
			matrix[idx][j] = 0;
		}
	}

	for(int i=0; i<cols.size(); i++){
		int idx = cols[i];
		for(int j=0; j<row; j++){
			matrix[j][idx] = 0;
		}
	}
}
