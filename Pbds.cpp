#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
template <class T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag,tree_order_statistics_node_update>;
int index(ordered_multiset<int> &st,int value){
    return st.order_of_key(value);
}
int value(ordered_multiset<int> &st,int index){
    return *st.find_by_order(index);
}
int main(){
    // code here......
    return 0;
}
