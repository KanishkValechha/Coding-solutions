/*
 * 889. Construct Binary Tree from Preorder and Postorder Traversal
 * Difficulty: Medium
 * 
 * Given two integer arrays, preorder and postorder where preorder is the preorder traversal of a binary tree of
distinct
distinct values and postorder is the postorder traversal of the same tree, reconstruct and return the binary tree.
If there exist multiple answers, you can
return any
return any of them.

**Example 1:**

**Example 1:**
Input: preorder = [1,2,4,5,3,6,7], postorder = [4,5,2,6,7,3,1]
Output: [1,2,3,4,5,6,7]

**Example 2:**

**Example 2:**
Input: preorder = [1], postorder = [1]
Output: [1]

**Constraints:**

**Constraints:**
1 <= preorder.length <= 30
1 <= preorder[i] <= preorder.length
All the values of preorder are
unique
unique.
postorder.length == preorder.length
1 <= postorder[i] <= postorder.length
All the values of postorder are
unique
unique.
It is guaranteed that preorder and postorder are the preorder traversal and postorder traversal of the same binary tree.
 */

                  vector<int>& post) {
        if (i1 > j1 || i2 > j2)
            return nullptr;
        TreeNode* root = new TreeNode(pre[i1]);
        if (i1 == j1)
            return root;
        int l = pre[i1 + 1];
        int x = i2;
        while (x <= j2 && post[x] != l) {
            x++;
        }
        int m = x - i2 + 1;

        root->left = dfs(i1 + 1, i1 + m, i2, x, pre, post);
        root->right = dfs(i1 + m + 1, j1, x + 1, j2 - 1, pre, post);

        return root;
    }
    TreeNode* constructFromPrePost(vector<int>& preorder,
                                   vector<int>& postorder) {
        int n = preorder.size();
        return dfs(0, n - 1, 0, n - 1, preorder, postorder);
    }
};
    TreeNode* dfs(int i1, int j1, int i2, int j2, vector<int>& pre,
public:
class Solution {