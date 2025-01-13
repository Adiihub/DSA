#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    // Declaration
    // Unordered Map

    // Unordered_map<key_data_type, value_data_type> nameofmap
    // name -> roll number

    unordered_map<string, int> mymap;
    pair<string, int> p = {"abc", 101};
    // .insert(pair)
    mymap.insert(p);

    // [] -> square bracket
    mymap["def"] = 110;
    mymap["ghi"] = 120;

    // How to access
    // .at(key)
    // int value = mymap.at("abc")
    // cout<<value<<endl;
    cout<<mymap.at("abc")<<endl;
    // [key] -> square bracket
    cout<<mymap["abc"]<<endl;

    // cout<<mymap.at("uvw")<<endl;
    cout<<mymap["uvw"]<<endl;

    // .count(key) -> true/false
    cout<<mymap.count("abc")<<endl;
    cout<<mymap.count("uvw")<<endl;

    // remove / delete
    // .erase(key)

    mymap.erase("abc");
    cout<<mymap.count("abc")<<endl;

    // Iterator
    // Unorderd_map<string, int> :: Iterator it = my.begin();
    // it = my.begin();
    
    auto it = mymap.begin();
    cout<<"key : Value"<<endl;
    cout<<"-----------"<<endl;
    for(auto it1 = it; it1!=mymap.end(); it1++){
        cout<<it1->first<<" : "<<it1->second<<endl;
    }

    for(auto it2 : mymap){
        it2.second = 100;
    }
            // Here value of it2:second will not change cuz we are not passing the reference
    for(auto it2 : mymap){
        cout<<it2.first<<" "<<it2.second<<endl;
    }


    return 0;
}