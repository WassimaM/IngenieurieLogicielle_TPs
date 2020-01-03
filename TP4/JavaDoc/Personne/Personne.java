
public class Personne {

	//Variables d'instances
	private String nom,prenom;
	private byte age;
	
	//Variables de classe:Satatic
	private static short nbPersonne=0;
	private static String nomDev="Wassima";
	
	//Constructeur
	public Personne(String nom,String prenom)//byte age!!
	{
		this.nom=nom;
		this.prenom=prenom;
		//this.age=age;
		nbPersonne++;
	}	
	public Personne(String nom,String prenom, byte age)
	{
		this.nom=nom;
		this.prenom=prenom;
		this.age=age;
		//this.age=(byte)(age);
		nbPersonne++;
	}
	//bloc Static s'execute une seule fois
	static {nomDev="wassima";}
	
	public String toString()
	{
		 
		 return "Nom: " + nom + "Prenom: " + prenom + ",age: " + age + "."; 
	}
	
	
	//Getters
		public String getPersonne()
		{
			String prsn;
			prsn="Nom: "+nom+" Prenom: "+prenom;
			return prsn;
		}
	
	    public static short getNbPersonne()
	    {
	    	return nbPersonne;
	    }
	
	    public static String getNomDev()
	    {
	    	return nomDev;
	    }
	    
	    //Setters
	    public void setNom(String nom)
		{
			this.nom=nom;
		}
	    
	    public void setPrenom(String prenom)
		{
			this.prenom=prenom;
		}
	    
	    public void setAge(String prenom)
		{
			this.age=(byte)age;
		}

	    
	    /***Exercice 2***
	    int i = 60;    
	    short b =(short) (i + 5);
	    int i = (int)1.99;
	    
	    byte b1 =  (byte)200;
	    byte b2 = (byte)315;  
	    byte b3 = (byte)(b1 + b2);   
	    */
	    
	    
	    
	    
}
