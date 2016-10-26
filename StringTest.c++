#include<iostream>  
#include<string>  
#include<cstdlib>  
#include<algorithm>  
using namespace std;  
int getLongestSubString(const string s){  
    int hash[256];   //hash表中存放的是每一个字符的下标位置；  
    memset(hash, -1, sizeof(hash));  //  
    int prev = 0, max_len = 0;  //prev用来存放出现不重复子串的首地址  
    int n = s.length();  
    for (int i = 0; i < n; i++){  
        if (hash[s[i]] != -1){  
            if (hash[s[i]] >= prev){  
                prev = hash[s[i]] + 1;  
            }  
            hash[s[i]] = i;  
        }  
        else{  
            hash[s[i]] = i;  
        }  
        max_len = max(max_len, i - prev + 1);  
    }  
          
    return max_len;  
} 