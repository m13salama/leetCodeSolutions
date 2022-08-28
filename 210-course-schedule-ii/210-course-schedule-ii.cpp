#define init cin.tie(0), cout.tie(0), cin.sync_with_stdio(0), cout.sync_with_stdio(0)

class Solution {
public:
    map<int, int> visited;
    vector<int> result;
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        init;
        int res;
        vector<vector<int>> pre(numCourses);
        for (int i=0; i<prerequisites.size(); i++){
            pre[prerequisites[i][0]].push_back(prerequisites[i][1]);
        }
        for (int i=0; i<numCourses; i++){
            if(!visited[i]) res = dfs(pre, i);
            if(res == 0){
                return vector<int>();
            }

        }
        return result;

    }
    int dfs(vector<vector<int>>& pre, int course){
        if(pre[course].size() == 0) {
            if(visited[course] == 0) result.push_back(course);
            visited[course]++;
            return 1;
        }
        if(visited[course] != 0) return 0;
        visited[course]++;
        for(int i=0; i<pre[course].size(); i++){
            if (!dfs(pre, pre[course][i])) return 0;
        }
        result.push_back(course);
        pre[course].clear();
        return 1;
    }
};