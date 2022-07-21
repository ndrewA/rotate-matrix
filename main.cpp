
#include <iostream>
#include <vector>

void printMatrix(const std::vector<std::vector<int>>& matrix)
{
    for(const auto& i : matrix) {
        for(const auto& j : i)
            std::cout << j << ' ';
        std::cout << '\n';
    }
    std::cout << "--------------------------------\n";
}

void rotateMatrix(std::vector<std::vector<int> > &A) 
{
    size_t n = A.size();
    for(size_t i = 0; i < n/2; i++) {
        for(size_t j = i; j < n-i-1; j++) {
            std::swap(A[i][j], A[j][n-i-1]);
            std::swap(A[n-j-1][i], A[i][j]);
            std::swap(A[n-j-1][i], A[n-i-1][n-j-1]);
        }
    }
}
int main()
{
    std::vector<std::vector<int>> matrix {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {15, 16, 17, 18, 19, 20},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30},
        {31, 32, 33, 34, 35, 36}
    };
    rotateMatrix(matrix);

    printMatrix(matrix);
    return 0;
}
