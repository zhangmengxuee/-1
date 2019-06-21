package 教师工资;

public abstract class Jiaoshi implements Teacher{
	String name;//字符型变量 教师姓名
	String sex;//字符型变量 教师性别
    int birthday;//整型变量 出生年月
	String zhicheng;//字符型变量 教师职称
	int keshi;//整型变量 课时工作量
	//设置成员变量的函数定义
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
    	 return "姓名"+name+"\t性别"+sex+"\t出生年月"+birthday+"\t职称"+zhicheng+"\t课时"+keshi;
    }
    public static void main(String[] args) {
    	 Jiaoshou j=new Jiaoshou("He","F",19880101,"教授",32);
	     System.out.print(j.display());
	     System.out.println("\t工资:"+j.getsaraly());
	     Fujiaoshou f=new Fujiaoshou("Qi","M",19811013,"副教授",64);
	     System.out.print(f.display());
	     System.out.println("\t工资："+f.getsaraly());
	     Jiangshi s=new Jiangshi("Peng","M",19800607,"讲师",48);
	     System.out.print(s.display());
	     System.out.println("\t工资:"+s.getsaraly());
	}
	public double getsaraly() {
		// TODO Auto-generated method stub
		return 0;
	}
}