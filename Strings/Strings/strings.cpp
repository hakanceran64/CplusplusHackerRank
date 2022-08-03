/*
 * @Author: Hakan CERAN
 * @Time: 03.08.2022
 * @Content: Strings
 * 
 * */

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    /* Input:
     * abcd
     * ef
     *
     * */
    
    /* Output:
     * 4 2
     * abcdef
     * ebcd af
     *
     * */
    
    // Variable Declaration
    string a = "";
    string b = "";
    
    // Input Value
    cin >> a >> b;
    
    // Size
    int len_a = a.size();
    int len_b = b.size();
    
    // Concatenate Two Strings
    string c = a + b;
    
    cout << len_a << " " << len_b << endl;
    cout << c << endl;
    
    string s1 = a;
    string s2 = b;

    s1[0] = b[0];
    s2[0] = a[0];
    
    cout << s1 << " " << s2 << endl;
    
    return 0;
}
