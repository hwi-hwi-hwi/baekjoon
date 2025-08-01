import java.util.Scanner;
import java.time.Month;

public class B_1340 {

    public static int monthNameToNumber(String monthName) {
        if (monthName == null) {
            throw new IllegalArgumentException("오류");
        }

        String trimmed = monthName.trim();

        Month monthEnum = Month.valueOf(trimmed.toUpperCase());

        return monthEnum.getValue();
    }

    public static void main(String[] args) {
        // 입력
        Scanner input = new Scanner(System.in);

        String line = input.nextLine();

        String[] date = line.split("[ ,:]+");

        int month = monthNameToNumber(date[0]);
        int day = Integer.parseInt(date[1]);
        int year = Integer.parseInt(date[2]);
        int hour = Integer.parseInt(date[3]);
        int minute = Integer.parseInt(date[4]);

        // 1. 윤년 판단
        boolean isLeap = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));

        // 2. 각 달의 일수 배열 (윤년이면 2월은 29일)
        int[] monthDays = {0, 31, (isLeap ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        // 3. 1년 중 지금까지 지난 minutes 계산
        int minutesPassed = 0;
        // 3-1. 지난 이전 months 전부
        for (int m = 1; m < month; m++) {
            minutesPassed += monthDays[m] * 24 * 60;
        }
        // 3-2. 이번 달 중 지난 days
        minutesPassed += (day - 1) * 24 * 60;
        // 3-3. 오늘 중 지난 hours & minutes
        minutesPassed += hour * 60;
        minutesPassed += minute;

        // 4. 1년 전체 minutes 계산
        int totalYearMinutes = (isLeap ? 366 : 365) * 24 * 60;

        // 5. 퍼센트 계산
        double timeBar = (double) minutesPassed / totalYearMinutes * 100.0;

        // 출력
        System.out.println(timeBar);
    }
}
