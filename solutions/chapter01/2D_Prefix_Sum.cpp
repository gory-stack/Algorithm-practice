#include <iostream>
using namespace std;
int main(){
  int H, W, A[1509][1509];
  int Q, A1[100509], B[100509], C[100509], D[100509];
  int S[1509][1509] = {0};
  
  cin >> H >> W;
  for(int i = 1; i <= H; i++){
    for(int k = 1; k <= W; k++){
      cin >> A[i][k];
    }
  }
  cin >> Q;
  
  for(int i = 1; i <= Q; i++){
    cin >> A1[i] >> B[i] >> C[i] >> D[i];
    }
  
 for(int i = 1; i <= H; i++){
   for(int k = 1; k <= W; k++){
     S[i][k] = A[i][k] + S[i][k-1];
   }
 }
 for(int k = 1; k <= W; k++){
   for(int i = 1; i <= H; i++){
     S[i][k] = S[i-1][k] + S[i][k];
   }
 }

  for(int i = 1; i <= Q; i++){
    cout << S[C[i]][D[i]] - S[A1[i]-1][D[i]] - S[C[i]][B[i]-1] + S[A1[i]-1][B[i]-1] << endl;
  }
}
