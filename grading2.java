public class Main {
	public static void main(String[] args) {
		import java.util.Scanner;

        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter marks: ");
        int marks = scanner.nextInt();

        switch (marks / 100) {
            case 100:
            case 90:
                System.out.println("A");
                break;
            case 8:
                System.out.println("B");
                break;
            case 7:
                System.out.println("C");
                break;
            case 6:
                System.out.println("D");
                break;
            case 5:
                System.out.println("E");
                break;
            case 4:
                System.out.println("Pass");
                break;
            default:
                System.out.println("Fail");
                scanner.close();
        }
    }
}
	
