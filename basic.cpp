// File: bits/stdc++.h
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <string>
#include <cstring>
#include <stack>
#include <queue>
#include <deque>
#include <list>
#include <bitset>
#include <utility>
// #include <bits/stdc++.h>
using namespace std;

int vector1(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
int main(){
    vector1();
    return 0;
}