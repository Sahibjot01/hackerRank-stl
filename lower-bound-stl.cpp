#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int> v; 
    int n,inp,key,test_cases;
    cin>>n; 
    for(int i = 0 ; i<n ; i++){
        cin>>inp;
        v.push_back(inp);
    }  
    
    cin>>test_cases;
    
    while(test_cases){
        cin>>key;
        auto it = find(v.begin(),v.end(),key);

        if(it!= v.end()){
            int index = it - v.begin()+1;
            cout<<"Yes "<<index<<endl;
        }
        else{
            auto low = lower_bound(v.begin(),v.end(),key);
            cout<<"No "<<(low - v.begin()+1)<<endl;
        }
        test_cases--;
    }
    
    return 0;
}
