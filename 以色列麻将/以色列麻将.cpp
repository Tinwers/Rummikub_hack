//��ɫ���齫 2�˰汾
#include<bits/stdc++.h>
#include<windows.h>
#define us using
#define nsp namespace
us nsp std;
#define vo void
#define co cout
#define sys system
string wanjia1_yanse[100],wanjia2_yanse[100];//���1��ʹ���ߣ���Ҷ��Ƕ���
int wanjia1_shuzi[100],wanjia2_shuzi[100]; //������һһ��Ӧ 
int chess_group1[4][13],chess_group2[4][13];//��һ�� red; �ڶ��� blue;������ yellow;������ blank 
int special1,special2;//������2�� 
bool shunxu;// �Ⱥ��ж��׶� bool(���ֻ���)
vo UI(){
	sys("title ��ɫ���齫�ж���(2�˰�)");
	co<<"     ����ɫ���齫 2�˰汾��"<<endl;
	co<<"------�ȴ�2��,������ʼ��Ϸ------"<<endl;
	Sleep(2000);
}
vo zhunbei(){
	cout<<"�� ����&����׼�� ��"<<endl;
	cout<<"���������ж����ɸ��˿������������ã������˲����κη������Σ�" <<endl; 
	cout<<"����ǰ׼����"<<endl;
	cout<<"    1. 4����ɫ����ͨ�Ƹ�13�ţ���1��13."<<endl;
	cout<<"    2. 2��������"<<endl; 
	Sleep(2000);
	sys("cls");
}
vo xianhou(){
	int x1,x2;
	cout<<"�� �Ⱥ��ж��׶� ��"; 
	co<<endl<<"��ÿ����һ����"<<endl;
	co<<"�����õ��Ƶ�����(����������14)"<<endl;
	co<<"�㣺";
	cin>>x1;
	co<<"���֣�";
	cin>>x2;
	if(x1>x2){
		co<<"���ȳ�"<<endl;
		shunxu=true;
		Sleep(2000);
		sys("cls");
	}else if(x1==x2){
		co<<"ƽ��"<<endl;
		xianhou();
	}else{
		co<<"�����ȳ�"<<endl;
		shunxu=false;
		Sleep(2000);
		sys("cls");
	}
}
vo mopai(){
	cout<<"�� ���ƽ׶� ��"<<endl; 
	if(shunxu==true){
		co<<"��������(14��)��Ȼ���������14��"<<endl;
		co<<"��������������(ʾ������1-red 1)��";
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
				//�������ж� 
			}
			 
		}
		cout<<"��������������ƣ�";
		for(int i=0;i<14;i++){
			co<<i+1<<". ";
			cin>>wanjia2_yanse[i];
			cin>>wanjia2_shuzi[i];
		} 
		 
	}
	if(shunxu==false){
		co<<"����������(14��)��Ȼ��������14��"<<endl;
		co<<"���������������(ʾ������1-red 1)��";
		for(int i=0;i<14;i++){
			cin>>wanjia2_yanse[i];
			cin>>wanjia2_shuzi[i];
		}
		cout<<"�������������ƣ�";
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
