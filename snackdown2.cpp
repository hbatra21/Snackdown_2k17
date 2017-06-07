#include<iostream>
#include<string>
using namespace std;
int main()
{
	int S,N;
	cin>>S;
	while(S--)
	{
		bool height=false;
		int s[100];
	    cin>>N;
		for(int i=0;i<N;i++)
		cin>>s[i];
		if(N%2!=0)
		{
		 height=true;
		if(s[0]==1 && s[N-1]==1 && s[N/2]==(N/2)+1)
		{
		 for(int i=1;i<N/2;i++)
		 {
		 	if(s[i]+1==s[i+1])
		 	 continue;
		 	else{
		 		height=false;
		 		break;
			 }
        	}
		 for(int i=(N/2)+1;i<N-1;i++)
		 {
		 	if(s[i]-1==s[i+1])
		 	 continue;
		 	else{
		 		height=false;
		 		break;
			 }
        	}
		 }
		 else
		 {
		 		height=false;
		 	    
			 }
		 
		}
		
		if(height==false)
		cout<<"no\n";
		else
		cout<<"yes\n";
	}
	return 0;
} 
