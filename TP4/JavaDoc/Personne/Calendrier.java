
public class Calendrier {

	public enum Jour {LUNDI,Mardi,MERCREDI,JEUDI,VENDREDI,SAMEDI,DIMANCHE};
	public enum Mois {janvier,fevrier,mars,avril,mai,juin,juillet,aout,septembre,octobre,novembre,decembre};
	
	private Jour jr;
	private Mois ms;
	private byte date;
	private short annee;
	
	public Calendrier( Jour jr,byte date,short annee,Mois ms)
	{
		this.jr=Jour.LUNDI;
		this.ms=Mois.janvier;
		this.date=date;
		this.annee=annee;
	
	}
	
	
}
