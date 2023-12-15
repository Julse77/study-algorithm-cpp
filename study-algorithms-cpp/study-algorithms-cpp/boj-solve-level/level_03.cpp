//
//  level_03.cpp
//  study-algorithms-cpp
//
//  Created by 민지수 on 12/14/23.
//

#include <iostream>
#include "level_03.hpp"

void boj_2739()
{
    // 백준 2739번 - 구구단
    int N;
    std::cin >> N;
    
    for (int i = 1 ; i < 10; i++)
    {
        std::cout << N << " * " << i << " = " << N * i << std::endl;
    }
}

void boj_10950()
{
    // 백준 10950번 - A+B-3
    int T;
    std::cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << a + b << std::endl;
    }
}

void boj_8393()
{
    // 백준 8393번 - 합
    int n, result = 0;
    std::cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        result += i;
    }
    
    std::cout << result << std::endl;
}

void boj_25304()
{
    // 백준 25304번 - 영수증
    int X, N, a, b;
    std::cin >> X;
    std::cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        std::cin >> a >> b;
        int minusAlpha = a * b;
        X -= minusAlpha;
    }
    
    if (X == 0)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
}

void boj_25314()
{
    // 백준 25314번 - 코딩은 체육과목 입니다
    int N;
    std::cin >> N;
    std::string result, addString;
    
    if (N / 4 == 1)
    {
        result = "long int";
    }
    else if (N / 4 > 1)
    {
        result = "int";
        
        for (int i = 0; i < (N / 4); i++)
        {
            addString += "long ";
        }
        
        result = addString + result;
    }
    
    std::cout << result << std::endl;
}

void boj_15552()
{
    // 백준 15552번 - 빠른 A+B
    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);
    
    int T, A, B;
    std::cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        std::cin >> A >> B;
        std::cout << A + B << '\n';
    }
}

void boj_11021()
{
    // 백준 11021번 - A+B - 7
    int T, A, B;
    std::cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        std::cin >> A >> B;
        std::cout << "Case #" << i+1 << ": " << A+B << std::endl;
    }
}

void boj_11022()
{
    // 백준 11022번 - A+B - 8
    int T, A, B;
    std::cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        std::cin >> A >> B;
        std::cout << "Case #" << i+1 << ": " << A << " + " << B << " = " << A+B << std::endl;
    }
}

void boj_2438()
{
    // 백준 2438번 - 별 찍기 - 1
    int N;
    std::cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << '*';
        }
        
        std::cout << std::endl;
    }
}

void boj_2439()
{
    // 백준 2439번 - 별 찍기 - 2
    int N;
    std::cin >> N;
    
    for (int i = 1; i <= N; i++)
    {
        for (int j = N; j > i; j--)
        {
            std::cout << ' ';
        }
        
        for (int j = 1; j <= i; j++)
        {
            std::cout << '*';
        }
        
        std::cout << std::endl;
    }
}

void boj_10952()
{
    // 백준 10952번 - A+B - 5
    int A, B;
    
    for (;;)
    {
        std::cin >> A >> B;
        
        if (A == 0 && B == 0)
        {
            break;
        }
        
        std::cout << A+B << std::endl;
    }
}

void boj_10951()
{
    // 백준 10951번 - A+B - 4
    int A, B;
    
    for (;;)
    {
        std::cin >> A >> B;
        if (std::cin.eof() == true)
        {
            break;
        }
        
        std::cout << A+B << std::endl;
    }
}
