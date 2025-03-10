#ifndef DEBUG_H
#define DEBUG_H


/**
 * writer:blinderchief
 **/
#include<bits/stdc++.h>
using namespace std;

// Debug function to print a single value
template <typename T>
void __print(const T &x) {
    cerr << x;
}

// Specializations for specific types
void __print(const bool &x) { cerr << (x ? "true" : "false"); }
void __print(const string &x) { cerr << '"' << x << '"'; }

// Debug function for vectors
template <typename T>
void __print(const vector<T> &v) {
    cerr << "[ ";
    for (const auto &i : v) {
        __print(i);
        cerr << " ";
    }
    cerr << "]";
}

// Debug function for sets
template <typename T>
void __print(const set<T> &s) {
    cerr << "{ ";
    for (const auto &i : s) {
        __print(i);
        cerr << " ";
    }
    cerr << "}";
}

// Debug function for maps
template <typename K, typename V>
void __print(const map<K, V> &m) {
    cerr << "{ ";
    for (const auto &p : m) {
        cerr << "(";
        __print(p.first);
        cerr << ": ";
        __print(p.second);
        cerr << ") ";
    }
    cerr << "}";
}

// Recursive debug function
template <typename T, typename... Args>
void __print(const T &x, const Args &...args) {
    __print(x);
    cerr << ", ";
    __print(args...);
}

// Debug macro to print variable names and values
#define debug(...) cerr << "[" << #__VA_ARGS__ << "]: ", __print(__VA_ARGS__), cerr << endl

#endif  // DEBUG_H
