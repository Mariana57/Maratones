import java.util.ArrayList;
import java.util.Scanner;
import java.util.Stack;


public class Main {
	
	 public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		int n = s.nextInt();
		
		
	    Stack<Integer> st = new Stack<>();
	    ArrayList<Integer> q = new ArrayList<>();

	    for(int i=0;i<n;i++){
	        st.push(i+1);
	        q.add(i+1);
	    }
	    
	    String str= ""+ q.get(0);
	    int c=1;
	    
	    for(int i=1;i<n;i++){
	    	str+=" "+ st.peek();
	    	st.pop();
	    	c++;
	    	if(c==n){
	    		break;
	    	}
	    	str+=" "+ q.get(i);
	    	c++;
	    	if(c==n){
	    		break;
	    	}
	    }
		
	    System.out.println(str);
		
		s.close();
	}
	
}