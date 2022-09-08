// bingung :(

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x, y;
    // ironman position
    cin >> x >> y;
    int N; // jumlah ultron
    cin >> N;
    int ultron[N][2];
    for (int i = 0; i < N; i++) {
        cin >> ultron[i][0] >> ultron[i][1];
    } // ultron position

    int K; // jumlah bangunan
    cin >> K;

    int building[K][4];

    for (int i = 0; i < K; i++) {
        cin >> building[i][0] >> building[i][1] >> building[i][2] >> building[i][3];
    } // bangunan position

    /**
     * @brief @brief mencari laser ironman yang dapat menyerang ultron tanpa mengenai bangunan
     * @param xy posisi ironman
     * @brief m = (y2 - y1) / (x2 - x1)
     * @brief y = mx + c
     * @brief c = y - (m * x)
     */

    int count = 0;

    for (int i = 0; i < N; i++) {
        bool is_lasered = true;

        int m = (ultron[i][1] - y) / (ultron[i][0] - x);

        int c = y - (m * x);
        for (int j = 0; j < K; j++) {
            int x1 = building[j][0];
            int y1 = building[j][1];
            int x2 = building[j][2];
            int y2 = building[j][3];

            int m1 = (y2 - y1) / (x2 - x1);
            int c1 = y1 - (m1 * x1);

            if (m == m1) {
                continue;
            }
        }
        if (is_lasered) {
            count++;
        }
    cout << count << endl;
    }

}