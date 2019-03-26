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
	if(MessageBox(NULL,"您确定要走后门？","提示",MB_OKCANCEL+32)==1)
		{
		    energy+=20000;
		    diamond+=20000;
		    health+=20000;
		    system("cls");
		    statusZhcn();
		    MessageBox(NULL,"走后门成功\n能量,钻石,生命均加20000","提示",MB_OK+48);
	    }
	    else
	        MessageBox(NULL,"走后门取消","提示",MB_OK+64);
	mainZhcn();
}
void foodPlazaZhcn()
{
	system("cls");
	statusZhcn();
	cout<<"美食广场"<<endl;
	if(checkad==0)
	{
		if(MessageBox(NULL,"今年下半年，中美合拍的西游记即将正式开机，\n我继续扮演美猴王孙悟空，我会用美猴王艺术形象努力创造一个正能量的形象，\n文体两开花，弘扬中华文化，希望大家能多多关注。\n\n是否不再提示？","广告[来自知名国际影星]",MB_OKCANCEL+32)==1)
		{
		    MessageBox(NULL,"广告服务已取消","提示[谢罪！！]",MB_OK+48);
		    checkad=1;
	    }
	    else
	        MessageBox(NULL,"谢谢支持章承恩","提示",MB_OK+48);
	}
	char a[100];
	cout<<"1.零糖麦片[10钻]			2.包子[10钻]	  	3.(包子拍扁做的)馅饼[5钻]\nQ/q:返回"<<endl; 
	cin>>a;
	if(a[0]=='1')
	{
		if(diamond-10<0)
		{
			MessageBox(NULL,"钻石不足！！","XDE",MB_OK+16);
			foodPlazaZhcn();
		}
		MessageBox(NULL,"成功食用零糖麦片\n钻石-10\n[注意:由于零糖，并不能填补饥饿]","提示",MB_OK);
		diamond-=10;
	}
	else if(a[0]=='2')
	{
		if(diamond-10<0)
		{
			MessageBox(NULL,"钻石不足！！","XDE",MB_OK+16);
			foodPlazaZhcn();
		}
		MessageBox(NULL,"成功食用1个包子\n钻石-10\n[注意:生命值回复 10]","提示",MB_OK);
		diamond-=10;
		health+=10;
	}
	else if(a[0]=='3')
	{
		if(diamond-5<0)
		{
			MessageBox(NULL,"钻石不足！！","XDE",MB_OK+16);
			foodPlazaZhcn();
		}
		MessageBox(NULL,"成功食用1个馅饼\n钻石-5\n[注意:生命值回复 5]","提示",MB_OK);
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
	cout<<"办公区"<<endl; 
	cout<<"1.办公区内最好的计算器	Q/q:返回"<<endl;
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
	cout<<"你现在身处在XDE(新戴尔)大厦..."<<endl<<endl;
	cout<<"1.一层:美食广场        2.二层:办公区"<<endl;
	cout<<"3.三层:大型购物中心	  4.赚钱小游戏"<<endl;
	cout<<"    ---三层以上正在维修...---"<<endl;
	cout<<"\n温馨提示1:请访问https://xyz60552.github.io\n"<<endl;
	cout<<"温馨提示2:饥饿会影响健康的哦"<<endl;
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
		MessageBox(NULL,"攻城狮尽力了...","提示",MB_OK);
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
	cout<<"----能量："<<energy<<"/100"<<endl;
	cout<<"----健康："<<health<<"/100"<<endl; 
	cout<<"----钻石："<<diamond<<endl<<endl; 
	if(energy<=0||health<=0)
	{
		system("cls");
		cout<<"能量或生命为0"<<endl<<"GameOver游戏结束";
		Sleep(1000);
	}
}
void chooseLanguage()
{
	char l[11];
	cout<<"语言(Languages):"<<endl;
	cout<<"e.English  c.简体中文"<<endl;
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
	cout<<"办公区"<<endl;
	char l[8];
	cout<<"1.加法"<<endl;
	cin>>l;
	if(l[0]=='1')
		plusZhcn();

}
void plusZhcn()
{
	system("cls");
	statusZhcn();
	cout<<"办公区-加法"<<endl;
	char l[1024],r[1024],s[1024],lt[1024],rt[1024];
	cout<<"请输入A"<<endl;
    cin>>l;
    cout<<"请输入B"<<endl;
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
		  cout<<"请使用WASD操作"<<endl;
		  
} 
int main()
{
	system("title XDE");
	MessageBox(NULL,"近期有许多不法分子伪造XDE，如果发现吃到毒药或累死，请立刻退出并删除!","XDE",MB_OK+48);
	MessageBox(NULL,"确实要永久性地删除此文件吗","XDE",MB_OKCANCEL+16);
	MessageBox(NULL,"欢迎！","XDE中文",MB_OK);
	chooseLanguage();
	return 0;
}
