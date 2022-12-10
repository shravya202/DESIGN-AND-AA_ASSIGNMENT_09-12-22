#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,arrival[100],depart[100];
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>arrival[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>depart[i];
    }
	
    int plat_needed = 1, result = 1;
	for (int i = 0; i < m; i++) {
		plat_needed = 1;
		for (int j = 0; j < m; j++) {
			if (i != j)
				if (arrival[i] >= arrival[j] && depart[j] >= arrival[i])
					plat_needed++;
		}

		result = plat_needed;
	}
	cout << result;
	return 0;
}
