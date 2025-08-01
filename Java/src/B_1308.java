import java.util.Scanner;

public class B_1308 {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String line1 = input.nextLine();

        String[] date1 = line1.split(" ");

        int year1 = Integer.parseInt(date1[0]);
        int month1 = Integer.parseInt(date1[1]);
        int day1 = Integer.parseInt(date1[2]);

        String line2 = input.nextLine();

        String[] date2 = line2.split(" ");

        int year2 = Integer.parseInt(date2[0]);
        int month2 = Integer.parseInt(date2[1]);
        int day2 = Integer.parseInt(date2[2]);

        if ( ((year2 - year1 == 1000) && (((month2 - month1 == 0) && (day2 - day1 >= 0)) || (month2 - month1 > 0))) || (year2 - year1 > 1000)) {
            System.out.println("gg");
            return;
        }

        int dayPassed = 0;

        if (year1 == year2) {
            boolean isLeap = (year1 % 400 == 0) || ((year1 % 4 == 0) && (year1 % 100 != 0));
            int[] monthDays = {0, 31, (isLeap ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            // 1. 첫 달(m1) 일수
            dayPassed += monthDays[month1] - day1;
            // 2. 사이(m1 ~m2)에 있는 달
            for (int m = month1 + 1; m < month2; m++) {
                dayPassed += monthDays[m];
            }
            // 3. 마지막 달(m2) 일수
            dayPassed += day2;
        } else {
            // 1. (year1)년
            boolean isLeap1 = (year1 % 400 == 0) || ((year1 % 4 == 0) && (year1 % 100 != 0));
            int[] monthDays1 = {0, 31, (isLeap1 ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            // 1-1. 해당 달의 일 수
            dayPassed += monthDays1[month1] - day1;
            // 1-2. 남은(이후) 달의 일 수
            for (int m = month1 + 1; m <= 12; m++) {
                dayPassed += monthDays1[m];
            }

            // 2. (year1 + 1)년 ~ (year2 - 1)년
            for (int y = year1+1; y < year2; y++) {
                boolean isLeap = (y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0));
                int[] monthDays = {0, 31, (isLeap ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

                for (int m = 1; m <= 12; m++) {
                    dayPassed += monthDays[m];
                }
            }

            // 3. (year2)년
            boolean isLeap2 = (year1 % 400 == 0) || ((year1 % 4 == 0) && (year1 % 100 != 0));
            int[] monthDays2 = {0, 31, (isLeap2 ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
            // 3-1. 이전 달의 일 수
            for (int m = 1; m < month2; m++) {
                dayPassed += monthDays2[m];
            }
            // 3-2. 해당 달의 일 수
            dayPassed += day2;
        }

        System.out.println("D-" + dayPassed);
    }
}
