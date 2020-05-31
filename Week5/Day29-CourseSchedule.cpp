class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
        
        vector<vector<int> > adj(numCourses,vector<int>());
        vector<int> indegree(numCourses,0);
        for(auto edge:prerequisites)
            adj[edge[1]].push_back(edge[0]), ++indegree[edge[0]];
        
        queue<int> q;
        int nVisited=0;
        
        //find vertices with 0 incoming edges
        for(int i=0;i<numCourses;++i)
            if(indegree[i]==0)
                q.push(i);
        
        while(q.size()>0)
        {
            ++nVisited; cout<<nVisited;
            int i=q.front();    q.pop();
            for(auto j:adj[i])
            {
                --indegree[j];
                    
                if(indegree[j]==0)
                    q.push(j);
            }
            
        }
        
        return nVisited==numCourses;
    }
};
