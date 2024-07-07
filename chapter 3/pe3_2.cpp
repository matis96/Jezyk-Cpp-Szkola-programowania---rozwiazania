//zad2.cpp
#include <iostream>

int main()
{
    using namespace std;
    const int ft2in = 12;
    const float h_conv = 0.0254;
    const float w_conv = 2.2;
    float ft_in, lb, BMI, height, weight;
    cout<<"Podaj swoj wzrost [ft in] w formacie ft.in ";
    cin>>ft_in;
    cout<<"Podaj swoja wage w funtach ";
    cin>>lb;
    height = ft_in*ft2in*h_conv;
    weight = lb/w_conv;
    BMI = weight/(height*height);
    printf("Twoje BMI wynosi %.2f", BMI);
}
