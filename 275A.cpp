#include <bits/stdc++.h>
using namespace std;
 
int pres[4][4];
int tog[4][4];
 
int main(){
 
	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			cin >> pres[i][j];
			tog[i][j] = pres[i][j];
		}
	}
 
	for(int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			if(pres[i][j] != 0){

				tog[i][j - 1] += pres[i][j];
				tog[i][j + 1] += pres[i][j];
				tog[i - 1][j] += pres[i][j];
				tog[i + 1][j] += pres[i][j];
 
			}
		}
	}
 
	for (int i = 1; i <= 3; i++){
		for(int j = 1; j <= 3; j++){
			if(tog[i][j] % 2) cout << "0";
			else cout << "1";
		}
		cout << '\n';
	}
 
	return 0;
}