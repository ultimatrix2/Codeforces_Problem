void solve()
{
    int  n ; 
    cin >>n;
    vector <int> data( n);
    int sum = 0;
    for (int  i = 1 ; i <= n/2 ; i ++)  
      sum += abs(  (n -i +1 ) - i);
 
    
      sum ++;
    cout<<sum<<endl;
      
    
}
