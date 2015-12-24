import java.util.Scanner;


public class eevee {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			
		Scanner s = new Scanner(System.in);
		
		int n = s.nextInt();
		s.nextLine();
		
		String st = s.nextLine();
		
		if(n==8){
			
			System.out.println("vaporeon");
		}else if(n==6){
				
			System.out.println("espeon");
		}else{
			
			String [] a ={"umbreon","jolteon","flareon", "leafeon" ,"glaceon" ,"sylveon"};
			
				int m=0;
				int c=0;
				for(int i=0;i<a[0].length();i++){
					
					if(st.charAt(i)==a[0].charAt(i)){
						c++;
					}
				}
				
				for(int i=1;i<a.length;i++ ){
					int aux=0;
					for(int j=0;j<a[i].length();j++){
						
						if(st.charAt(j)==a[i].charAt(j)){
							aux++;
						}
					}
					if(aux>c){
						c=aux;
						m=i;
					}
				}
				
				System.out.println(a[m]);
			}
						
		 
		
		
		s.close();
	}

}
