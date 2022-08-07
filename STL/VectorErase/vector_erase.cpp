/*
 *
 * @Author: Hakan CERAN
 * @Time: 06.08.2022
 * @Content: Vector Erase
 * 
 */
 
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

void printVector (vector<int> vec){
    
    for (int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }

    cout << endl;

}

int main() {
    int n, x, a, b;
    int temp;
    
    vector<int> v;
    
    cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> temp;
        v.push_back(temp);
    }
    
    
    cin >> x;
    v.erase(v.begin()+(x-1));
    
    cin >> a >> b;
    v.erase(v.begin()+(a-1), v.begin()+(b-1));

    cout << v.size() << endl;

    printVector(v);

    return 0;
}

