#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int  main(){
    // declare
    //string str;
    // initilization
    //str="abc";

    //cout<<str<<endl;
    // declaration + initialization
    //string s="def";

    //string s;
    //cin>>s;
    // getline(cin, name_of_string, delimiter)
    // default ='\n'
    // getline(cin,s,'$');
    // cout<<s<<endl;


    // Concatenate-> +
    // string s1="abf";
    // string s2="abf";
    // string s3=s1 + s2;
    // cout<<s3<<endl;

    // clear -> to delete
   // s3.clear();
    //cout<<s3<<endl;

    // .empty()-> check khali h ya nahi
    //cout<<s3.empty()<<endl;

    // compare-> to compare two strings
    // int ans=s1.compare(s2);
    // cout<<ans<<endl;

    // erase(pos,len)
   // s3.erase( 1,3);
    //cout<<s3<<endl;

    // find(string)-> index of first occurence
    //cout<<s3.find("bfa")<<endl;

    //size()-> find length of string
    //cout<<s3.size()<<endl;

    //substr(pos,len )-> to find substrig
    // cout<<s3.substr(2,4)<<endl;
    // cout<<s3.substr(0)<<endl;

    //string -> integer
    // string num="3457";
    // int number=stoi(num);
    // cout<<number<<endl;

    // integer-> string
    //int n=8756;
   // string NumToStr=to_string(n);
    //cout<<NumToStr.size()<<endl;
    //cout<<NumToStr<<endl;

    // sort(str.begin(),str.end());
    // sort(s3.begin(),s3.end());
    // cout<<s3<<endl;

    // transform() -> to tranfrom from lowercase to uppercase or vice versa
    // transform(s3.begin(),s3.end(),s3.begin(),::toupper);
    // cout<<s3<<endl;

    // transform(s3.begin(),s3.end(),s3.begin(),::tolower);
    // cout<<s3<<endl;

    //int arr[5]={1,2,3,4,5};
    string arr[5]={"abc","coding","Hello","Hi","Leet"};
    cout<<"Before Sort"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    // sort
    cout<<"After Sort"<<endl;
    sort(arr,arr+5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}