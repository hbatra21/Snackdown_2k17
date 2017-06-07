#include<iostream>
#include<string>
using namespace std;
 
int main() {
	int R,L;
	string s;
	cin>>R;
	while(R--)
	{ 
	    cin>>L;
	    cin>>s;
	     bool needTail=false,flag=true;
	     int counter=0;
	    for(int i=0;i<L;i++)
	    {
	        if(s[i]=='.')
	            continue;
	        else if(s[i]=='H')
	       {  
	           if(counter>0)
	            {            
                    cout<<"Invalid\n";
                    flag=false;
                    break;
	           }
	            ++counter;
	            needTail=true;
	       }
	         else
	          {
	              if(needTail==false)
               {            
                    cout<<"Invalid\n";
                    flag=false;
                    break;
	           }
	           needTail=false;
	           counter=0;
	          }
	           
	    }
	    
	    if(flag==true && counter==0)
	    cout<<"Valid\n";
	    else if(flag==true && counter>0)
	    cout<<"Invalid\n";
	
	}
	return 0;
} 
