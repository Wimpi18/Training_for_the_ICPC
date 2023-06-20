#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<int> st1;
    st1.insert(s1);
    st1.insert(s2);
    st1.insert(s3);
    st1.insert(s4);
    cout << 4 - st1.size() << endl;
}