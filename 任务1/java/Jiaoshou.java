package ��ʦ����;

public class Jiaoshou extends Jiaoshi implements Teacher{
	public Jiaoshou(String name,String sex,int birthday,String zhicheng,int keshi){
		super(name,sex,birthday,zhicheng,keshi);
	}
	public double getsaraly() {//н����㺯��
		return 5000+50*keshi;
	}
	public String display(){ //��ʾ����
    	return "����:"+name+"\t�Ա�:"+sex+"\t��������:"+birthday+"\tְ��:"+zhicheng+"\t��ʱ:"+keshi;
    }
	public double getsarally() {
		// TODO Auto-generated method stub
		return 0;
	}
}