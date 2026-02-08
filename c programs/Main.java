public class Main{
    public void java_calc(){
        System.out.println("Now Start Calculating!");
    }

    public void add(int a, int b){
        int c = a + b;
        System.out.println("Answer is : " + c);
    }

    public static void main(String[] args){
        Main calc = new Main();
        calc.java_calc();
        calc.add(5,6);
    }
}