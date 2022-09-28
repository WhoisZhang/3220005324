//MyApp小学生四则运算系统
#include<iostream>
#include<fstream>
#include<string>
#include<time.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>

using namespace std;

int main()
{
	
	//向txt文档中写入答案 
	ofstream outfile;
	outfile.open("Answers.txt",ofstream::app);
	
	//向txt文档中写入算数题目 
	ofstream dataFile;
	dataFile.open("Exercises.txt",ofstream::app);
	
	 
	int e1,e2,e3,e4,t,fh;//定义随机数及算数符号
	int n;//题目数量
	char fhchose;//算数符号选择
	int fhnum;//算数符号数量
	int r;//取值范围
	srand((unsigned)time(0));//srand函数是以现在系统时间作为 时间种子产生随机数
	cout << "\n ~~~~~~~欢迎使用小学生四则运算系统~~~~~~~ \n";
	cout << "\n *请输入题目数量：";
	cin >> n;
	cout << "\n *请选择是否有乘除法（y/n）：";
	cin >> fhchose;
	cout << "\n *请输入算数符号数量(1~3)：";
	cin >> fhnum;
	cout << "\n *请输入一个值确定算式中数值取值范围：";
	cin >> r;
	cout << "\n ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
	
	switch(fhnum)
	{
		case 1:
			for(int i=0;i<n;i++)
			{
			e1=rand()%r;
			e2=rand()%r;
			e3=rand()%r;
			e4=rand()%r;
			
			if(fhchose == 'n')//无乘除法
			{
			fh=rand()%4;//四种加减法(整数加减法、分数加减法) 
			} 
			if(fhchose == 'y')//有乘除法
			{
			fh=rand()%8;//八种情况 
			} 
			switch(fh)
			{
			case 0://整数加法
				cout << e1 << "+" << e2 << "=  \n"; 
				dataFile << e1 << "+" << e2 << "=  \n";//写入算数式子 
				outfile << e1+e2 <<"\n";//写入答案 
				break;
			case 1://整数减法(无负数) 
				if(e1<e2)
				{
					cout << e2 << "-" << e1 << "=  \n";
					dataFile << e2 << "-" << e1 << "=  \n";
					outfile << e2-e1 << "\n"; 
				}
				 else
				 {
				 	cout << e1 << "-" << e2 << "=  \n";
					dataFile << e1 << "-" << e2 << "=  \n"; 
					outfile << e1-e2 << "\n";
				 }
				break;
			case 2://分数加法 
			    //真分数 
			    if(e1>e3)
			    {
			    	t=e1;
					e1=e3;
					e3=t;
				}
				if(e2>e4)
				{
					t=e2;
					e2=e4;
					e4=t;
				}
				cout << "(" << e1 << "/" << e3 << ")" << "+" << "(" << e2 << "/" << e4 << ")" << "=  \n";
				dataFile << "(" << e1 << "/" << e3 << ")" << "+" << "(" << e2 << "/" << e4 << ")" << "=  \n";
				outfile << e1*e4+e2*e3 << "/" << e3*e4 << "\n";
				break;
			case 3://分数减法 
			    //真分数 
			    if(e1>e3)
			    {
			    	t=e1;
					e1=e3;
					e3=t;
				}
				if(e2>e4)
				{
					t=e2;
					e2=e4;
					e4=t;
				}
				//减法结果无负数
				if(e1*e4-e2*e3 < 0)
				{
					cout << "(" << e2 << "/" << e4 << ")" << "-" << "(" << e1 << "/" << e3 << ")" << "=  \n";
					dataFile << "(" << e2 << "/" << e4 << ")" << "-" << "(" << e1 << "/" << e3 << ")" << "=  \n";
					if((e2*e3-e1*e4)/(e3*e4)==0)
					{
						outfile << e2*e3-e1*e4 << "/" << e3*e4 << "\n";
					}
					else
					{
						outfile << (e2*e3-e1*e4)/(e3*e4) <<"'"<<(e2*e3-e1*e4)%(e3*e4) << "/" << e3*e4 << "\n";
					}
				 }
				 else
				 {
				 	cout << "(" << e1 << "/" << e3 << ")" << "-" << "(" << e2 << "/" << e4 << ")" << "=  \n";
				 	dataFile << "(" << e1 << "/" << e3 << ")" << "-" << "(" << e2 << "/" << e4 << ")" << "=  \n";
				 	if((e1*e4-e2*e3)/(e3*e4)==0)
					{
						outfile << e1*e4-e2*e3 << "/" << e3*e4 << "\n";
					}
					else
					{
						outfile << (e1*e4-e2*e3)/(e3*e4) <<"'"<<(e1*e4-e2*e3)%(e3*e4) << "/" << e3*e4 << "\n";
					}
				  } 
				break;
			case 4://整数乘法
			    cout << e1 << "*" << e2 << "=  \n";
			    dataFile << e1 << "*" << e2 << "=  \n";
			    outfile << e1*e2 << "\n";
				break;
			case 5://整数除法
			    if(e2==0)//分母为0 
				{
					i=i-1;
				 } 
				 else //分母不为0 
				 {
				 	if(e1%e2==0)//除法没有余数
					 {
					 	cout << e1 << "/" << e2 << "=  \n";
					 	dataFile << e1 << "/" << e2 << "=  \n";
					 	outfile << e1/e2 << "\n";
					  } 
					  else
					  {
					  	cout << e1 << "/" << e2 << "=  \n";
					  	dataFile << e1 << "/" << e2 << "=  \n";
					  	if(e1/e2==0)
					  	{
					  		outfile << e1%e2 << "/" << e2 << "\n";
						  }
						  else 
						  {
						  	outfile << e1/e2 << "'" << e1%e2 << "/" << e2 << "\n";
						  }
					  }
				 }
				break;
			case 6://分数乘法
			    if(e1>e3)
			    {
			    	t=e1;
					e1=e3;
					e3=t;
				}
				if(e2>e4)
				{
					t=e2;
					e2=e4;
					e4=t;
				}
				cout << "(" << e1 << "/" << e3 << ")" << "*" << "(" << e2 << "/" << e4 << ")" << "=  \n";
				dataFile << "(" << e1 << "/" << e3 << ")" << "*" << "(" << e2 << "/" << e4 << ")" << "=  \n";
				if((e1*e2)/(e3*e4)==0)
				{
					outfile << e1*e2 << "/" << e3*e4 << "\n";
				}
				else
				{
					outfile << (e1*e2)/(e3*e4) << "'" << (e1*e2)%(e3*e4) << "/" << (e3*e4) << "\n";
				}
				break;
			case 7://分数除法
			    if(e1>e3)
			    {
			    	t=e1;
					e1=e3;
					e3=t;
				}
				if(e2>e4)
				{
					t=e2;
					e2=e4;
					e4=t;
				}
				cout << "(" << e1 << "/" << e3 << ")" << "/" << "(" << e2 << "/" << e4 << ")" << "=  \n";
				dataFile << "(" << e1 << "/" << e3 << ")" << "/" << "(" << e2 << "/" << e4 << ")" << "=  \n";
				if((e1*e4)/(e2*e3)==0)
				{
					outfile << e1*e4 << "/" << e2*e3 << "\n";
				}
				else
				{
					outfile <<(e1*e4)/(e2*e3) << "'" << (e1*e4)%(e2*e3) << "/"<< e2*e3 << "\n";
				}
				break;
			default:
			    break; 
			}
			}
			break;
		default:
		    break; 
	}
 } 
 
