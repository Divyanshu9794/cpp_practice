#include <iostream>
#include <vector>
#include <algorithm>

void perform_operations(std::vector<int>& A, int B) {
    int suffix_start = A.size() - B + 1;
    std::vector<int> suffix_to_sort(A.begin() + suffix_start - 1, A.end());
    std::sort(suffix_to_sort.begin(), suffix_to_sort.end());
    std::copy(suffix_to_sort.begin(), suffix_to_sort.end(), A.begin() + suffix_start - 1);
}

void solve_test_case() {
    int N, M;
    std::cin >> N >> M;
    std::vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i];
    }
    std::vector<int> B(M);
    for (int i = 0; i < M; ++i) {
        std::cin >> B[i];
    }
    for (int i = 0; i < M; ++i) {
        perform_operations(A, B[i]);
    }
    for (int i = 0; i < N; ++i) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    
    int T;
    std::cin >> T;

   
    for (int i = 0; i < T; ++i) {
        solve_test_case();
    }

    return 0;
}
