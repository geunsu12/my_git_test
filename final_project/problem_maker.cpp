#include "problem_maker.h"
#include <cmath>
void addition(int *score){
    int i,j,k;
    cout << "주어진 Vector가 다음과 같을 때 행렬 덧셈을 입력하라" << endl;
    cout << "예를 들어 첫번째 행이 (1 2 3) 이라면, 1 2 3 입력 후 엔터" << endl;
  
    for(i=0;i<3;i++)
    {
        MatrixXd m = MatrixXd::Random(3,3);
        m = (m + Matrix3d::Constant(0.5)) * 5;
        MatrixXd s = MatrixXd::Random(3,3);
        s = (s + Matrix3d::Constant(0.5)) * 5;

        MatrixXi m_i = m.cast <int> ();
        MatrixXi s_i = s.cast <int> ();
        MatrixXi r_i = m_i + s_i;
        MatrixXi u_i(3,3);

        if(i!=0)
            cout << "주어진 Vector가 다음과 같을 때 행렬 덧셈을 입력하라" << endl;
        
        cout << "m =" << "\n" << m_i << "\n" << endl;
        cout << "s =" << "\n" << s_i << "\n" << endl;

        //cout << "m + s =" << "\n" << r_i << "\n" << endl;

        for(j=0;j<3;j++)
        {
            cout <<"\n" << j+1 << "th row" << endl;

            for(k=0;k<3;k++)
            {
                cin >> u_i(j,k);
                while(!cin){
                    cout << "정수만 입력하세요. " << k+1 <<"번째 열부터!!"<<endl;
                    cin.clear();
                    cin.ignore(INT_MAX,'\n');
                    cin >> u_i(j,k);
                }
            }
        }

        if(u_i == r_i)
        {
            cout << "correct!!!"<< endl;
            *score += 10;
        }
        else
            cout << "wrong!!!"<< endl;
        cout << "Score : "<< *score << " / 30\n" << endl;
    }
}

void subtraction(int *score){
    int i,j,k;
    cout << "주어진 Vector가 다음과 같을 때 행렬 뺄셈을 입력하라" << endl;
    cout << "예를 들어 첫번째 행이 (1 2 3) 이라면, 1 2 3 입력 후 엔터" << endl;
  
    for(i=0;i<3;i++)
    {
        MatrixXd m = MatrixXd::Random(3,3);
        m = (m + Matrix3d::Constant(0.5)) * 5;
        MatrixXd s = MatrixXd::Random(3,3);
        s = (s + Matrix3d::Constant(0.5)) * 5;

        MatrixXi m_i = m.cast <int> ();
        MatrixXi s_i = s.cast <int> ();
        MatrixXi r_i = m_i - s_i;
        MatrixXi u_i(3,3);

        if(i!=0)
            cout << "주어진 Vector가 다음과 같을 때 행렬 뺄셈을 입력하라" << endl;
        
        cout << "m =" << "\n" << m_i << "\n" << endl;
        cout << "s =" << "\n" << s_i << "\n" << endl;

        cout << "m - s =" << "\n" << r_i << "\n" << endl;

        for(j=0;j<3;j++)
        {
            cout <<"\n" << j+1 << "th row" << endl;

            for(k=0;k<3;k++)
            {
                cin >> u_i(j,k);
                while(!cin){
                    cout << "정수만 입력하세요. " << k+1 <<"번째 열부터!!"<<endl;
                    cin.clear();
                    cin.ignore(INT_MAX,'\n');
                    cin >> u_i(j,k);
                }
            }
        }

        if(u_i == r_i)
        {
            cout << "correct!!!"<< endl;
            *score += 10;
        }
        else
            cout << "wrong!!!"<< endl;
        cout << "Score : "<< *score << " / 30\n" << endl;
    }
}

void multiplication(int *score){
    int i,j,k;
    cout << "주어진 Vector가 다음과 같을 때 행렬 곱을 입력하라" << endl;
    cout << "예를 들어 첫번째 행이 (1 2 3) 이라면, 1 2 3 입력 후 엔터" << endl;
  
    for(i=0;i<3;i++)
    {
        MatrixXd m = MatrixXd::Random(3,3);
        m = (m + Matrix3d::Constant(0.5)) * 5;
        MatrixXd s = MatrixXd::Random(3,3);
        s = (s + Matrix3d::Constant(0.5)) * 5;

        MatrixXi m_i = m.cast <int> ();
        MatrixXi s_i = s.cast <int> ();
        MatrixXi r_i = m_i * s_i;
        MatrixXi u_i(3,3);

        if(i!=0)
            cout << "주어진 Vector가 다음과 같을 때 행렬 곱을 입력하라" << endl;
        
        cout << "m =" << "\n" << m_i << "\n" << endl;
        cout << "s =" << "\n" << s_i << "\n" << endl;

        cout << "m * s =" << "\n" << r_i << "\n" << endl;

        for(j=0;j<3;j++)
        {
            cout <<"\n" << j+1 << "th row" << endl;

            for(k=0;k<3;k++)
            {
                cin >> u_i(j,k);
                while(!cin){
                    cout << "정수만 입력하세요. " << k+1 <<"번째 열부터!!"<<endl;
                    cin.clear();
                    cin.ignore(INT_MAX,'\n');
                    cin >> u_i(j,k);
                }
            }
        }

        if(u_i == r_i)
        {
            cout << "correct!!!"<< endl;
            *score += 10;
        }
        else
            cout << "wrong!!!"<< endl;
        cout << "Score : "<< *score << " / 30\n" << endl;
    }
}
