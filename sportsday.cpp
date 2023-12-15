#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int ax, ay, bx, by, cx, cy;
    cin >> ax >> ay >> bx >> by >> cx >> cy;

    int r = static_cast<int>(ceil(sqrt(pow(bx - ax, 2) + pow(by - ay, 2))));
    int a_area = static_cast<int>(ceil(M_PI * pow(r, 2)));
    int f_area = static_cast<int>(ceil(M_PI * pow(cx - ax, 2 + pow(cy - ay, 2))));

    if (f_area < a_area) {
        int r_area = a_area - f_area;
        int amt_rec = r_area * 20;
        cout << "Krishna " << amt_rec;
    } else if (f_area > a_area) {
        int n_square = static_cast<int>(ceil(sqrt(a_area)));
        int e_area = f_area - a_area;

        if (n_square * n_square > a_area) {
            int r_area = n_square * n_square - a_area;
            int amt_rec = r_area * 20;
            cout << "Krishna " << amt_rec;
        } else {
            int r_area = a_area - n_square * n_square;
            int amt_rec = r_area * 20;
            cout << "Shiva " << amt_rec;
        }
    } else {
        cout << "-1";
    }

    return 0;
}