#include <stdio.h>
#include <time.h>

// �ݺ� �Լ��� ���丮�� ���
long factorial_iter(int n) {
    long result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

// ��� �Լ��� ���丮�� ���
long factorial_rec(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial_rec(n - 1);
    }
}

long testTime(void) {
    return 0;
}
int main(int argc, char* argv[]) {
    int n = 20;

    int sum = 0;
    clock_t start, end;

    start = clock();
    long result_iter = factorial_iter(n);
    long result_rec = factorial_rec(n);
    end = clock();

    printf("�ݺ� �Լ� ���: %e\n", result_iter);
    printf("�ɸ� �ð� : %f\n", (float)(end - start) / CLOCKS_PER_SEC);
    printf("��� �Լ� ���: %e\n", result_rec);
    printf("�ɸ� �ð� : %f\n", (float)(end - start) / CLOCKS_PER_SEC);

    return 0;
}