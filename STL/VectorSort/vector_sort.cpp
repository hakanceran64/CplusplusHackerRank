/*
 *
 * @Author: Hakan CERAN
 * @Time: 07.08.2022
 * @Content: Vector Sort
 * @Source: https://cplusplus.com/reference/vector/vector/
 * 
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main(){
    
    int len = 0;
    int temp;

    vector<int> v;
    
    cin >> len;
    
    for (int i = 0; i < len; i++){
        cin >> temp;
        
        v.push_back(temp);
    }
    
    sort(v.begin(), v.end());
    
    for (int i = 0; i < len; i++){
        cout << v[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}

