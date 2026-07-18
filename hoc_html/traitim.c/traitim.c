#include <stdio.h>
#include <math.h>

int main() {
    float x, y;
    
    // Vòng lặp y quét từ trên xuống dưới
    for (y = 1.5f; y > -1.5f; y -= 0.1f) {
        // Vòng lặp x quét từ trái sang phải
        for (x = -1.5f; x < 1.5f; x += 0.05f) {
            
            // Công thức tính hình trái tim
            float a = x * x + y * y - 1;
            
            // Nếu toạ độ (x, y) thỏa mãn phương trình, in ra dấu *
            if ((a * a * a - x * x * y * y * y) <= 0.0f) {
                printf("*");
            } else {
                printf(" "); // Nếu không thì in khoảng trắng
            }
        }
        printf("\n"); // Xuống dòng khi hết một hàng
    }
    
    return 0;
}