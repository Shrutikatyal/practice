/*#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the bfs function below.
vector<int> bfs(int n, int m, vector<vector<int>> edges, int s) {

    vector<int> visited(n);
    bool a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            a[i][j]=0;
    for(int i=0;i<m;i++){
        a[edges[i][0]-1][edges[i][1]-1]=1;
    }
    std::queue<int> q;
    for(int i=0;i<n;i++)
        visited[i]=-1;
    visited[s-1]=0;
    q.push(s-1);
    while(!q.empty())
    {
        int i=q.front();
        q.pop();
        cout<<i<<" \n";
        //if(visited[i]==-1)
        {
            for(int k=0;k<n;k++)
                if(a[i][k]==1 && visited[k]==-1)
                {  
                    q.push(k);
                    cout<<k<<" ";
                    visited[k]=visited[i] + 6; 
                }
        }
        
    }
    vector<int> res(n-1);
    int j=0;
    for(int i=0;i<n;i++)
    {   if(i!=s-1) 
        res[j++]=visited[i];}
    return res;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string nm_temp;
        getline(cin, nm_temp);

        vector<string> nm = split_string(nm_temp);

        int n = stoi(nm[0]);

        int m = stoi(nm[1]);

        vector<vector<int>> edges(m);
        for (int i = 0; i < m; i++) {
            edges[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> edges[i][j];
            }

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        int s;
        cin >> s;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        vector<int> result = bfs(n, m, edges, s);

        for (int i = 0; i < result.size(); i++) {
            fout << result[i];

            if (i != result.size() - 1) {
                fout << " ";
            }
        }

        fout << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

vector<int>dist;
void bfs(int s,vector<vector<int>>a,vector<bool>visited)
{
    visited[s]=true;
    queue<int>q;
    q.push(s);
    dist[s]=0;
    while(!q.empty())
    {
        s=q.front();
        //cout<<s<<" ";
        q.pop();        
        for(int i:a[s])
        {
            if(!visited[i]&&dist[i]==-1)
            {
                dist[i]=dist[s]+1;
                visited[i]=true;
                q.push(i);   
            }
        }
    }
}

int main() {
  int q;
  cin>>q;
  for(int t=0;t<q;t++)
  {
      int n,m;
      cin>>n>>m;
      vector<vector<int>>a(n);
      for(int i=0;i<m;i++)
      {
          int x,y;
          cin>>x>>y;
          a[x-1].push_back(y-1);
          a[y-1].push_back(x-1);
      }
      int s;
      cin>>s;
      vector<bool>visited(n+1,false);
      dist.resize(n,-1);
      bfs(s-1,a,visited);
      
      for(int i=0;i<dist.size();i++)
          if(dist[i]==-1)
              cout<<dist[i]<<" ";
          else if(dist[i]!=0)
              cout<<dist[i]*6<<" ";
      cout<<endl;
      dist.clear();
      
  }
    return 0;
}
