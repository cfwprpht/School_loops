//*******************************************************************
// Welcome to CompileJava!
// If you experience any issues, please contact us ('More Info')  -->
//*******************************************************************
import java.lang.*;

public class School_Loop {
    public static void main(String[] args) throws Exception {
        int z = 5;
        while (true) {
            System.out.print("\rSchool loop: ");
            System.out.print(z);
            Thread.sleep(1000);
            if (z == 0) break;
            z--;            
        }
    }
}
