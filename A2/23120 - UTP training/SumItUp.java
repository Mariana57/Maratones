import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Scanner;


public class SumItUp {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		
		String st = s.nextLine();
		String [] sa = st.split(" ");
		int n = Integer.parseInt(sa[1]);
		int [] a = new int[n];
		
		for(int i=0;i<n;i++){
			a[i]= Integer.parseInt(sa[i+2]);
		}
		
		int t=Integer.parseInt(sa[0]);
		
		
		while(t!=0){
			
			int c=(1<<n);
			ArrayList<String> res = new ArrayList<>();
			HashMap<String, Integer> mp = new HashMap<>();
			
			for(int i=0;i<c;i++){
				ArrayList<Integer> d = new ArrayList<>(); 
				
				for(int j=0;j<n;j++){
					if( (i&(1<<j))!=0){
						d.add(a[j]);
					}
				}
				
				int ti =0;
				for(int j=0;j<d.size();j++){
					ti+=d.get(j);
				}
				
				if(ti==t){
					
					Collections.sort(d);
					String u ="";
					
					for(int j=0;j<d.size()-1;j++){
						u+=d.get(d.size()-1-j)+"+";
					}
					u+=d.get(0);
					
					if(!mp.containsKey(u)){
						res.add(u);
						mp.put(u, 1);
					}
				}
			}
			
			
			Collections.sort(res);
			
			if(res.size()>0){
				System.out.println("Sums of "+t+":");
				for(int i=0;i<res.size();i++){
					System.out.println(res.get(res.size()-1-i));
				}
				
			}else{
				System.out.println("Sums of "+t+":");
				System.out.println("NONE");
			}
			
			
			st = s.nextLine();
			sa = st.split(" ");
			n = Integer.parseInt(sa[1]);
			a = new int[n];
			
			for(int i=0;i<n;i++){
				a[i]= Integer.parseInt(sa[i+2]);
			}
			
			t=Integer.parseInt(sa[0]);
		}
		
		s.close();
		
	}

}
