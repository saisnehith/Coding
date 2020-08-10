#include<bits/stdc++.h>

#define p 1000000007
#define arr_size 1000006

using namespace std;


long long arr[arr_size];


long long int power(long long int x, unsigned int y)  
{  
    long long int res = 1;         
    x = x % p;                  
    while (y > 0)  
    {    
        if (y & 1)  
            res = (res*x) % p;        
        y = y>>1; 
        x = (x*x) % p;  
    }  
    return res;  
}  

int main()
{
    int n; cin >> n;
    long long int res = 1;
    for (size_t i = 1; i <=n; i++)
    {
        res = (i * res) % p;
    }
    
    cout << res -  power(2,n - 1) << endl;
    return 0;
}