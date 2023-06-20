#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int nAmigos, kBotellas, lMililitros, cLimones, dRodajas, pGramosSal, nlMililitrosBrindis, npGramosSalBrindis;
    cin >> nAmigos >> kBotellas >> lMililitros >> cLimones >> dRodajas >> pGramosSal >> nlMililitrosBrindis >> npGramosSalBrindis;
    set<int> st1;
    int res;
    res = (kBotellas * lMililitros) / (nAmigos * nlMililitrosBrindis);
    st1.insert(res);
    res = (cLimones * dRodajas) / nAmigos;
    st1.insert(res);
    res = (pGramosSal) / (nAmigos * npGramosSalBrindis);
    st1.insert(res);
    set<int>::iterator it;
    it = st1.begin();
    cout << *it << '\n';
}