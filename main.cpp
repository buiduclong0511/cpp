#include <iostream>

using namespace std;

int reverseNumber(int n) {
    int result = 0;

    while(n > 0) {
        // Lấy ra chữ số cuối cùng bằng cách chia dư cho 10
        int y = n % 10;
        
        // sau khi có chữ số cuối cùng thì nhân kết quả hiện tại với 10 
        // sau đó cộng thêm chữ số cuối cùng vào hàng đơn vị
        result = result * 10 + y;

        // chia n cho 10 để xoá bớt 1 hàng chữ số đi
        n /= 10;

        // Cứ thế lặp lại cho đến khi n = 0
    }

    return result;
}

int main() {
    cout << reverseNumber(1230) << endl;
    cout << reverseNumber(0) << endl;
    cout << reverseNumber(231) << endl;

    return 0;
}
