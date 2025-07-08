#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    int count[256] = {0};

    for(int i=0; i<n; i++){
        if(count[arr[i]] != 0) continue;
        else{
            int cnt = 1;
            for(int j=i+1; j<n; j++){
                if(arr[i] == arr[j]){
                    cnt++;
                }
            }
            cout << arr[i] << ":" << cnt << endl;
            count[arr[i]]++;
        }
    }
    return 0;
}