
import java.util.Scanner;

public class PasswordCheck {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String correctPassword = "password123"; // Set your correct password here
        int attempts = 0;
        boolean accessGranted = false;

        while (attempts < 3) {
            System.out.print("Enter your password: ");
            String inputPassword = scanner.nextLine();
            attempts++;

            if (inputPassword.equals(correctPassword)) {
                accessGranted = true;
                break;
            } else {
                System.out.println("Incorrect password. Try again.");
            }
        }

        if (accessGranted) {
            System.out.println("Access granted.");
        } else {
            System.out.println("Too many attempts. Access denied.");
        }

        scanner.close();
    
		
		
	}
}