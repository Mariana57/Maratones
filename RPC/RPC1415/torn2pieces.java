import java.util.HashMap;
import java.util.HashSet;
import java.util.Scanner;


public class torn2pieces {
	
		static HashMap<String, HashSet<String> > m;
		static HashMap<String, Boolean> visit;
		static String road;
		static boolean f;
		
		public static void main(String[] args) {
			
			Scanner s = new Scanner(System.in);
			
			int n;
			String l;
			
			while(s.hasNextInt()){
				
				m = new HashMap<String, HashSet<String> >();
				n = s.nextInt();
				s.nextLine();
				String []a;
				
				while(n>0){
			
					l =s.nextLine();
					a = l.split(" ");
					
					HashSet<String> ad = new HashSet<String>();
					
					for(int i=1;i<a.length;i++){
		
						ad.add(a[i]);
						
						if(m.containsKey(a[i])){
							m.get(a[i]).add(a[0]);
						}
						else{
							HashSet<String> ads = new HashSet<String>();
							ads.add(a[0]);
							m.put(a[i],ads);
						}
					}
					
					m.put(a[0], ad);
					n--;
				}
				
				
				l =s.nextLine();
				a = l.split(" ");
				visit= new HashMap<String, Boolean>();
				f=false;
				road ="";
				
				if(m.containsKey(a[0]) && m.containsKey(a[1])){
					
					if(dfs(a[0],a[1])){
						System.out.println(a[0]+" "+ road.substring(0, road.length()-1) );
						
					}else{
						System.out.println("no route found");
					}
				}else{
					System.out.println("no route found");
				}
				
			}
			
			s.close();
		}
		
		
		public static boolean dfs(String start,String end){
			
			if(start.equals(end) ){
				f = true;
				return true;
			}
			
			visit.put(start, true);
			
			HashSet<String> a = m.get(start);	
			
			for(String s : a){
				
				if(f){
					break;
				}
				
				if(visit.get(s)==null)
				{	
					if(dfs(s, end)){
						road= s+" " + road;
						break;
					}
				}
					
			}
			
			return f;
		}
}
