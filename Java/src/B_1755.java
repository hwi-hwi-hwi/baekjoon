import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class B_1755 {

    static String toEnglish(int num) {
        String[] words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

        if (num < 10) {
            return words[num];
        } else {
            return words[num / 10] + " " + words[num % 10];
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
         int m = input.nextInt();
         int n = input.nextInt();

        List<NumberWord> list = new ArrayList<>();

        for(int i = m; i <= n; i++){
            list.add(new NumberWord(i, toEnglish(i)));
        }

        list.sort(Comparator.comparing(nw -> nw.word));

        for (int i = 0; i < list.size(); i++) {
            System.out.print(list.get(i).number + " ");

            if ((i + 1) % 10 == 0) {
                System.out.println();
            }
        }
    }

    static class NumberWord {
        int number;
        String word;

        NumberWord(int number, String word) {
            this.number = number;
            this.word = word;
        }
    }
}
