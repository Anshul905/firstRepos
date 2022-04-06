#include<iostream>
#include<vector> 
using namespace std ;
vector<int> sum_of_all_subarray(vector<int> v , int  k){

    int i=0,j=0 , n=v.size();
    vector<int> ans ;
    
    int sum =  0; 
    while( j<n ){
            sum += v[j] ;
        if( j-i+1 < k ){
            j++ ;
        }else if( j-i+1 == k ){
            ans.push_back(sum) ;
            sum -= v[i] ;
            i++ ;
            j++ ;
        }
    }
    return ans ;
}
void print_vector(vector<int> v){
    for(auto x: v)
        cout<<x<<" " ;
    cout<<endl;
}
int main(){
    vector<int> v{1,2,3,4,5,6,7,8} ;
    int k = 3 ;
    vector<int> v2 = sum_of_all_subarray(v,k);
    print_vector(v2);
    return 0 ;
}