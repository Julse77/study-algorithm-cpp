//
//  level_04.cpp
//  study-algorithms-cpp
//
//  Created by 민지수 on 12/15/23.
//

#include "level_04.hpp"
#include <iostream>


void boj_10807()
{
    // 백준 10807번 - 개수 세기
    int N, V;
    std::cin >> N;
    
    int Nums[N];
    
    for (int i = 0; i < N; i++)
    {
        std::cin >> Nums[i];
    }
    
    std::cin >> V;
    
    int count = 0;
    
    for (int i = 0; i < N; i++)
    {
        if (Nums[i] == V)
        {
            count++;
        }
    }
    
    std::cout << count << std::endl;
}

void boj_10871()
{
    // 백준 10871번 - X보다 작은 수
    int N, X;
    std::cin >> N >> X;
    
    int array[N];
    std::string result = "";
    
    for (int i = 0; i < N; i++)
    {
        std::cin >> array[i];
        
        if (array[i] < X)
        {
            result = result + std::to_string(array[i]) + " ";
        }
    }
    
    std::cout << result << std::endl;
}

void boj_10818()
{
    // 백준 10818번 - 최소, 최대
    int N, max = 0, min = 0;
    std::cin >> N;
    
    int array[N];
    for (int i = 0; i < N; i++)
    {
        std::cin >> array[i];
        
        if (i == 0)
        {
            max = min = array[i];
        }
        else
        {
            if (array[i] > max)
            {
                max = array[i];
            }
            if (array[i] < min)
            {
                min = array[i];
            }
        }
        
    }
    
    std::cout << min << " " << max << std::endl;
}

void boj_2562()
{
    // 백준 2562번 - 최댓값
    int max = 0, count = 0;
    int array[9];
        
    for (int i = 0; i < 9; i++)
    {
        std::cin >> array[i];
        
        if (max < array[i])
        {
            max = array[i];
            count = i + 1;
        }
    }
    
    std::cout << max << std::endl;
    std::cout << count << std::endl;
}

void boj_10810()
{
    // 백준 10810번 - 공 넣기
    int N, M;
    std::cin >> N >> M;
    
    int i, j, k;
    int array[N];
    
    for (int x = 0; x < N; x++)
    {
        array[x] = 0;
    }
        
    for (int x = 0; x < M; x++)
    {
        std::cin >> i >> j >> k;
        
        for (int y = i-1; y < j; y++)
        {
            array[y] = k;
        }
    }
    
    for (int x = 0; x < N; x++)
    {
        std::cout << array[x] << " ";
    }
    
    std::cout << std::endl;
}

void boj_10813()
{
    // 백준 10813번 - 공 바꾸기
    int N, M;
    std::cin >> N >> M;
    
    int i, j;
    int array[N];
    
    for (int x = 0; x < N; x++)
    {
        array[x] = x + 1;
    }
    
    for (int x = 0; x < M; x++)
    {
        std::cin >> i >> j;
        
        int a, b;
        a = array[i-1];
        b = array[j-1];
        
        array[i-1] = b;
        array[j-1] = a;
    }
    
    for (int x = 0; x < N; x++)
    {
        std::cout << array[x] << " ";
    }
    
    std::cout << std::endl;
}

void boj_5597()
{
    // 백준 5597번 - 과제 안 내신분..?
    int student[30];
    
    for (int i = 0; i < 30; i++)
    {
        student[i] = i+1;
    }
    
    for (int i = 0; i < 28; i++)
    {
        int input;
        std::cin >> input;
        
        for (int j = 0; j < 30; j++)
        {
            if (student[j] == input)
            {
                student[j] = 0;
            }
        }
    }
    
    for (int i = 0; i < 30; i++)
    {
        if (student[i] != 0)
        {
            std::cout << student[i] << std::endl;
        }
    }
}

void boj_3052()
{
    // 백준 3052번 - 나머지
    int array[42] = {};
    
    for (int i = 0; i < 10; i++)
    {
        int input;
        std::cin >> input;
        
        array[input % 42]++;
    }
    
    int result = 0;
    
    for (int i = 0; i < 42; i++)
    {
        if(array[i] != 0)
        {
            result++;
        }
    }
        
    std::cout << result << std::endl;
}

void boj_10811()
{
    // 백준 10811번 - 바구니 뒤집기
    int N, M;
    std::cin >> N >> M;
    
    int array[N], tempArray[N];
    int i, j;
    
    for (int x = 0; x < N; x++)
    {
        array[x] = x + 1;
    }
        
    for (int x = 0; x < M; x++)
    {
        std::cin >> i >> j;
                        
        int tempJ = j-1;
        
        for (int y = 0; y < N; y++)
        {
            tempArray[y] = array[y];
        }
        
        for (int y = i-1; y < j; y++)
        {
            array[y] = tempArray[tempJ];
            tempJ--;
        }
    }
    
    for (int x = 0; x < N; x++)
    {
        std::cout << array[x] << " ";
    }
    
    std::cout << std::endl;
}

void boj_1546()
{
    // 백준 1546번 - 평균
    int N, M = 0;
    std::cin >> N;
    
    int grade[N];
    int allGrade = 0;
    
    for (int i = 0; i < N; i++)
    {
        std::cin >> grade[i];
        
        if (M < grade[i])
        {
            M = grade[i];
        }
        
        allGrade += grade[i];
    }
    
    float result = (((float)allGrade / (float)M) * 100) / N;
    std::cout << result << std::endl;
}
