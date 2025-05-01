#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define LC_HACK
#ifdef LC_HACK
const auto __ = []()
{
  struct ___
  {
    static void _() { std::ofstream("display_runtime.txt") << 0 << '\n'; }
  };
  std::atexit(&___::_);
  return 0;
}();
#endif

#define debug(x) cout << #x << " is " << x << endl;
#define fr(i, n) for (ll i = 0; i < ll(n); i++)
#define yes cout << "YES" << '\n'
#define no cout << "NO" << '\n'
#define alice cout << "Alice" << '\n'
#define bob cout << "Bob" << '\n'
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define ump unordered_map
#define MOD 1000000007
#define en '\n'
typedef long long ll;
typedef vector<ll> vll;
// typedef vector<vll> vvll;

typedef pair<int, int> pii;

template <typename T>
void debugVector(vector<T> &v)
{
  cout << "[ ";
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << "]\n";
}
long long gcd(ll a, ll b) {
  return b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b) {
  return (a * b) / gcd(a, b);
}

long long min(long long a, long long b) { return (a < b) ? a : b; }
long long max(long long a, long long b) { return (a > b) ? a : b; }

// -------------------------SOLUTION---------------------------
struct CustomCompare {
  bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
      if (a.first == b.first)
          return a.second > b.second; 
      return a.first < b.first; // 
  }
};
//  count the tailing zero : number of 2 as multiple
int countTwos(ll n) {
  return __builtin_ctz(n);  
}
void solve()
{
    string str ;
     cin >> str ;
     ll len = LLONG_MAX , n = str.size();
    ll a= - 1 , b = -1 , c = -1;
    for( ll  i = 0 ; i <  n ; i ++ ){
      if( str[i] == '1') a= i;
      else if( str[i] == '2') b= i;
      else c= i;

      if( a!= -1 && b !=  -1 && c != -1){
    
        ll Min = min ({ a,b,c});
        ll Max=  max( {a,b,c});
        len = min ( len , Max -Min + 1);
      }
    }
    if( len  == LLONG_MAX) len =0;
    cout<<len<<endl;
}

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
