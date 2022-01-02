#include<bits/stdc++.h>
using namespace std;

// int main1() {
//     int arr[]={1,0,5,4,6,8};
//     int maxtill=arr[0];
    
//     cout<<"maxtill " <<0<<maxtill<<endl;
//     for(int i=1;i<6;i++){
//         if(arr[i]>maxtill){
//             maxtill=arr[i];
//             cout<<"maxtill " <<i<<"--"<<maxtill<<endl;
//         }
//     }
// }


int main(){
    int arr[]={10,7,4,6,8,10,11};

    vector<int> ans;
    int diff = arr[0]-arr[1];
    int prev_index = 0;
    for(int i=0;i<=5;i++){

        if((arr[i]-arr[i+1]) != diff){

            ans.push_back((i-prev_index)+1);
            diff = arr[i]-arr[i+1];
            prev_index = i;
        }
    }
    int max=ans[0];
    for(int i=1;i<ans.size();i++){
            if(ans[i]> max){
                max= ans[i];
            }   
    }
    cout<<max<<endl;
}