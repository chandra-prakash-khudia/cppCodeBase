#include<iostream>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char ch){
        this->data = ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal =false;
    }
};
class trie{
    public:
    TrieNode* root;
    trie(){
        root = new TrieNode('\0');
    }
    void insertUtil(TrieNode* root , string word){
        //base case
        if(word.length()==0){
            root->isTerminal= true;
            return;
        }
        //assumption all words are in caps
        int index = word[0] -'A';
        TrieNode* child;
        if(root->children[index] !=NULL){
            child =  root->children[index];
        }
        else{ //absent
        child=new TrieNode(word[0]);
        root->children[index]=child;
        }
        //recursion 
        insertUtil(child , word.substr(1));
    }
    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root, string word){
        //base case
        if(word.length()==0){
            return root->isTerminal;
        }
        int index= word[0]-'A';
        TrieNode* child;
        //resent
        if(root->children[index]!=NULL){
            child = root->children[index];
        }
        else{
            return false;
        }
        return searchUtil(child , word.substr(1));
    }
    bool search(string word){
        return searchUtil(root, word);
    }
};
int main(){
    trie* t= new trie();
    t->insertWord("ABCD");
    cout<<"is word present or not: "<<t->search("ABCD")<<endl;
}