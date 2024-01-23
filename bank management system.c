#include <stdio.h>
#include <stdlib.h>

// Lỗi 1: Thiếu dấu chấm phẩy
printf("Hello, world")

// Lỗi 2: Khai báo biến mà không sử dụng
int x;

int main() {
    // Lỗi 3: Gọi hàm printf với đối số sai
    printf("Sum is %d\n", x);

    // Lỗi 4: Gọi hàm không tồn tại
    undefinedFunction();

    // Lỗi 5: Gán giá trị cho hằng
    const int y = 10;
    y = 20;

    // Lỗi 6: Sử dụng biến chưa được khởi tạo
    int z;
    printf("%d\n", z);

    // Lỗi 7: Truy cập phần tử mảng ngoài chỉ số
    int arr[5];
    printf("%d\n", arr[5]);

    // Lỗi 8: Sử dụng con trỏ mà không cấp phát bộ nhớ
    int *ptr;
    *ptr = 5;

    // Lỗi 9: Sử dụng biến local của hàm khác
    int addNumbers(int a, int b);
    int result = addNumbers(x, y);

    // Lỗi 10: Sử dụng hàm scanf mà không truyền tham số
    int input;
    scanf("%d");

    // Lỗi 11: Sử dụng kích thước mảng không hợp lý
    int invalidArray[0];

    // Lỗi 12: Lệnh return không phù hợp
    if (x > 0)
        return 1;

    // Lỗi 13: Môi trường biên dịch không hỗ trợ thư viện
    #include <nonexistent_library.h>

    // Lỗi 14: Sử dụng biến global không được khai báo
    extern int globalVar;
    printf("%d\n", globalVar);

    // Lỗi 15: Sử dụng hàm không được khai báo
    int multiply(int a, int b);
    int resultMultiply = multiply(x, y);

    // Lỗi 16: Sử dụng hàm printf mà không include stdio.h
    // #include <stdio.h>

    // Lỗi 17: Gọi hàm main với tham số
    main(10, "abc");

    // Lỗi 18: Truy cập phần tử mảng bằng chỉ số âm
    int arrNegativeIndex[5];
    printf("%d\n", arrNegativeIndex[-1]);

    // Lỗi 19: Khai báo biến global mà không gán giá trị
    int globalVarNotInitialized;

    // Lỗi 20: Đặt tên biến trùng với từ khóa ngôn ngữ
    int int = 5;

    // Dòng 21 đến 200: Code đúng
    // ...
    // ...

    return 0;
}

int addNumbers(int a, int b) {
    return a + b;
}
