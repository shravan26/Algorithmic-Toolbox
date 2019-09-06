#include <iostream>
#include <vector>
using namespace std;
long long maxPairWiseProduct(vector <int> &v){
  long long max = 0;
  int len = v.size();
  for(int i = 0 ; i < len ; i ++){
    for(int j = i + 1 ; j < len ; j ++){
      if(max < (v[i] * v[j])){
        max = v[i] * v[j];
      }
    }
  }
  return max;
}
long long maxPairWiseProductFast(vector <int> &v){
  long long max1 = 0 ;
  long long max2 = 0 ;
  int maxindex = 0;
  int len = v.size();
  for(int  i = 0 ; i < len ; i ++){
    if(v[i] > max1) {
      max1 = v[i];
      maxindex = i;
    }
  }
  for(int i = 0 ; i < len ; i++){
    if(v[i] > max2 && (i != maxindex)){
      max2 = v[i];
    }
  }
  return max1 * max2;
}
int main(){
  while(true){
    int n = rand() % 1000 + 2;
    cout<<n<<endl;
    vector <int> a;
    for(int i = 0 ; i < n ; i++){
      a.push_back(rand() % 100000);
    }
    for(int i = 0 ; i < n ; i++){
      cout<<a[i]<<" ";
    }
    cout<<endl;
    int res1 = maxPairWiseProduct(a);
    int res2 = maxPairWiseProductFast(a);
    if(res1!=res2){
      cout<<"Wrong Answer : "<<res1<<" "<<res2<<endl;
      break;
    }else{
      cout<<"OK"<<endl;
    }
  }
  int n;
  cin>>n;
  vector <int> v;
  for(int i = 0 ; i < n ; i ++){
    int x;
    cin>>x;
    v.push_back(x);
  }
  // cout<<maxPairWiseProduct(v);
  return  0;
}
