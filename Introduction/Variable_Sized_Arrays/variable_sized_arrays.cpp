/*
 * @Author: Hakan CERAN
 * @Time: 02.08.2022
 * @Content: Variable Sized Arrays
 * 
 * */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    int n; // the number of variable length arrays (1 <= n <= 100000)
    int q; // the number of queries (1 <= q <= 100000)
    
    cin >> n >> q;
    
    vector<vector<int>> t_array(n);

    // for n value
    for (int i = 0; i < n; i++)
    {
        int length;
        
        cin >> length;
        
        t_array[i].resize(length);
        
        for (int j = 0; j < length; j++)
        {
            cin >> t_array[i][j];
        }
    }
    
    // for q value
    for (int k = 0; k < q; k++)
    {
        int i, j;
        
        cin >> i >> j;
        
        cout << t_array[i][j] << endl;
    }
    
    return 0;
}
