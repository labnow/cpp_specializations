#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
  int n;cin >> n;
  double x[1000], y[1000];
  for(int i=0;i<n;i++){
    cin >> x[i];
    cin >> y[i];}
  double maxDistance = 0;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(i==j) continue;
      double t_distance = sqrt(pow(x[j]-x[i],2) + pow(y[j]-y[i],2));
      if(t_distance > maxDistance) maxDistance = t_distance;
    }
  }
  cout << fixed << setprecision(4) << maxDistance << endl;
  return 0;
}