#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define int long long int
#define ld long double
#define nl cout << "\n";
#define yesno(b) cout << ((b) ? "YES" : "NO");
#define pii pair<int, int>

#define forn(a, b) for (int i = a; i < b; i++)
#define getunique(v){sort(v.begin(), v.end()); v.erase(unique(v.begin(), v.end()), v.end());}

template <typename T>
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define __builtin_popcountll __builtin_popcountll
#define __builtin_clzll __builtin_clzll
#define __builtin_ctzll __builtin_ctzll
