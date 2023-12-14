//
//  level_02.cpp
//  study-algorithms-cpp
//
//  Created by 민지수 on 12/14/23.
//

#include <iostream>
#include "level_02.hpp"

void boj_1330()
{
    // 백준 1330번 - 두 수 비교하기
    int A, B;
    std::cin >> A >> B;
    
    if (A > B)
    {
        std::cout << ">" << std::endl;
    }
    else if (A < B)
    {
        std::cout << "<" << std::endl;
    }
    else if (A == B)
    {
        std::cout << "==" << std::endl;
    }    
}

void boj_9498()
{
    // 백준 9498번 - 시험 성적
    int score;
    std::cin >> score;
    
    if (90 <= score && score <= 100)
    {
        std::cout << 'A' << std::endl;
    }
    else if (80 <= score && score <= 89)
    {
        std::cout << 'B' << std::endl;
    }
    else if (70 <= score && score <= 79)
    {
        std::cout << 'C' << std::endl;
    }
    else if (60 <= score && score <= 69)
    {
        std::cout << 'D' << std::endl;
    }
    else
    {
        std::cout << 'F' << std::endl;
    }
}

void boj_2753()
{
    // 백준 2753번 - 윤년
    int year;
    std::cin >> year;
    
    if ((year % 4 == 0) && ((year % 100 != 0) || (year % 400 == 0)))
    {
        std::cout << 1 << std::endl;
    }
    else
    {
        std::cout << 0 << std::endl;
    }
}

void boj_14681()
{
    // 백준 14681번 - 사분면 고르기
    int x, y;
    std::cin >> x;
    std::cin >> y;
    
    if ((x > 0) && (y > 0))
    {
        std::cout << 1 << std::endl;
    }
    else if ((x < 0) && (y > 0))
    {
        std::cout << 2 << std::endl;
    }
    else if ((x < 0) && (y < 0))
    {
        std::cout << 3 << std::endl;
    }
    else if ((x > 0) && (y < 0))
    {
        std::cout << 4 << std::endl;
    }
}

void boj_2884()
{
    // 백준 2884번 - 알람 시계
    int H, M;
    std::cin >> H >> M;
    
    if(M < 45)
    {
        if (H == 0)
        {
            H = 23;
            M += 15;
        }
        else
        {
            H--;
            M += 15;
        }
    }
    else
    {
        M -= 45;
    }
    
    std::cout << H << " " << M << std::endl;
}

void boj_2525()
{
    // 백준 2525번 - 오븐 시계
    int A, B, C;
    std::cin >> A >> B;
    std::cin >> C;
    
    int addA, addB;
    addA = C / 60;
    addB = C % 60;
    
    A += addA;
    B += addB;
    
    if (B > 59)
    {
        B -= 60;
        A++;
    }
    if (A > 23)
    {
        A -= 24;
    }
    
    std::cout << A << " " << B << std::endl;
}

void boj_2480()
{
    // 백준 2480번 - 주사위 세개
    int a, b, c, result = 0;
    std::cin >> a >> b >> c;
    
    if ((a != b) && (a != c) && (b != c))
    {
        if ((a > b) && (a > c))
        {
            result = a * 100;
        }
        else if ((a > b) && (a < c))
        {
            result = c * 100;
        }
        else if ((b > a) && (b > c))
        {
            result = b * 100;
        }
        else if ((b > a) && (b < c))
        {
            result = c * 100;
        }
        else
        {
            result = c * 100;
        }
    }
    else if (a == b)
    {
        if (a == c)
        {
            result = 10000 + (a * 1000);
        }
        else
        {
            result = 1000 + (a * 100);
        }
    }
    else if ((a == c) && (a != b))
    {
        result = 1000 + (a * 100);
    }
    else if ((b == c) && (b != a))
    {
        result = 1000 + (b * 100);
    }
    
    std::cout << result << std::endl;
}
