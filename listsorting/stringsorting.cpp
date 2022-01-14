#include<iostream>
#include<list>
#include<string>
using namespace std;
int main(){
    list<string> my_list{"cap", "pen", "pencil", "eraser"};
    my_list.sort();
    for(auto it = my_list.begin(); it != my_list.end(); ++it)
    cout<<' '<<*it;
    return 0;
}