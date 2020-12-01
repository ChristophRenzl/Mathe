#include <iostream>
#include <array>


float rechnung(int i)
{
    std::array<float, 14> pi = { 0.01,0.02,0.03,0.04,0.05,0.1,0.2,0.2,0.1,0.09,0.08,0.07,0.01,0 };
    float G = 0;
    for (int help = 0; help <= i; help++)
    {
        if (help <= 12)
        {
            G = G + ((i * -3 + help * 7) * pi[help]);
        }
        else
        {
            G = G + ((i * -3 + help * 7) * pi[13]);
        }
    }
    return G;
}


int main()
{
    float gewinn;
    for (int i = 5; i < 100; i = i + 5)
    {
        gewinn = rechnung(i);
        std::cout << "n=" << i << "\t" << "gewinn=" << gewinn << std::endl;
    }
}