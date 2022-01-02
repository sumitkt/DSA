#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//Time Complexity = O(n2); Space COmplexity = O(n2);

vector<vector<int>> PascalTriangle(int Rows);
vector<vector<int>> PascalTriangle(int Rows){
    
    vector<vector<int> > output={{1}};
    for(int i=1;i<Rows;i++){

        vector<int> ans;
        int prev = 1;
        ans.push_back(prev);
        int k = i;
        for(int j=1;j<=i;j++){
            prev = (prev*k)/j;
            ans.push_back(prev);
            k--;
        }
        output.push_back(ans);
    }
return output;
}




int main(){
    vector<vector<int>> output;
    output= PascalTriangle(10);
    
    for(int i=0;i<output.size();i++){
        for (int j=0;j<output[i].size();j++){
            cout<<output[i][j];
        }
        cout<<endl;
    }
}
// int main(){
//     cout<<"Hello world"<<endl;
// }

