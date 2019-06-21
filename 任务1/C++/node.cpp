//node.cpp
#include "node.h"


node::node(void)
{
}


node::~node(void)
{
}


node * node:: chuangjian(int n)
{
	node *temp, *tail = NULL, *head = NULL ;
	string na, t, m;
	char s;
	int nu, a;
	cout<<"������"<< n <<"���˵ı�ţ��������Ա����䣬լ�磬�ֻ���"<<endl;
	cin >> nu >> na >> s >> a >> t >> m;
	head = new node ; 
	if (head == NULL) 
	{
		cout << "No memory available!"<<endl;
		return NULL;
	}
	else 
	{
		head->num = nu;
		head->name = na;
		head->sex = s;
		head->age = a;
		head->tele = t;
		head->mobile = m;
		head->next = NULL;
		tail = head;
	}

	for ( int i = 0; i < n-1 ; i ++) 
	{
		cin >> nu >> na >> s >> a >> t >> m;
		temp = new node ; 
		if (temp == NULL) 
		{
			cout << "No memory available!"<<endl;
			return head;
		}
		else	
		{
			temp->num = nu;
			temp->name = na;
			temp->sex = s;
			temp->age = a;
			temp->tele = t;
			temp->mobile = m;
			temp->next = NULL;
			tail->next = temp;
			tail = temp;
		}
	}

	return head ;
}

void node::display(node * head)
{
	cout << "ͨѶ¼: "<<endl;
	node *curNode = head;

	while (curNode) 
	{
		cout << curNode->num<<"     "<< curNode->name<<"     "<<
			curNode->sex<<"     "<< curNode->age<<"     "<< 
			curNode->tele<<"     "<< curNode->mobile;
		if (curNode ->next)
			cout << endl;
		curNode = curNode ->next;
	}

	cout << endl;
}

node * node:: charu( node * head)
{
	int n;
	cout<<"�������:"<<endl;
	cin>>n;
	string na,t,m;
	char s;
	int a;
	node *curNode = head;
	node *preNode = NULL;
	node *newNode = NULL;
    
	while ((curNode!=NULL)&&(curNode->num<n)) 
	{
		preNode = curNode;
		curNode = curNode->next; 
	}
   
	newNode = new node ;  
	if (newNode == NULL)
	{
		cout << "No memory available!";
		return head;	
	}
	cout<<"�������������Ա����䣬լ�磬�ֻ���"<<endl;
	cin>>na>>s>>a>>t>>m;
	newNode->num = n;
	newNode->name = na;
	newNode->sex = s;
	newNode->age = a;
	newNode->tele = t;
	newNode->mobile = m;

	if (preNode == NULL)
	{
		newNode->next = curNode; 
		return newNode; 
	}
	else  
	{
		preNode->next = newNode; 
		newNode->next = curNode; 
		return head; 
	}

}

node * node:: find( node * head)
{
	string n;
	cout<<"��������Ҫ��ѯ���������ֻ���"<<endl;
	cin>>n;
	cout<<endl;
	node *curNode = head;
	while ( curNode )  
	{
		if ( curNode->name == n||curNode->mobile==n)  
		{
			cout<<"Find "<<n<<" in the list."<<endl;
			cout<<"��ϸ��ϢΪ��"<<endl;
			cout << curNode->num<<"     "<< curNode->name<<"     "<<curNode->sex<<"     "<< curNode->age<<"     "<< curNode->tele<<"     "<< curNode->mobile;
			return curNode;
		}
		curNode = curNode->next;
	}

	cout<<"Can't find "<<n<<" in the list."<<endl;
	return NULL;
} 

node* node::xuigai(node *head)
{

	string na,t,m;
	char s;
	int a;
	int nu, p=1;
	cout<<"��������Ҫ�޸ĵ�������"<<endl;
	cin>>na;
	cout<<endl;
	node *curNode = head;
	while ( curNode )  
	{
		if ( curNode->name == na)  
		{
			cout<<"Find "<<na<<" in the list."<<endl;
			cout<<"�������޸���Ϣ��"<<endl;
			cin>>nu>>na>>s>>a>>t>>m;
			curNode->num = nu;
				curNode->name =na;
				curNode->sex  =s;
				curNode->age  =a;
				curNode->tele =t;
				curNode->mobile =m;
			p=2;
			return curNode;
		}
		curNode = curNode->next;
	}

	if(p==1)
	cout<<"Can't find "<<na<<" in the list."<<endl;
	return NULL;

}

node * node:: shanchu( node * head)
{  
	string na,se,ag,te,ph;
	cout<<"������Ҫɾ�������֣�";
	cin>>na;
	node *curNode = head;
	node *preNode = NULL;
	while (curNode && curNode->name != na) 
	  {
		  preNode = curNode;
		  curNode = curNode->next; 
	  }

	  if (curNode == NULL)
	  {
		  cout<<"Can't find "<<na<<" in the list"<<endl;
		  return head;
	  }
	  if (preNode == NULL) 
	  { head = head->next;cout<<"�ѳɹ�ɾ��";}
	  else
		  preNode->next = curNode->next; 

	  delete curNode;
	  return head;	
}

node * node::filein(node * head)
{
				int z,i;
				cout<<"�����뵼������"<<endl;
				cin>>z;
				string x[100];
				ifstream infile;
				infile.open("tongxunlu.txt",ios::in);
				cout<<" ��� ���� �Ա� ���� լ�� �ֻ����� "<<endl;
				for(i=0;i<6*z;i++)
				{
					infile>>x[i];
					cout<<"   "<<x[i];
					if((i+1)%6==0)
						cout<<endl;
	   			}
					infile.close();
					return 0;
}

node * node:: fileout( node * head)
{
	int n;
	   ofstream outfile ("tongxunlu.txt",ios::out);
         if(!outfile)
         {  
	       cerr<<"open error!"<<endl;
           exit(1);
         }
            cout<<"�����뼸����Ϣ��"<<endl;
            cin >> n ;
             cout<<endl;
	string	number,name,sex,age,telephone,phone;
		
	node *curNode = head;
	while (curNode) 
	{
		outfile << curNode->num<<"     "<< curNode->name<<"     "<<curNode->sex<<"     "<< curNode->age<<"     "<< curNode->tele<<"     "<< curNode->mobile<<endl;;
		if (curNode ->next)
			cout << endl;
		curNode = curNode ->next;
	}
}

