#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<ctime>
#include<windows.h>
using namespace std;
long long int energy=100,health=100,diamond=100,hunger=10;
bool checkad=0;
void haha();
void chooseLanguage();
void statusZhcn();
void mainZhcn();
void supercalcZhcn();
void plusZhcn();
void robbyZhcn(); 
void houmenZhcn()
{
	if(MessageBox(NULL,"��ȷ��Ҫ�ߺ��ţ�","��ʾ",MB_OKCANCEL+32)==1)
		{
		    energy+=20000;
		    diamond+=20000;
		    health+=20000;
		    system("cls");
		    statusZhcn();
		    MessageBox(NULL,"�ߺ��ųɹ�\n����,��ʯ,��������20000","��ʾ",MB_OK+48);
	    }
	    else
	        MessageBox(NULL,"�ߺ���ȡ��","��ʾ",MB_OK+64);
	mainZhcn();
}
void foodPlazaZhcn()
{
	system("cls");
	statusZhcn();
	cout<<"��ʳ�㳡"<<endl;
	if(checkad==0)
	{
		if(MessageBox(NULL,"�����°��꣬�������ĵ����μǼ�����ʽ������\n�Ҽ�����������������գ��һ�����������������Ŭ������һ��������������\n�����������������л��Ļ���ϣ������ܶ���ע��\n\n�Ƿ�����ʾ��","���[����֪������Ӱ��]",MB_OKCANCEL+32)==1)
		{
		    MessageBox(NULL,"��������ȡ��","��ʾ[л���]",MB_OK+48);
		    checkad=1;
	    }
	    else
	        MessageBox(NULL,"лл֧���³ж�","��ʾ",MB_OK+48);
	}
	char a[100];
	cout<<"1.������Ƭ[10��]			2.����[10��]	  	3.(�����ı�����)�ڱ�[5��]\nQ/q:����"<<endl; 
	cin>>a;
	if(a[0]=='1')
	{
		if(diamond-10<0)
		{
			MessageBox(NULL,"��ʯ���㣡��","XDE",MB_OK+16);
			foodPlazaZhcn();
		}
		MessageBox(NULL,"�ɹ�ʳ��������Ƭ\n��ʯ-10\n[ע��:�������ǣ������������]","��ʾ",MB_OK);
		diamond-=10;
	}
	else if(a[0]=='2')
	{
		if(diamond-10<0)
		{
			MessageBox(NULL,"��ʯ���㣡��","XDE",MB_OK+16);
			foodPlazaZhcn();
		}
		MessageBox(NULL,"�ɹ�ʳ��1������\n��ʯ-10\n[ע��:����ֵ�ظ� 10]","��ʾ",MB_OK);
		diamond-=10;
		health+=10;
	}
	else if(a[0]=='3')
	{
		if(diamond-5<0)
		{
			MessageBox(NULL,"��ʯ���㣡��","XDE",MB_OK+16);
			foodPlazaZhcn();
		}
		MessageBox(NULL,"�ɹ�ʳ��1���ڱ�\n��ʯ-5\n[ע��:����ֵ�ظ� 5]","��ʾ",MB_OK);
		diamond-=5;
		health+=5;
	}
	else if(a[0]=='Q'||a[0]=='q')
	{
		system("cls");
		statusZhcn();
	    mainZhcn();
	}
	else
	{
		cout<<"UNKNOWN ERROR!!"<<endl;
		Sleep(700);
	}
	foodPlazaZhcn();
}
void officeZhcn()
{
	system("cls");
	statusZhcn();
	char l[8];
	cout<<"�칫��"<<endl; 
	cout<<"1.�칫������õļ�����	Q/q:����"<<endl;
	cin>>l;
	if(l[0]=='1')
		supercalcZhcn();
	else if(l[0]=='Q'||l[0]=='q')
	{
		system("cls");
		statusZhcn();
		mainZhcn();
	}
	else
	{
	    cout<<"UNKNOWN ERROR!!!"<<endl;
	    Sleep(1000);
	    officeZhcn();
	}
}
void mainZhcn()
{
	cout<<"����������XDE(�´���)����..."<<endl<<endl;
	cout<<"1.һ��:��ʳ�㳡        2.����:�칫��"<<endl;
	cout<<"3.����:���͹�������	  4.׬ǮС��Ϸ"<<endl;
	cout<<"    ---������������ά��...---"<<endl;
	cout<<"\n��ܰ��ʾ1:�����https://xyz60552.github.io\n"<<endl;
	cout<<"��ܰ��ʾ2:������Ӱ�콡����Ŷ"<<endl;
	cout<<"-------------------------------------------\n"<<endl; 
	char a[15];
	cin>>a;
	if(strcmp(a,"1")==0)
	    foodPlazaZhcn();
	else if(strcmp(a,"houmen")==0)
	    houmenZhcn();
	else if(strcmp(a,"2")==0)
	    officeZhcn();
	else if(strcmp(a,"3")==0)
	{
		MessageBox(NULL,"����ʨ������...","��ʾ",MB_OK);
		system("cls");
	    statusZhcn();
		mainZhcn();
	}
	else if(strcmp(a,"4")==0)
	{
		system("cls");
		statusZhcn();
		robbyZhcn();
	} 
	else
	{
		system("cls");
		statusZhcn();
		mainZhcn();
	}
}
void statusZhcn()
{
	cout<<"----������"<<energy<<"/100"<<endl;
	cout<<"----������"<<health<<"/100"<<endl; 
	cout<<"----��ʯ��"<<diamond<<endl<<endl; 
	if(energy<=0||health<=0)
	{
		system("cls");
		cout<<"����������Ϊ0"<<endl<<"GameOver��Ϸ����";
		Sleep(1000);
	}
}
void chooseLanguage()
{
	char l[11];
	cout<<"����(Languages):"<<endl;
	cout<<"e.English  c.��������"<<endl;
	cin>>l;
	if(l[0]=='e')
	{
	   MessageBox(NULL,"Sorry,we haven't supported English yet.","XDE",MB_OK+48);
	   system("cls");
	   chooseLanguage();
    }
    else if(l[0]=='c')
	{
		system("cls");
	    statusZhcn();
	    mainZhcn();
	}
	else if(strcmp(l,"houmen")==0)
	{
		houmenZhcn();
		system("cls");
		statusZhcn();
		chooseLanguage();
	}
	else
	{
		system("cls");
	    chooseLanguage();
	}
}
void supercalcZhcn()
{
	system("cls");
	statusZhcn();
	cout<<"�칫��"<<endl;
	char l[8];
	cout<<"1.�ӷ�"<<endl;
	cin>>l;
	if(l[0]=='1')
		plusZhcn();

}
void plusZhcn()
{
	system("cls");
	statusZhcn();
	cout<<"�칫��-�ӷ�"<<endl;
	char l[1024],r[1024],s[1024],lt[1024],rt[1024];
	cout<<"������A"<<endl;
    cin>>l;
    cout<<"������B"<<endl;
    cin>>r;
    int ll,lr,i,t=0,ts,c=0;
    ll=strlen(l);
    lr=strlen(r);
    if(ll<lr)
    {
        for(i=0;i<lr-ll;i++)
        {
            lt[i]='0';
        }
        c=i;
        for(i=0;i<ll;i++)
        {
            lt[c++]=l[i];
        }
        l[c]='\0';
        for(i=0;i<lr;i++)
        {
            rt[i]=r[i];
        }
        rt[lr]='\0';
    }
    if(ll>lr)
    {
        for(i=0;i<ll-lr;i++)
        {
            rt[i]='0';
        }
        c=i;
        for(i=0;i<lr;i++)
        {
            rt[c++]=r[i];
        }
        r[c]='\0';
        for(i=0;i<ll;i++)
        {
            lt[i]=l[i];
        }
        lt[ll]='\0';
    }
    c=0;
	if(ll==lr){
	for(i=0;i<ll;i++)
		lt[i]=l[i];
	for(i=0;i<lr;i++)
		rt[i]=r[i];}
    for(i=max(ll,lr)-1;i>=0;i--)
    {
        ts=int(lt[i]-'0')+int(rt[i]-'0')+t;
        if(ts>=10)
            t=ts/10;
        else
            t=0;
        ts%=10;
        s[c++]=char(ts+int('0'));
    }
    if(t!=0)
	{
		s[c]=char(t+int('0'));
		s[c+1]='\0';
		for(i=c;i>=0;i--)
        	cout<<s[i];
		cout<<endl;
		system("pause");
		officeZhcn();

	}
	s[c]='\0';
	cout<<"A+B=";
    for(i=c-1;i>=0;i--)
        cout<<s[i];
	cout<<endl;
	system("pause");
	officeZhcn();
}
void robbyZhcn()
{
		  string m;
		  system("cls");
		  
	      cout<<"(..)"<<endl;
		  cout<<"{__}                              |--------|"<<endl; 
		  cout<<" ||                               |  BANK  |"<<endl; 
		  cout<<"----------------------------------|--------|-\n\n\n"<<endl;
		  cout<<"��ʹ��WASD����"<<endl;
		  
} 
int main()
{
	system("title XDE");
	MessageBox(NULL,"��������಻������α��XDE��������ֳԵ���ҩ���������������˳���ɾ��!","XDE",MB_OK+48);
	MessageBox(NULL,"ȷʵҪ�����Ե�ɾ�����ļ���","XDE",MB_OKCANCEL+16);
	MessageBox(NULL,"��ӭ��","XDE����",MB_OK);
	chooseLanguage();
	return 0;
}
