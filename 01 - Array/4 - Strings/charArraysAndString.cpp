#include<iostream>
#include<cstring>
using namespace std;

int main(){

    // int a[]={'a','b','c'}; // will give random value cuz at last null char is not assigned
    // char b[]={'a','b','c','/0'};
    // cout<<a<<endl;
    // cout<<b<<endl;


    // char name[] = "NAME";
    // cout<<name<<endl;


    // //for print individual character
    // for(int i=0; name[i]!='\0'; i++){
    //     cout<<name[i]<<" ";
    // }


    //input
    // char name[100];
    // cin>>name; 
    // cin ignore white spaces
    // cout<<name<<endl;


    //TAKE Input CHAR By char
    // int i=0;
    // char ch;
    // ch = cin.get();  //-to take 
    // while(ch!='$'){  // we took $ to stop taking the input
    //     name[i] = ch;
    //     i++;
    //     ch = cin.get();
    // }
    // name[i] = '\0';
    // cout<<name<<endl;


    //take
    //getline(arr_name, num_input_char, delimiter) //delimiter tells where to stop
    // char a[1000];
    // cin.getline(a,100,'$');
    // cout<<a<<endl;
    // cin.getline(a,100,'\n'); 
    // if we don't take delimiter, default will take as '\n'


    // find size of string ?

    // int size = 0;
    // for(int i=0; a[i]!='\0'; i++){
    //     size++;
    // }

    // cout<<size;
    // cout<<strlen(a)<<endl; //doesn't include null charactor while calculating string size

    return 0;
}