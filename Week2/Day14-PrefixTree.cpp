class Trie {
public:
    /** Initialize your data structure here. */
    typedef struct node
    {
        bool end;
        node* arr[26];
    }node;
    
    node* root;
    Trie() {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        root=(node*)malloc(sizeof(node));
        root->end=true;
        for(int i=0;i<26;++i)
            root->arr[i]=NULL;
        
    }
    
    node* createNode()
    {
        node *newnode=(node*)malloc(sizeof(node));
        newnode->end=0;
        for(int i=0;i<26;++i)
            newnode->arr[i]=NULL;
        
        return newnode;
    }
    /** Inserts a word into the trie. */
    void insert(string word) {
        node* curr=root;
        for(int i=0;i<word.length();++i)
        {
            if(curr->arr[word[i]-'a']!=NULL)
                curr=curr->arr[word[i]-'a'];
            else
            {
                curr->arr[word[i]-'a']=createNode();
                curr=curr->arr[word[i]-'a'];
            }
            
        }
        curr->end=true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        
        node *curr=root; int i=0;
        for(i=0;i<word.length();++i)
        {
            if(curr->arr[word[i]-'a']!=NULL)
                curr=curr->arr[word[i]-'a'];
            else
                break;
                
        }
        if(i==word.length() && curr->end==true)
            return true;
        
        return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        node *curr=root; int i=0;
        for(i=0;i<prefix.length();++i)
        {
            if(curr->arr[prefix[i]-'a']!=NULL)
                curr=curr->arr[prefix[i]-'a'];
            else
                break;
                
        }
        if(i==prefix.length())
            return true;
        
        return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
