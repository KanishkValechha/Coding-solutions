/*
 * 2115. Find All Possible Recipes from Given Supplies
 * Difficulty: Medium
 * 
 * You have information about n different recipes. You are given a string array recipes and a 2D string array ingredients. The ith recipe has the name recipes[i], and you can
create
create it if you have
all
all the needed ingredients from ingredients[i]. A recipe can also be an ingredient for
other
other recipes, i.e., ingredients[i] may contain a string that is in recipes.
You are also given a string array supplies containing all the ingredients that you initially have, and you have an infinite supply of all of them.
Return a list of all the recipes that you can create. You may return the answer in
any order
any order.
Note that two recipes may contain each other in their ingredients.

**Example 1:**

**Example 1:**
Input: recipes = ["bread"], ingredients = [["yeast","flour"]], supplies = ["yeast","flour","corn"]
Output: ["bread"]

Explanation:
We can create "bread" since we have the ingredients "yeast" and "flour".

**Example 2:**

**Example 2:**
Input: recipes = ["bread","sandwich"], ingredients = [["yeast","flour"],["bread","meat"]], supplies = ["yeast","flour","meat"]
Output: ["bread","sandwich"]

Explanation:
We can create "bread" since we have the ingredients "yeast" and "flour".
We can create "sandwich" since we have the ingredient "meat" and can create the ingredient "bread".

**Example 3:**

**Example 3:**
Input: recipes = ["bread","sandwich","burger"], ingredients = [["yeast","flour"],["bread","meat"],["sandwich","meat","bread"]], supplies = ["yeast","flour","meat"]
Output: ["bread","sandwich","burger"]

Explanation:
We can create "bread" since we have the ingredients "yeast" and "flour".
We can create "sandwich" since we have the ingredient "meat" and can create the ingredient "bread".
We can create "burger" since we have the ingredient "meat" and can create the ingredients "bread" and "sandwich".

**Constraints:**

**Constraints:**
n == recipes.length == ingredients.length
1 <= n <= 100
1 <= ingredients[i].length, supplies.length <= 100
1 <= recipes[i].length, ingredients[i][j].length, supplies[k].length <= 10
recipes[i], ingredients[i][j], and supplies[k] consist only of lowercase English letters.
All the values of recipes and supplies combined are unique.
Each ingredients[i] does not contain any duplicate values.
 */

class Solution {
public:
    vector<string> findAllRecipes(vector<string>& recipes, vector<vector<string>>& ingredients, 
vector<string>& supplies) {
        vector<string>ans;
        int n=recipes.size();
        int x=1;
        while(x){
            for(int i=0;i<n;i++){
                int f=1;
                for(auto j:ingredients[i]){
                    if(!sup.count(j)){
                        f=0;
                        break;
                    }
                }
                if(f){
                    ans.push_back(recipes[i]);
                    sup.insert(recipes[i]);
                }
            }
        }
        return ans;
    }
                    x=1;
            x=0;
        unordered_set<string>sup(supplies.begin(),supplies.end());
                if (sup.count(recipes[i])) continue;