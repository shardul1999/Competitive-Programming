/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root==NULL)
            return res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        int h;
        while(q.size()>1)
        {
            TreeNode* temp=q.front();
            q.pop();
            
            if(temp==NULL)
            {
                res.push_back(h);
                q.push(NULL);
                cout<<endl;
            }
            else
            {
                h=temp->val;
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        }
        res.push_back(h);
            return res;
    }
};
