#include <stdio.h>
#include <locale.h>

int main() {
    // 设置本地化
    setlocale(LC_ALL, "");
    
    int num1, num2;
    
    // 提示用户输入第一个数
    printf("请输入第一个数: ");
    scanf("%d", &num1);
    
    // 提示用户输入第二个数
    printf("请输入第二个数: ");
    scanf("%d", &num2);
    
    // 计算两数之和
    int sum = num1 + num2;
    
    // 输出结果
    printf("%d + %d = %d\n", num1, num2, sum);
    
    return 0;
} 
