//main.cpp
#include"node.h"
#include<fstream>

void menu()
{
	cout << "��ѡ��" << endl;
	cout << "1. ����" << endl;
	cout << "2. ���" << endl;
	cout << "3. ��ѯ" << endl;
	cout << "4. �޸�" << endl;
	cout << "5. ɾ��" << endl;
	cout << "6. ��ʾ" << endl;
	cout << "7. �ļ�����" << endl;
	cout << "8. �ļ�����" << endl;
	cout << "9. �˳�" << endl;
}


void main()
{
	node * listHead = NULL;
	node p;
	int choose, n;
	while (1)
	{
		menu();
		cin>>choose;
		if(choose == 1)
		{
			cout << "�����뼸��ͨѶ¼:";
			cin >> n;
			if (n > 0)
				listHead = p.chuangjian(n);
		}
		else if (choose == 2)
			p.charu(listHead);
		else if (choose == 3)
			p.find(listHead);
		else if (choose == 4)
			p.xuigai(listHead);
		else if (choose == 5)
			p.shanchu(listHead);
		else if (choose == 6)
			p.display(listHead);
		else if (choose == 7)
		{
			int z,i;
				cout<<"�����뵼������"<<endl;
				cin>>z;
				string x[100];
				ifstream infile;
				infile.open("tongxunlu.txt",ios::in);
				cout<<" ���   ����   �Ա�   ����   լ��   �ֻ����� "<<endl;
				for(i=0;i<6*z;i++)
				{
					infile>>x[i];
					cout<<"     "<<x[i];
					if((i+1)%6==0)
						cout<<endl;
	   			}
					infile.close();
               p.filein(listHead);
		}
		else if (choose == 8)
			p.fileout(listHead);
		else if (choose == 9)
			break;
}
		
}