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
