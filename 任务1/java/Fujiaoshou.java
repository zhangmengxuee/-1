package ��ʦ����;

public class Fujiaoshou extends Jiaoshi implements Teacher{
	public Fujiaoshou(String name, String sex,int birthday,String zhicheng,int keshi){
		super(name,sex,birthday,zhicheng,keshi);
	}
		public double getsaraly() {
			return 3000+30*keshi;
		}
		public String display(){
	    	return "����:"+name+"\t�Ա�:"+sex+"\t��������:"+birthday+"\tְ��:"+zhicheng+"\t��ʱ:"+keshi;
	    }
		public double getsarally() {
			// TODO Auto-generated method stub
			return 0;
		}
}