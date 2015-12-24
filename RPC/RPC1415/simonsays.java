import java.util.Scanner;


public class simonsays {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s =new Scanner(System.in);
		
		int n= s.nextInt();
		s.nextLine();
		String st="";
		for(int i =0;i<n;i++){
			
			st = s.nextLine();
			String [] a = st.split(" ");
			
			if(a.length>2){
				
				if(a[0].equals("Simon") && a[1].equals("says") ){
					
					String res=" ";
					for(int j=2;j<a.length-1;j++){
						res+=a[j]+" ";
					}
					res+=a[a.length-1];
					System.out.println(res);
				}
				
			}
		}
		
		s.close();
	}

}
