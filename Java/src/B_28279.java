import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class B_28279 {

    static class IntDeque {
        private final int[] a;
        private final int cap;
        private int head = 0;
        private int tail = 0;
        private int size = 0;

        IntDeque(int capacity) {
            this.cap = capacity;
            this.a = new int[capacity];
        }

        boolean isEmpty() {
            return size == 0;
        }

        int size() {
            return size;
        }

        void addFirst(int x) {
            head--;
            if (head < 0) {
                head = cap - 1;
            }
            a[head] = x;
            size++;
        }

        void addLast(int x) {
            a[tail] = x;
            tail++;
            if (tail == cap) {
                tail = 0;
            }
            size++;
        }

        int pollFirst() {
            if (size == 0) {
                return -1;
            }

            int v = a[head];
            head++;

            if (head == cap) {
                head = 0;
            }

            size--;
            return v;
        }

        int pollLast() {
            if (size == 0) {
                return -1;
            }

            tail--;

            if (tail < 0) {
                tail = cap - 1;
            }

            int v = a[tail];
            size--;
            return v;
        }

        int peekFirst() {
            if (size == 0) {
                return -1;
            }

            return a[head];
        }

        int peekLast() {
            if (size == 0) {
                return -1;
            }

            int idx = tail - 1;
            if (idx < 0) {
                idx = cap - 1;
            }

            return a[idx];
        }


    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        IntDeque dq = new IntDeque(n + 5);
        StringBuilder out = new StringBuilder();

        for (int i = 0; i < n; i++) {
            String s = br.readLine();
            char c = s.charAt(0);

            if (c == '1') {
                int x = Integer.parseInt(s.substring(2));
                dq.addFirst(x);
            } else if (c == '2') {
                int x = Integer.parseInt(s.substring(2));
                dq.addLast(x);
            } else if (c == '3') {
                out.append(dq.pollFirst()).append('\n');
            } else if (c == '4') {
                out.append(dq.pollLast()).append('\n');
            } else if (c == '5') {
                out.append(dq.size()).append('\n');
            } else if (c == '6') {
                out.append(dq.isEmpty() ? 1 : 0).append('\n');
            } else if (c == '7') {
                out.append(dq.peekFirst()).append('\n');
            } else if (c == '8') {
                out.append(dq.peekLast()).append('\n');
            }
        }

        System.out.println(out);
    }
}
