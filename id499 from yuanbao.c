#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    
    for (int test_case = 0; test_case < t; test_case++) {
        int n1, n2, n3;
        int a[10], b[10], c[10];
        
        // 读取第一个数组
        scanf("%d", &n1);
        for (int i = 0; i < n1; i++) {
            scanf("%d", &a[i]);
        }
        
        // 读取第二个数组
        scanf("%d", &n2);
        for (int i = 0; i < n2; i++) {
            scanf("%d", &b[i]);
        }
        
        // 读取第三个数组
        scanf("%d", &n3);
        for (int i = 0; i < n3; i++) {
            scanf("%d", &c[i]);
        }
        
        // 对三个数组进行排序（冒泡排序，无指针）
        for (int i = 0; i < n1 - 1; i++) {
            for (int j = 0; j < n1 - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        
        for (int i = 0; i < n2 - 1; i++) {
            for (int j = 0; j < n2 - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }
        
        for (int i = 0; i < n3 - 1; i++) {
            for (int j = 0; j < n3 - i - 1; j++) {
                if (c[j] > c[j + 1]) {
                    int temp = c[j];
                    c[j] = c[j + 1];
                    c[j + 1] = temp;
                }
            }
        }
        
        int common[10]; // 存储共同元素
        int count = 0;   // 共同元素计数器
        int i = 0, j = 0, k = 0; // 三个数组的下标（非指针）
        
        // 三下标法查找共同元素（类似三指针法，但不用指针）
        while (i < n1 && j < n2 && k < n3) {
            if (a[i] == b[j] && b[j] == c[k]) {
                // 找到共同元素，且避免重复添加
                if (count == 0 || a[i] != common[count - 1]) {
                    common[count] = a[i];
                    count++;
                }
                i++;
                j++;
                k++;
            } else {
                // 将最小的元素对应的下标向前移动
                int min_val = a[i];
                if (b[j] < min_val) min_val = b[j];
                if (c[k] < min_val) min_val = c[k];
                
                if (a[i] == min_val) i++;
                if (b[j] == min_val) j++;
                if (c[k] == min_val) k++;
            }
        }
        
        // 输出结果
        printf("%d:", count);
        for (int idx = 0; idx < count; idx++) {
            printf("%d", common[idx]);
            if(idx!=count-1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}