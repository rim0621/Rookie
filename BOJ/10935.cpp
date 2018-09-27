//바이너리로 변환후 6개씩 끊어서!!!
#include<iostream>
#include<memory.h>
#include<map>
#include<string>
#include<bitset>
using namespace std;

map<int,char> makeTable()
{
	map<int,char> m;
	int index=0;
	char tmp;

	tmp='A';
	for(;index<26;index++)
	{
		m.insert(pair<int,char>(index,tmp));
		tmp++;
	}
	
	tmp='a';
	for(;index<52;index++)
	{
		m.insert(pair<int,char>(index,tmp));
		tmp++;
	}
	
	tmp='0';
	for(;index<62;index++)
	{
		m.insert(pair<int,char>(index,tmp));
		tmp++;
	}
	m.insert(pair<int,char>(62,' '));
	m.insert(pair<int,char>(63,'/'));

/*	for(map<int,char>::iterator iter = m.begin(); iter!=m.end();++iter)
	{
		cout<<iter->second<<" ";
	}
	cout<<endl;
*/
	return m;
}

int main()
{
	map<int,char> m;
	m=makeTable();
	string input;
	cin>>input;
	cout<<(int)input[0]<<endl;
	int len;
	if(input.size()%3==0){
		len = ((input.size()/3))*24;
	}else{
		len = ((input.size()/3)+1)*24;
	}//base64 encoding is for 24bits(char 3개)

	int bitsLen[len];
	memset(bitsLen,0,sizeof(bitsLen));
	int index=7;
	for(int i=0;i<input.size();i++)		//chage binary
	{
		for(int j=0;j<8;j++)
		{
			(input[i] % 2) ? bitsLen[index-j]=1 : bitsLen[index-j]=0;
			cout<<(int)input[i]<<endl;
			input[i] /=2;
		}
		index+=8;
	}

	index=5;
// 6개씩짤라서... map과 매칭 =주의!	


	for(int i=0;i<len;i++)
	{
		cout<<bitsLen[i];
	}
	cout<<endl;

	return 0;
}
