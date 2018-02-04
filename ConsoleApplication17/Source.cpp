#include<locale.h>
#include<iostream>
#include<stdio.h>
#include<math.h>
#include<time.h>
#include<inttypes.h>

using namespace std;
char f;
void main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	do {
		int N;
		cout << "������� ����� ������ " << endl;
		cin >> N;
		if (N == 1)
		{
			/*������ ��� ������� �������������� �����, ��������� �� 9 � 7 ���������. ������������ ������ ������ �� ������������� �� ����������� �������� ����� ��������
			*/
			int A[7], B[9];
			int tretiy[7 + 9];
			int temp;
			for (int i = 0; i < 9; i++)
			{
				if (i < 7)
				{
					A[i] = 1 + rand() % 100;
					cout << "A[" << i << "]=" << A[i];
				}
				B[i] = 1 + rand() % 100;
				cout << "\t B[" << i << "]=" << B[i] << endl;
			}
			for (int i = 0; i < 9; i++)
			{
				if (i < 7)
					tretiy[i] = A[i];
				tretiy[i + 7] = B[i];
			}
			for (int i = 0; i < 15; i++)
				for (int j = 15; j > i; j--)
				{
					if (tretiy[j - 1] > tretiy[j])
					{
						temp = tretiy[j - 1];
						tretiy[j - 1] = tretiy[j];
						tretiy[j] = temp;
					}
				}
			cout << "=======================================" << endl;
			cout << "������ ������" << endl;
			for (int i = 0; i < 16; i++)
			{
				cout << "T[" << i << "] " << tretiy[i] << endl;
			}
		}
		else if (N == 2)
		{
			/*� �������� ������������� ������� R(9) ���������� ������ ����������� �� �������� �� �������� ������������� ���������
			*/
			int R[9];
			int max = 0;
			for (int i = 0; i < 9; i++)
			{
				R[i] = 1 + rand() % 1000;
				if (((R[i] % 2) != 2) && (max<R[i]))
				{
					max = R[i];
				}
				cout << "R[" << i << "]= " << R[i] << endl;
			}
			cout << "������������ ����� �� ������� = " << max << endl;
		}
		else if (N == 3)
		{
			/*������ ������, ��������� �� 9 ��������� (������ ���������� �����) ������ ����. �������� ����� ������, ��������� �� ���� ���� ��������� ��������� �������
			*/
			int R[9];
			int E[9];
			for (int i = 0; i < 9; i++)
			{
				R[i] = 10 + rand() % 90;
				E[i] = (R[i] / 10) + (R[i] % 10);
				cout << "R[" << i << "]= " << R[i] << endl;
				cout << "E[" << i << "]= " << E[i] << endl;
			}
		}
		else if (N == 4)
		{
			/*���� �������������� ����� c1, c2, �, cn. ����� ������������ ����� ����� � ������� ��������� � ����� ����� � ��������� ���������.
			*/
			int c[9];
			int chet = 0;
			int nechet = 0;
			for (int i = 0; i < 9; i++)
			{
				c[i] = 1 + rand() % 1190;
				cout << "c[" << i << "]= " << c[i] << endl;
				if ((c[i] % 2) != 0)
					nechet += c[i];
				else
					chet += c[i];
			}
			cout << " ����� �������� = " << nechet << endl;
			cout << " ����� ������ = " << chet << endl;

		}
		else if (N == 5)
		{
			/*������ ������, ��������� �� 14 ��������� ��������������� ����. �������� ������� ������ �������� �� ������. ���������� ���������� ������������� ��� ���� ������������.
			*/
			int A[14];
			int temp, chet = 0;
			for (int i = 0; i<14; i++)
			{
				A[i] = 1 + rand() % 1000;
				cout << "A[" << i << "]= " << A[i] << endl;
			}
			for (int i = 0; i<7; i++)
			{
				chet++;
				temp = A[i];
				A[i] = A[i + 7];
				A[i + 7] = temp;
			}
			for (int i = 0; i<14; i++)
			{
				cout << "A[" << i << "]= " << A[i] << endl;
			}
			cout << "���������� ������������ =" << chet << endl;
		}
		else if (N == 6)
		{
			/*���������� ���������� ��������� ���������� � �������� �������� �������. (��������� �������� � �������� ������� � ��� ������������������ ���� ����� ������� �����, � ������� ������� ����� ������ ������� ����� � ������ �� ����).
*/
			int F[10];
			int chet=0;
			for (int i = 0; i < 10; i++)
			{
				F[i] = 1 + rand() % 1000;
				cout << "F[" << i << "]= " << F[i] << endl;
			}
			for (int i = 1; i < 9; i++)
			{
				if ((F[i - 1] < F[i])&& (F[i]< F[i + 1]))
					chet++;
			}
			cout << "���� = " << chet << endl;
		}
		else if (N == 7)
		{
			/*� �������� �������� ������� ���������� � ������� ������� ������������������� �����, ������� ��������� ������� (������ ��������� ����� ������ �����������).*/
			int F[10];
			int index[10] = { 0,1,2,3,4,5,6,7,8,9 }, znachen[10];
			int temp;
			int index2;
			for (int i = 0; i < 10; i++)
			{
				F[i] = 1 + rand() % 1000;
				cout << "F[" << i << "]= " << F[i] << endl;
			}
			for (int i = 0; i < 10; i++)
			{
				znachen[i] = F[i];
			}
			for(int i=0;i<9;i++)
				for (int j=9;j>i;j--)
				{
					if (znachen[j - 1] < znachen[j])
					{
						temp = znachen[j - 1];
						index2 = index[j-1];
						znachen[j - 1] = znachen[j];
						index[j - 1] = index[j];
						znachen[j] = temp;
						index[j] = index2;
					}
				}
			cout << "-----------------------------------" << endl;
			for (int i = 0; i < 10; i++)
			{
		
				cout << "F[" << index[i] << "]= " << F[index[i]] << endl;
			}
		}
		else if (N == 8)
		{
			/*������ ������, ��������� �� 10 ��������� (������ ���������� �����) ������ ����. �������� ����� ������, ��������� �� ��������� ���� ��������� ��������� �������.
*/
			int R[10];
			int E[10];
			for (int i = 0; i < 10; i++)
			{
				R[i] = 10 + rand() % 90;
				E[i] = abs((R[i] / 10) - (R[i] % 10));
				cout << "R[" << i << "]= " << R[i] ;
				cout << " E[" << i << "]= " << E[i] << endl;
			}
		}
		else if (N == 9)
		{
			/*����� ������������� ������. ���������� ���������� �������� �������, �� ������� �������� ��������� ���������� (������ ��������� ����� ������ �����������)
*/
			int F[10];
			int chet=0;
for (int i = 0; i < 10; i++)
{
	F[i] = 1 + rand() % 1000;
	cout << "F[" << i << "]= " << F[i] << endl;
}
for (int i = 0; i < 9; i++)
{
	if (F[i] < F[i + 1])
		chet++;
}
cout << "�������������= " << chet << endl;
		}
		else if (N == 10)
		{
			/*������ ��� ������� �������������� �����. ���������� ������������ �������� � ������ ������� � �������� �� �������.*/
			int F[10];
			int A[10];
			int temp;
			for (int i = 0; i < 10; i++)
			{
				F[i] = 1 + rand() % 1000;
				A[i] = 1 + rand() % 1000;
				cout << "F[" << i << "]= " << F[i];
				cout << " A[" << i << "]= " << A[i] << endl;
			}
			for (int i = 0; i < 9; i++)
				for (int j = 9; j > i; j--)
				{
					if (A[j - 1] > A[j])
					{
						temp = A[j - 1];
						A[j - 1] = A[j];
						A[j] = temp;
					}
					if (F[j - 1] > F[j])
					{
						temp = F[j - 1];
						F[j - 1] = F[j];
						F[j] = temp;
					}
				}
			temp = A[9];
			A[9] = F[9];
			F[9] = temp;
			cout << "----------------------------------" << endl;
			for (int i = 0; i < 10; i++)
			{
				cout << "F[" << i << "]= " << F[i];
				cout << " A[" << i << "]= " << A[i] << endl;
			}
		}
		cout << "������ ��������� ���������?" << endl;
		cout << "y-da n-net" << endl;
		cin >> f;
	} while (f == 'y');
}