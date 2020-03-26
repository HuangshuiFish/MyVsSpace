/*
 * @lc app=leetcode.cn id=208 lang=cpp
 *
 * [208] 实现 Trie (前缀树)
 */

// @lc code=start
class TrieNode {
    public:
    char content;
    bool isend;
    int shared;
    vector<TrieNode*> children;
    TrieNode()
        : content(' '), isend(false), shared(0) {}
    TrieNode(char ch)
        : content(ch), isend(false), shared(0) {}
    TrieNode* subNode(char ch)
    {
        if (!children.empty()) {
            for (auto child : children) {
                if (child->content == ch)
                    return child;
            }
        }
        return nullptr;
    }
    ~TrieNode()
    {
        for (auto child : children)
            delete child;
    }
};

class Trie {
    public:
    /** Initialize your data structure here. */
    Trie()
    {
        root = new TrieNode();
    }

    /** Inserts a word into the trie. */
    void insert(string word)
    {
        if (search(word))
            return;
        TrieNode* curr = root;
        for (auto ch : word) {
            TrieNode* child = curr->subNode(ch);
            if (child != nullptr) {
                curr = child;
            }
            else {
                TrieNode* newNode = new TrieNode(ch);
                curr->children.push_back(newNode);
                curr = newNode;
            }
            ++curr->shared;
        }
        curr->isend = true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word)
    {
        TrieNode* curr = root;
        for (auto ch : word) {
            curr = curr->subNode(ch);
            if (curr == nullptr)
                return false;
        }
        return curr->isend == true;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix)
    {
        TrieNode* curr = root;
        for (auto ch : prefix) {
            curr = curr->subNode(ch);
            if (curr == nullptr)
                return false;
        }
        return true;
    }
    ~Trie()
    {
        delete root;
    }

    private:
    TrieNode* root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end
