package ��ʦ����;

public class Jiangshi extends Jiaoshi implements Teacher{
	public Jiangshi(String name, String sex,int birthday, String zhicheng, int keshi) {
		super(name, sex, birthday, zhicheng, keshi);
	}
	public double getsaraly() {
		return 2000+20*keshi;
	}
	public String display(){
    	return "����:"+name+"\t�Ա�:"+sex+"\t��������:"+birthday+"\tְ��:"+zhicheng+"\t��ʱ:"+keshi;
    }
	public double getsarally() {
		// TODO Auto-generated method stub
		return 0;
	}
}
