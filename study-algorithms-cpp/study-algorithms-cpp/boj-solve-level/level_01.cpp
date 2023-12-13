//
//  level_01.cpp
//  study-algorithms-cpp
//
//  Created by 민지수 on 12/11/23.
//

#include "level_01.hpp"
#include <iostream>


void boj_2557()
{
    std::cout << "Hello World!" << std::endl;
}

void boj_1000()
{
    int A, B;
    
    std::cin >> A >> B;
    std::cout << A + B << std::endl;
}

void boj_1001()
{
    int A, B;

    std::cin >> A >> B;
    std::cout << A - B << std::endl;
}

void boj_10998()
{
    int A, B;

    std::cin >> A >> B;
    std::cout << A * B << std::endl;
}

void boj_1008()
{
    double A, B;

    std::cin >> A >> B;
    
    std::cout.precision(12);         // 실수 전체 자리수 중 12자리까지 표현
    std::cout << std::fixed;              // 소수점 아래 고정
    std::cout << A / B << std::endl;
}

void boj_10869()
{
    int A, B;
    std::cin >> A >> B;
    
    std::cout << A + B << std::endl;
    std::cout << A - B << std::endl;
    std::cout << A * B << std::endl;
    std::cout << A / B << std::endl;
    std::cout << A % B << std::endl;
}
            
void boj_10926()
{
    std::string input;
    std::cin >> input;
    
    input = input += "??!";
    std::cout << input << std::endl;
}

void boj_18108()
{
    int before_year, changed_year;
    std::cin >> before_year;
    
    changed_year = before_year - 543;
    std::cout << changed_year << std::endl;
}

void boj_10430()
{
    int A, B, C;
    std::cin >> A >> B >> C;
    
    // 첫째 줄에 (A+B)%C, 둘째 줄에 ((A%C) + (B%C))%C, 셋째 줄에 (A×B)%C, 넷째 줄에 ((A%C) × (B%C))%C를 출력한다.
    std::cout << (A + B) % C << std::endl;
    std::cout << ((A % C) + (B % C)) % C << std::endl;
    std::cout << (A * B) % C << std::endl;
    std::cout << ((A % C) * (B % C)) % C << std::endl;
}

void boj_2588()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;
    
    std::cout << a * ((b % 100) % 10) << std::endl;
    std::cout << a * ((b % 100) / 10) << std::endl;
    std::cout << a * (b / 100) << std::endl;
    std::cout << a * b << std::endl;
}

void boj_11382()
{
    long long A, B, C;
    std::cin >> A >> B >> C;
    
    std::cout << A + B + C << std::endl;
}

void boj_10171()
{
    std::cout << "\\    /\\" << std::endl;
    std::cout << " )  ( ')" << std::endl;
    std::cout << "(  /  )" << std::endl;
    std::cout << " \\(__)|" << std::endl;
}

void boj_10172()
{
    std::cout << "|\\_/|" << std::endl;
    std::cout << "|q p|   /}" << std::endl;
    std::cout << "( 0 )\"\"\"\\" << std::endl;
    std::cout << "|\"^\"`    |" << std::endl;
    std::cout << "||_/=\\\\__|" << std::endl;
}
