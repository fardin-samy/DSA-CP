//don't use this macro: #define int long long
//C:\MinGW\lib\gcc\mingw32\6.3.0\include\c++\ext\pb_ds\detail\resize_policy

#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace __gnu_pbds; 
template<class T> using ordered_set = tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>;

//order_of_key (k) : Number of items strictly smaller than k .
//find_by_order(k) : K-th element in a set (counting from zero).
