package 教师工资;

public class Jiangshi extends Jiaoshi implements Teacher{
	public Jiangshi(String name, String sex,int birthday, String zhicheng, int keshi) {
		super(name, sex, birthday, zhicheng, keshi);
	}
	public double getsaraly() {
		return 2000+20*keshi;
	}
	public String display(){
    	return "姓名:"+name+"\t性别:"+sex+"\t出生年月:"+birthday+"\t职称:"+zhicheng+"\t课时:"+keshi;
    }
	public double getsarally() {
		// TODO Auto-generated method stub
		return 0;
	}
}
