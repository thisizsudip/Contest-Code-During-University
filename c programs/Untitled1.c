#include <stdio.h>
#include <math.h>

int main() {
    int T, N;

    // টেস্ট কেসের সংখ্যা ইনপুট নিন
    scanf("%d", &T);

    // প্রতিটি টেস্ট কেসের জন্য গুণনীয়ক বের করুন
    for (int case_num = 1; case_num <= T; case_num++) {
        // প্রতি কেসের জন্য সংখ্যা N ইনপুট নিন
        scanf("%d", &N);

        // গুণনীয়কগুলোর জন্য একটি অ্যারে তৈরি
        int divisors[100000], count = 0;

        // 1 থেকে √N পর্যন্ত চেক করুন
        for (int i = 1; i <= sqrt(N); i++) {
            if (N % i == 0) {
                divisors[count++] = i; // i গুণনীয়ক
                if (i != N / i) {
                    divisors[count++] = N / i; // N / i গুণনীয়ক (যদি i != N / i)
                }
            }
        }

        // গুণনীয়কগুলো ছোট থেকে বড় অর্ডারে সাজাতে হবে
        // সোজা ভাবে সোজা সাজানোর জন্য
        for (int i = 0; i < count - 1; i++) {
            for (int j = i + 1; j < count; j++) {
                if (divisors[i] > divisors[j]) {
                    int temp = divisors[i];
                    divisors[i] = divisors[j];
                    divisors[j] = temp;
                }
            }
        }

        // আউটপুট প্রদর্শন
        printf("Case %d: ", case_num);
        for (int i = 0; i < count; i++) {
            printf("%d", divisors[i]);
            if (i != count - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
