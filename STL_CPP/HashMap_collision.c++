// HASHING IN C++
// ========================================================================================================
// Memory Limits:
// - Inside main function: 1e7 (10^7) elements
// - Global arrays: 1e8 (10^8) elements
// ========================================================================================================

/*
Sample Input for Basic Hashing:
5
1 12 1 4 4
5
1 
12  
4
2 
3
*/

/*
// ========================================================================================================
// METHOD 1: BASIC ARRAY HASHING (for small range of numbers)
// ========================================================================================================
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[13]={0};  // Hash array size based on max expected value
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;  // Increment frequency count
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<endl;
    }
}
*/

/*
// ========================================================================================================
// METHOD 2: CHARACTER HASHING (lowercase a-z only)
// ========================================================================================================
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hash[26]={0};  // Array for 26 lowercase letters
    for(int i=0;i<s.size();i++){
         hash[s[i]-'a']+=1;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c-'a']<<endl;
    }
}
*/

/*
// ========================================================================================================
// METHOD 3: CHARACTER HASHING (all ASCII characters)
// ========================================================================================================
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
         hash[s[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        cout<<hash[c]<<endl;
    }
}
*/

/*
// ========================================================================================================
// METHOD 4: MAP (Ordered)
// ========================================================================================================
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int>mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<mpp[num]<<endl;
    }
}
*/

// ========================================================================================================
// METHOD 5: UNORDERED_MAP (Efficient Hash Map) ✅ Enabled
// ========================================================================================================
#include <bits/stdc++.h>
using namespace std;

void Frequency(int arr[], int n)
{
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
        map[arr[i]]++;

    for (auto x : map)
        cout << x.first << " -> " << x.second << endl;
}

int main()
{
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    Frequency(arr, n);
    return 0;
}

/*
// ========================================================================================================
// METHOD 6: BRUTE FORCE (No hashing, using visited[])
// ========================================================================================================
#include <bits/stdc++.h>
using namespace std;
void countFreq(int arr[], int n){
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++) {
        if (visited[i]) continue;
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        cout << arr[i] << " " << count << endl;
    }
}
int main(){
    int arr[] = {10,5,10,15,10,50};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
*/

/*
// ========================================================================================================
// METHOD 7: CHARACTER COUNT USING MAP
// ========================================================================================================
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    map<char, int> mpp;
    for(int i = 0; i < s.size(); i++){
        mpp[s[i]] += 1;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << mpp[c] << endl;
    }
}
*/

// ========================================================================================================
// NOTES:
// - Ordered Map (map): O(log n) per operation
// - Unordered Map: Avg O(1), Worst O(n)
// ========================================================================================================

