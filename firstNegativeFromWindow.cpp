#include<iostream>
#include<vector> 
#include<list>
using namespace std ;
vector<int> first_negative_of_all_subarray(vector<int> v , int  k){

    int i=0,j=0 , n=v.size();
    vector<int> ans ;
    list<int> l ;
    
    int sum =  0; 
    while( j<n ){
            if(v[j]<0){
                l.push_back(v[j]);
            }
            if( j-i+1 < k ){
                j++ ;
            }else if( j-i+1 == k ){

                if(l.size()==0){
                    ans.push_back(0) ;
                }else{
                    ans.push_back(l.front()) ;
                    if(v[i]==l.front()){
                        l.pop_front() ;
                    }
                }
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
    vector<int> v{1,-2,-3,4,-5,6,7,8} ;
    int k = 3 ;
    vector<int> v2 = first_negative_of_all_subarray(v,k);
    print_vector(v2);
    return 0 ;
}