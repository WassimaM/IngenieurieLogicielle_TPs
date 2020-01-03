
public class TestPersonne {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	

		Personne p1=new Personne("manssour","wassima");
		Personne p3  =new Personne("manssour","wassima",(byte)19);

		System.out.println("1) Appelle de toString()");
		System.out.println(p1);
		
		System.out.println("2) Appelle des accesseurs getters()");		
		System.out.println(p1.getPersonne()+" Nbr de personnes crées: " +p1.getNbPersonne()+"Nom Dev "+p1.getNomDev()); 
		
		
		//Notaion préférer
		//System.out.println(Personne.getNomDev());
		
		Personne p2=new Personne("manssour","wassima");
		System.out.println("\nNv Obj:"+ p1.getNbPersonne());
		p1.setNom("moussa");
		//p1.setAge(19);
		System.out.println(p1); 
		
	}

}
