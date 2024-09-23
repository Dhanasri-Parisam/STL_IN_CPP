//sorting
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   int arr[]={1,10,5,4,2};
   sort(arr,arr+6);  //assending order
   sort(arr,arr+6,greater<int>());//decending order
   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
}

//pair sorting:

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
   pair<int,int>a[]={{2,1},{4,1},{1,2}};
   sort(a,a+3,greater<pair<int,int>>());
   for(auto &pair:a){
    cout<<pair.first<<","<<pair.second<<" ";
   }
}

//___buildin_popcount():

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
    // Example with int
    int num = 7;
    int cnt = __builtin_popcount(num);  // Counts the number of set bits in 'num'
    cout << "Number of set bits in " << num << " (int): " << cnt << endl;

    // Example with long long
    long long num_ll = 19193839282;
    int cnt_ll = __builtin_popcountll(num_ll);  // Counts the number of set bits in 'num_ll'
    cout << "Number of set bits in " << num_ll << " (long long): " << cnt_ll << endl;

    // Generating all permutations of the string
    string s = "123";
    cout << "Permutations of " << s << ":" << endl;
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));
 
   //MAX elemenet:
    // Finding the maximum element in an array
    int a[] = {10, 25, 30, 15, 40};
    int n = sizeof(a) / sizeof(a[0]);
    int maxi = *max_element(a, a + n);  // Finds the maximum element in the array
    cout << "Maximum element in the array: " << maxi << endl;

    return 0;
}
