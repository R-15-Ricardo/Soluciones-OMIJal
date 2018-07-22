#include <iostream>
#include <queue>
using namespace std;

bool adj[1001][1001];
bool vis[1001];
bool roest[1001];
int root[1001];

int main ()
{
	int e,v;
	cin>>v>>e;
	for (int i=0;i<e;i++)
	{
		int a,b;
		cin>>a>>b;
		adj[a][b]=true;
		adj[b][a]=true;
	}
	for (int i=1;i<=v;i++)
	{
		int croot=i;
		if (!vis[i] && !roest[i])
		{
			queue<int>track;
			root[i]=croot;
			track.push(i);
			while (!track.empty())
			{
				int now;
				now = track.front();
				track.pop();
				if (vis[now]) continue;
				vis[now]=true;
				for (int i=1;i<=v;i++)
				{
					if (adj[now][i] && !roest[1001])
					{
						root[i]=croot;
						roest[i]=croot;
						track.push(i);
					}
				}
			}
		}
	}
	int nowroot=root[0];
	int conxcomp=0;
	for (int i=1;i<=v;i++)	
	{
		if (root[i]!=nowroot)
		{
			nowroot = root[i];
			conxcomp++;
		}
	}
	cout<<conxcomp-1;
	return 0;
}
