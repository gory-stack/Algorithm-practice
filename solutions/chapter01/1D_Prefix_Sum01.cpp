//*https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_g
#include <iostream>
using namespace std;
int main(){
  int D, N;
  int L[100009], R[100009] , A[100009] ={0}, S[100009] = {0};
  cin >> D >> N;
  
  for(int i = 1; i <= N; i++){
    cin >> L[i] >> R[i];
  }
  for(int i = 1; i <= N; i++){
    A[L[i]] += 1;
    A[R[i] + 1] -= 1;
  }
  for(int i = 1; i <= D; i++){
    S[i] = S[i-1] + A[i];
  }
  for(int i = 1; i <= D; i++){
    cout << S[i] <<endl;
  }
}
