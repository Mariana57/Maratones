import java.util.Scanner;


public class bitmask {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner s = new Scanner(System.in);
		
		int m= s.nextInt();
		s.nextLine();

		while(m>0){
		   
			String st = s.nextLine();
			
			String [] a = st.split(" ");
			
			int [] d = new int[a.length];
			
			for(int i=0;i<d.length;i++){
				
				d[i]=Integer.parseInt(a[i]);
			}
			
			int n = (1<< a.length);
			
			
			boolean t= false;
			for(int i=1;i<n;i++){
				int x=0,y=0;
				int c=0;
				int j=0;
				
				while(c<i || j<a.length){
					if( (i&(1<<j))!=0){
						x+=d[j];
						c+=(1<<j);
					}
					else{
						y+=d[j];
					}
					j++;
				}
				
				if(x==y){
					t=true;
					break;
				}
			}
			if(t==true){
				System.out.println("YES");
			}
			else{
				System.out.println("NO");
			}
			m--;
		}
		
		s.close();
	}

}
