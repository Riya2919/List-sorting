#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> my_list{8, 6, 9, 66, 457, 100};
    my_list.sort();
    for(auto it = my_list.begin(); it != my_list.end(); ++it)
    cout<<' '<<*it;
    return 0;
}