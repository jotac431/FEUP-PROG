#include <iostream>
#include <string>
using namespace std;

void ex1o1()
{
    char c;
    cout << "Enter a character: ";
    cin >> c;
    cout << "ASCII Value of " << c << " is " << int(c);
}

void ex1o2()
{
    int a, b, c, mean, amean, bmean, cmean;
    cout << "Please, input 3 integer numbers: " << endl << "A ? ";
    cin >> a;
    cout << "B ? ";
    cin >> b;
    cout << "C ? ";
    cin >> c;
    mean = (a + b + c) / 3;
    amean = a - mean;
    bmean = b - mean;
    cmean = c - mean;
    cout << "mean = " << mean << endl;
    cout << "A-mean = " << amean << endl;
    cout << "B-mean = " << bmean << endl;
    cout << "C-mean = " << cmean << endl;
}

void ex1o3()
{
    float pi = 3.14;
    float p, r, M;
    cout << "Insert value of p in Kg/m^3 : ";
    cin >> p;
    cout << endl << "Insert value of r in m : ";
    cin >> r;
    M = (4 / 3) * p * pi * r * r * r;
    cout << endl << "M = " << M;
}

void ex1o4() {

    float x, y, a, b, c, d, e, f;
    cout << "a? ";
    cin >> a;
    cout << "b? ";
    cin >> b;
    cout << "c? ";
    cin >> c;
    cout << "d? ";
    cin >> d;
    cout << "e? ";
    cin >> e;
    cout << "f? ";
    cin >> f;

    if ((a * e - b * d) == 0) {
        cout << "Impossible sistem";
        return;
    }
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);
    cout << "x = " << x << endl << "y = " << y;
}

void ex1o5()
{   
    string hour1, min1, sec1, hour2, min2, sec2;
    int h1, m1, s1, h2, m2, s2, D, H, M, S;
    
    cout << "Time1(hours minutes seconds) ? ";
    getline(cin, hour1, ':');
    getline(cin, min1, ':');
    cin >> sec1;

    cout << "Time1(hours minutes seconds) ? ";
    getline(cin, hour2, ':');
    getline(cin, min2, ':');
    cin >> sec2;

    h1 = stoi(hour1);
    m1 = stoi(min1);
    s1 = stoi(sec1);
    h2 = stoi(hour2);
    m2 = stoi(min2);
    s2 = stoi(sec2);

    S = (s1 + s2) % 60;
    M = (m1 + m2 + ((s1+s2) / 60)) % 60;
    H = (h1 + h2 + ((m1 + m2 + ((s1 + s2) / 60)) / 60)) % 24;
    D = (h1 + h2 + ((m1 + m2 + ((s1 + s2) / 60)) / 60)) / 24;
    cout << "Time1 + Time2 = " << D << " days, " << H << " hours, " << M << " minutes and " << S << " seconds.";
}

void ex1o6()
{
    float area, s, a, b, c, d, x1, x2, x3, y1, y2, y3;
    
    cout << "Vertice 1 ?  ";
    cin >> x1 >> y1;
    cout << "Vertice 2 ?  ";
    cin >> x2 >> y2;
    cout << "Vertice 3 ?  ";
    cin >> x3 >> y3;

    a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    s = (a + b + c) / 2;
    area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area = " << area;

}

void ex2o1()
{
    float x, y, a, b, c, d, e, f;
    cout << "a? ";
    cin >> a;
    cout << "b? ";
    cin >> b;
    cout << "c? ";
    cin >> c;
    cout << "d? ";
    cin >> d;
    cout << "e? ";
    cin >> e;
    cout << "f? ";
    cin >> f;

    if ((a * e - b * d) == 0) {
        cout << "Impossible sistem";
        return;
    }
    x = (c * e - b * f) / (a * e - b * d);
    y = (a * f - c * d) / (a * e - b * d);
    cout << "x = " << x << endl << "y = " << y;
}

void ex2o2a()
{
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2 && n1 >= n3)
    {
        cout << "Largest number: " << n1 << endl;
    }

    if (n2 >= n1 && n2 >= n3)
    {
        cout << "Largest number: " << n2 << endl;
    }

    if (n3 >= n1 && n3 >= n2) {
        cout << "Largest number: " << n3 << endl;
    }


    
    
    if (n1 <= n2 && n1 <= n3)
    {
        cout << "Smallest number: " << n1;
    }

    if (n2 <= n1 && n2 <= n3)
    {
        cout << "Smallest number: " << n2;
    }

    if (n3 <= n1 && n3 <= n2) {
        cout << "Smallest number: " << n3;
    }
}

void ex2o2b()
{
    float n1, n2, n3, l, s, m;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2 && n1 >= n3)
    {
        l = n1;
    }

    if (n2 >= n1 && n2 >= n3)
    {
        l = n2;
    }

    if (n3 >= n1 && n3 >= n2) {
        l = n3;
    }




    if (n1 <= n2 && n1 <= n3)
    {
        s = n1;
    }

    if (n2 <= n1 && n2 <= n3)
    {
        s = n2;
    }

    if (n3 <= n1 && n3 <= n2) {
        s = n3;
    }



    if (n1 != l && n1 != s) m = n1;
    if (n2 != l && n2 != s) m = n2;
    if (n3 != l && n3 != s) m = n3;

    cout << l << " > " << m << " > " << s;
}

void ex2o2c()
{
    float n1, n2, n3, l, s, m;
    n1 = 0;
    n2 = 0;
    n3 = 0;
   

    while (n1 <= 0 || n2 <= 0 || n3 <= 0) {
        cout << "Enter three positive numbers: ";
        cin >> n1 >> n2 >> n3;
        if (n1 < 0 || n2 < 0 || n3 < 0) cout << endl << "All numbers must be positive!" << endl;
    }

    if (n1 >= n2 && n1 >= n3)
    {
        l = n1;
    }

    if (n2 >= n1 && n2 >= n3)
    {
        l = n2;
    }

    if (n3 >= n1 && n3 >= n2) {
        l = n3;
    }




    if (n1 <= n2 && n1 <= n3)
    {
        s = n1;
    }

    if (n2 <= n1 && n2 <= n3)
    {
        s = n2;
    }

    if (n3 <= n1 && n3 <= n2) {
        s = n3;
    }



    if (n1 != l && n1 != s) m = n1;
    if (n2 != l && n2 != s) m = n2;
    if (n3 != l && n3 != s) m = n3;

    if (m + s <= l) cout << "Impossible to form a triangle";
    else
        cout << "Can form a triangle";
}

void ex2o3()
{
    float a, b;
    cout << "Insert 2 numbers: ";
    cin >> a >> b;

    if (a + b > INT_MAX) cout << "sum overflow" << endl;
    else if (a + b < INT_MIN) cout << "sum underflow" << endl;
    else
        cout << a + b;
}

void ex2o4()
{
    float w, cost;
    cout << "Insert weight of merchandise in grams: ";
    cin >> w;

    if (w <= 500) cost = 5;
    else if (w >= 501 && w <= 1000) cost = 5 + (1.5 * (w - 500) / 100);
    else if (w > 1000) cost = 12.5 + (5 * (w - 1000) / 250);

    cout << "Cost is " << cost << " euros.";
}

void ex2o5()
{
    float a, b, c, x1, x2;
    string sx1, sx2;
    cout << "Insert 3 numbers: ";
    cin >> a >> b >> c;
    if ((b * b - 4 * a * c) >= 0) {
        x1 = (-b + sqrt(b * b - 4 * a * c)) / 2 * a;
        x2 = (-b - sqrt(b * b - 4 * a * c)) / 2 * a;

        if (x1 = x2) cout << "The equation has 2 equal real roots: x = " << x1;
        else
            cout << "The equation has 2 diferent real roots: x1 = " << x1 << " x2 = " << x2;
    }
    else {
        sx1 = to_string(-b / (2 * a)) + " + " + to_string(sqrt(-(b * b - 4 * a * c) / (2 * a))) + "i";
        sx2 = to_string(-b / (2 * a)) + " - " + to_string(sqrt(-(b * b - 4 * a * c) / (2 * a))) + "i";
        cout << "The equation has 2 complex roots: x1 = " << sx1 << " x2 = " << sx2;
    }
}

int main()
{
    //ex1o1();
    //ex1o2();
    //ex1o3();
    //ex1o4();
    //ex1o5();
    //ex1o6();
    //ex2o1();
    //ex2o2a();
    //ex2o2b();
    //ex2o2c();
    //ex2o3();
    //ex2o4();
    //ex2o5();
    return 0;
}