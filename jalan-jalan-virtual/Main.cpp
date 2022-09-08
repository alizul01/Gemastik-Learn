// Solusinya belum efektif, tapi udah work sesuai yang diharapkan

#include <iostream>
using namespace std;

int main() {
    int N; // test case

    cin >> N;

    int *M = new int[N]; // array of N elements

    for (int i = 0; i < N; i++) {
        cin >> M[i];
    }

    /**
     * @brief 1 step east, 2 step north, 3 steps west, 4 steps south, 5 steps east and so on
     * output x, y each test
     * 1) x++
     * 2) y++
     * 3) y++
     * 4) x--
     * 5) x--
     * 6) x--
     * 7) y--
     * 8) y--
     * 9) y--
     * 10) y--
     * 11) x++
     * 12) x++
     * 13) x++
     * 14) x++
     * 15) back to 1)
     */

    for (int i = 0; i < N; i++) {
        int x = 0;
        int y = 0;
        int step = 1;
        int count = 0;
        while (count < M[i]) {
            if (step == 1) {
                x++;
            } else if (step == 2) {
                y++;
            } else if (step == 3) {
                y++;
            } else if (step == 4) {
                x--;
            } else if (step == 5) {
                x--;
            } else if (step == 6) {
                x--;
            } else if (step == 7) {
                y--;
            } else if (step == 8) {
                y--;
            } else if (step == 9) {
                y--;
            } else if (step == 10) {
                y--;
            } else if (step == 11) {
                x++;
            } else if (step == 12) {
                x++;
            } else if (step == 13) {
                x++;
            } else if (step == 14) {
                x++;
            } else if (step == 15) {
                step = 1;
            }
            step++;
            count++;
        }
        cout << x << " " << y << endl;
    }
    

    

}