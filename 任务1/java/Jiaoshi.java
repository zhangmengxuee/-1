package ��ʦ����;

public abstract class Jiaoshi implements Teacher{
	String name;//�ַ��ͱ��� ��ʦ����
	String sex;//�ַ��ͱ��� ��ʦ�Ա�
    int birthday;//���ͱ��� ��������
	String zhicheng;//�ַ��ͱ��� ��ʦְ��
	int keshi;//���ͱ��� ��ʱ������
	//���ó�Ա�����ĺ�������
    public String setname(){return name;}
    public String setsex(){return sex;}
    public int setbirthday(){return birthday;}
    public String setzhicheng(){return zhicheng;}
    public int setkeshi(){return keshi;}
   
    public void getname(String name)
    {
    	this.name=name;
    }
    public void getsex(String sex)
    {
    	this.sex=sex;
    }
    public void birthday(int birthday)
    {
    	this.birthday=birthday;
    }
    public void zhicheng(String zhicheng)
    {
    	this.zhicheng=zhicheng;
    }
    public void keshi(int keshi)
    {
    	this.keshi=keshi;
    }
    public Jiaoshi(String name1,String sex1,int birthday1,String zhicheng1,int keshi1)
	{
		name=name1;
		sex=sex1;
		birthday=birthday1;
		zhicheng=zhicheng1;
		keshi=keshi1;
	}
    public String display()
    {
    	 return "����"+name+"\t�Ա�"+sex+"\t��������"+birthday+"\tְ��"+zhicheng+"\t��ʱ"+keshi;
    }
    public static void main(String[] args) {
    	 Jiaoshou j=new Jiaoshou("He","F",19880101,"����",32);
	     System.out.print(j.display());
	     System.out.println("\t����:"+j.getsaraly());
	     Fujiaoshou f=new Fujiaoshou("Qi","M",19811013,"������",64);
	     System.out.print(f.display());
	     System.out.println("\t���ʣ�"+f.getsaraly());
	     Jiangshi s=new Jiangshi("Peng","M",19800607,"��ʦ",48);
	     System.out.print(s.display());
	     System.out.println("\t����:"+s.getsaraly());
	}
	public double getsaraly() {
		// TODO Auto-generated method stub
		return 0;
	}
}