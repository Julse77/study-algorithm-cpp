//
//  level_05.cpp
//  study-algorithms-cpp
//
//  Created by 민지수 on 12/19/23.
//

#include "level_05.hpp"
#include <iostream>
#include <sstream>
#include <string>

void boj_27866()
{
    // 백준 27866번 - 문자와 문자열
    std::string S;
    int i;
    
    std::cin >> S;
    std::cin >> i;
    
    char result = S[i-1];
    
    std::cout << result << std::endl;
}

void boj_2743()
{
    // 백준 2743번 - 단어 길이 재기
    std::string input;
    std::cin >> input;
        
    std::cout << input.length() << std::endl;
}

void boj_9086()
{
    // 백준 9086번 - 문자열
    int T;
    std::string input;
    
    std::cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        std::cin >> input;
        std::cout << input[0] << input[(input.length())-1] << std::endl;
    }
}

void boj_11654()
{
    // 백준 11654번 - 아스키 코드
    char input;
    std::cin >> input;
    
    int result = static_cast<int>(input);
    
    std::cout << result << std::endl;
}

void boj_11720()
{
    // 백준 11720번 - 숫자의 합
    int N, result = 0;
    std::string input;
    
    std::cin >> N;
    std::cin >> input;
    
    for (int i = 0; i < N; i++)
    {
        int transNum = (int)input[i] - 48;
        result += transNum;
    }
    
    std::cout << result << std::endl;
}

void boj_10809()
{
    // 백준 10809번 - 알파벳 찾기
    std::string S;
    std::cin >> S;
    
    int sequence = 0, count = 0;
    int alphabet[26] = {};
    
    for (int i = 0; i < 26; i++)
    {
        alphabet[i] = -1;
    }
        
    for (int i = 0; i < S.length(); i++)
    {
        // 아스키 97 ~ 122
        for (int j = 97; j <= 122; j++)
        {
            if (S[i] == (char)j)
            {
                if(alphabet[count] != -1)
                {
                    sequence++;
                    count = 0;
                    continue;
                }
                alphabet[count] = sequence;
                count = 0;
                sequence++;
                continue;
            }
            else
            {
                count++;
            }
            
            if (j == 122)
            {
                count = 0;
            }
        }
    }
    
    for (int result : alphabet)
    {
        std::cout << result << " ";
    }
    
    std::cout << std::endl;
}

void boj_2675()
{
    // 백준 2675 - 문자열 반복
    int T, R;
    std::string S;
    
    std::cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        std::cin >> R >> S;
        
        for (int j = 0; j < S.length(); j++)
        {
            for (int k = 0; k < R; k++)
            {
                std::cout << S[j];
            }
        }
        
        std::cout << std::endl;
    }
}

void boj_1152()
{
    // 백준 1152번 - 단어의 개수
    std::string input;
    std::getline(std::cin, input);
    
    std::stringstream ssInput(input);
    std::string word;
    
    int result = 0;
    
    while (ssInput >> word)
    {
        result++;
    }
    
    std::cout << result << std::endl;
}

void boj_2908()
{
    // 백준 2908번 - 상수
    std::string result, A, B, transA, transB;
    std::cin >> A >> B;
        
    for (int i = 2; i >= 0; i--)
    {
        transA += A[i];
        transB += B[i];
    }
    
    if (std::stoi(transA) > std::stoi(transB))
    {
        result = transA;
    }
    else
    {
        result = transB;
    }
    
    std::cout << result << std::endl;
}

void boj_5622()
{
    // 백준 2622번 - 다이얼
    std::string input;
    std::cin >> input;
    
    int result = 0;
    
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == 'A' || input[i] == 'B' || input[i] == 'C')
        {
            result += 3;
            continue;
        }
        else if (input[i] == 'D' || input[i] == 'E' || input[i] == 'F')
        {
            result += 4;
            continue;
        }
        else if (input[i] == 'G' || input[i] == 'H' || input[i] == 'I')
        {
            result += 5;
            continue;
        }
        else if (input[i] == 'J' || input[i] == 'K' || input[i] == 'L')
        {
            result += 6;
            continue;
        }
        else if (input[i] == 'M' || input[i] == 'N' || input[i] == 'O')
        {
            result += 7;
            continue;
        }
        else if (input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S')
        {
            result += 8;
            continue;
        }
        else if (input[i] == 'T' || input[i] == 'U' || input[i] == 'V')
        {
            result += 9;
            continue;
        }
        else if (input[i] == 'W' || input[i] == 'X' || input[i] == 'Y' || input[i] == 'Z')
        {
            result += 10;
            continue;
        }
    }
    
    std::cout << result <<std::endl;
}

void boj_11718()
{
    // 백준 11718번 - 그대로 출력하기
    std::string input;
    
    for (;;)
    {
        std::getline(std::cin, input);
        
        if (input == "")
        {
            break;
        }
        
        std::cout << input << std::endl;
    }
}
