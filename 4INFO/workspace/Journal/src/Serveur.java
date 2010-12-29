import java.util.ArrayList;

public class Serveur {

	public Internaute[] internautes;
	public static final int L = 10;
	public static final int R = L * 2;
	public static final int K = 10;
	public int nblus;
	public int nbecrits;
	public int nbecrAtt;
	public int nblecAtt;

	public ArrayList<Internaute> listAttente;
	public int lectecr = 1;
	public int ecriture = 1;

	public Serveur() {
		internautes = new Internaute[K];
		this.nblus = 0;
		this.nbecrits = 0;
		this.nbecrAtt = 0;
		this.nblecAtt = 0;
		this.listAttente = new ArrayList<Internaute>();
	}

	public static boolean alea() {
		return Math.random() < 0.5;
	}

	synchronized public void ecrireArticle(int i) throws InterruptedException {
		// début lecture
		if (lectecr == 1) {
			lectecr--;
			if (ecriture == 1) {
				ecriture--;
			} else {
				listAttente.add(internautes[i]);
				internautes[i].wait();
			}
		} else {
			listAttente.add(internautes[i]);
			internautes[i].wait();
		}
		// fin lecture
		if (ecriture == 0) {
			ecriture++;
			this.findMaxPrio().notify();
			if (lectecr == 0) {
				lectecr++;
			} else {
				listAttente.add(internautes[i]);
				internautes[i].wait();
			}
		} else {
			listAttente.add(internautes[i]);
			internautes[i].wait();
		}
	}

	synchronized public void lireArticle() {

	}
	
	public Internaute findMaxPrio(){
		Internaute res = new Internaute(0);
		int priomax = 0;
		for(Internaute inter : listAttente){
			if(inter.priority>priomax){
				priomax = inter.priority;
				res = inter;
			}
		}
		listAttente.remove(res);
		return res;
	}

	public static void main(String[] args) {

	}
}
