#include <iostream>
using namespace std;
/*
Input:
5
5 int: 1 3 5 4 7
Output:
3
Explanation: 1, 3, 5 are numbers increasing, 7 would be there if not for 4 which is less than 5

Other example:
Intput:
5
2 2 2 2 2
Output:
1
Explanation: 2, 2, 2, 2, 2 never shows any increase

Plan:
main{
int n = input;
int cnt = 0;
int a[n] = second line of input;
for(int i){
cin>>a[i];
}
while(true){
for(int i){
if(a[i]<a[i+1]){
cnt++
}
break;
}
}
cout<<cnt;
}
*/

int main() {
  int n;
  int cnt = 1;
  cin>>n;
  int a[n];
  for(int i = 0; i<n-1; i++){
    cin>>a[i];
  }
  for(int i = 0; i<n; i++){
    if(a[i]<a[i+1]){
      cnt++;
      continue;
    }
    break;
  }
  // int i = 0;
  //   while(true){
  //     if(a[i]<a[i+1]){
  //       cnt++;
  //       continue;
  //     }
  //     break;
  //   }
  cout<<cnt;
}