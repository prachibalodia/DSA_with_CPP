#include<iostream>
#include "trie.h"
using namespace std;

int main(){
    string words[]= {"apple", "ape", "ap", "no", "new", "news"};
    Trie t;

    for(auto word: words){
        t.insert(word);
    }

    string key;
    cin>>key;

    cout<<t.search(key)<<endl;
    return 0;
}

