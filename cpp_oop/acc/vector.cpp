#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec1={1,2,3,4,5,6}; //initisliser list
    vector<int> vec2{2,4,6,8,10,12}; //uniform initialisation
    vector<int> vec3={5,12};  //
    for(const int& i: vec1){
        cout<<i<<endl;
    }
    return 0;
}
