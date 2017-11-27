#include<bits/stdc++.h>
using namespace std;
int logWin[101];
int main()
{
	int n;
	bool a=true,b=true,c=false;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{	
		scanf("%d",&logWin[i]);
	}
	int flag=1;
	for(int i=0;i<n;i++)
	{
		if(a==true && logWin[i]==1){
			if(b==true){
				b=false;
				c=true;
			}
			else if(c==true){
				c=false;
				b=true;	
			}
			else
			{
				flag=0;
				break;
			}
			
		}
                else if(b==true && logWin[i]==2){
                        if(a==true){
                                a=false;
                                c=true;
                        }
                        else if(c==true){
                                c=false;
                                a=true;
                        }
                        else
                        {
                                flag=0;
                                break;
                        }

                }
                else if(c==true && logWin[i]==3){
                        if(b==true){
                                b=false;
                                a=true;
                        }
                        else if(a==true){
                                a=false;
                                b=true;
                        }
                        else
                        {
                                flag=0;
                                break;
                        }

                }
		else
		{
			flag=0;
			break;
		}

	}
	if(flag==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}
