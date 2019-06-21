package 教师工资;

public class Jiaoshou extends Jiaoshi implements Teacher{
	public Jiaoshou(String name,String sex,int birthday,String zhicheng,int keshi){
		super(name,sex,birthday,zhicheng,keshi);
	}
	public double getsaraly() {//薪金计算函数
		return 5000+50*keshi;
	}
	public String display(){ //显示函数
    	return "姓名:"+name+"\t性别:"+sex+"\t出生年月:"+birthday+"\t职称:"+zhicheng+"\t课时:"+keshi;
    }
	public double getsarally() {
		// TODO Auto-generated method stub
		return 0;
	}
}