// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<bool> visited(V,false);
        vector<int> answer;
        queue<int> q;
        visited[0] = true;
        q.push(0);
        while(!q.empty()) {
            int node = q.front();
            q.pop();
            answer.push_back(node);
            for(int i: adj[node]) {
                if(!visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        return answer;
    }
};