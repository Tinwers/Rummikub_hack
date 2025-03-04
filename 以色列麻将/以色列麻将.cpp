//以色列麻将 2人版本
#include<bits/stdc++.h>
#include<windows.h>
#define us using
#define nsp namespace
us nsp std;
#define vo void
#define co cout
#define sys system
string wanjia1_yanse[100],wanjia2_yanse[100];//玩家1是使用者，玩家二是对手
int wanjia1_shuzi[100],wanjia2_shuzi[100]; //与上面一一对应 
int chess_group1[4][13],chess_group2[4][13];//第一排 red; 第二排 blue;第三排 yellow;第四排 blank 
int special1,special2;//万能牌2张 
bool shunxu;// 先后判定阶段 bool(对手或你)
vo UI(){
	sys("title 以色列麻将判定器(2人版)");
	co<<"     【以色列麻将 2人版本】"<<endl;
	co<<"------等待2秒,即将开始游戏------"<<endl;
	Sleep(2000);
}
vo zhunbei(){
	cout<<"【 声明&游玩准备 】"<<endl;
	cout<<"声明：此判定器由个人开发，可以商用，但本人不负任何法律责任！" <<endl; 
	cout<<"游玩前准备："<<endl;
	cout<<"    1. 4种颜色的普通牌各13张，由1到13."<<endl;
	cout<<"    2. 2张万能牌"<<endl; 
	Sleep(2000);
	sys("cls");
}
vo xianhou(){
	int x1,x2;
	cout<<"【 先后判定阶段 】"; 
	co<<endl<<"请每人拿一张牌"<<endl;
	co<<"输入拿到牌的数字(万能牌输入14)"<<endl;
	co<<"你：";
	cin>>x1;
	co<<"对手：";
	cin>>x2;
	if(x1>x2){
		co<<"你先出"<<endl;
		shunxu=true;
		Sleep(2000);
		sys("cls");
	}else if(x1==x2){
		co<<"平局"<<endl;
		xianhou();
	}else{
		co<<"对手先出"<<endl;
		shunxu=false;
		Sleep(2000);
		sys("cls");
	}
}
vo mopai(){
	cout<<"【 摸牌阶段 】"<<endl; 
	if(shunxu==true){
		co<<"你先摸牌(14张)，然后对手再摸14张"<<endl;
		co<<"请输入你摸的牌(示例：红1-red 1)：";
		for(int i=0;i<14;i++){
			co<<i+1<<". ";
			cin>>wanjia1_yanse[i];
			cin>>wanjia1_shuzi[i];
			if(wanjia1_yanse[i]=="red"){
				chess_group1[0][i]=wanjia1_shuzi[i];
			}else if(wanjia1_yanse[i]=="blue"){
				chess_group1[1][i]=wanjia1_shuzi[i];
			}else if(wanjia1_yanse[i]=="yellow"){
				chess_group1[2][i]=wanjia1_shuzi[i];
			}else if(wanjia1_yanse[i]=="black"){
				chess_group1[3][i]=wanjia1_shuzi[i];
			}else{
				//特殊牌判定 
			}
			 
		}
		cout<<"请输入对手摸的牌：";
		for(int i=0;i<14;i++){
			co<<i+1<<". ";
			cin>>wanjia2_yanse[i];
			cin>>wanjia2_shuzi[i];
		} 
		 
	}
	if(shunxu==false){
		co<<"对手先摸牌(14张)，然后你再摸14张"<<endl;
		co<<"请输入对手摸的牌(示例：红1-red 1)：";
		for(int i=0;i<14;i++){
			cin>>wanjia2_yanse[i];
			cin>>wanjia2_shuzi[i];
		}
		cout<<"请输入你摸的牌：";
		for(int i=0;i<14;i++){
			cin>>wanjia1_yanse[i];
			cin>>wanjia1_shuzi[i];
		}
	}
}
int main(){
	UI();
	sys("cls");
	zhunbei();
	xianhou();
	mopai();
	return 0;
}
