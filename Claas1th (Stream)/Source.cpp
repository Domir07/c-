#include <iostream>

char character = 'C';

void OnDamage(float damage = 0.0f)
{
	std::cout << damage << " ��ŭ ���ظ� �Ծ����ϴ�." << std::endl;
}

void Coordinate(float x, float y, float z = 30)
{
	std::cout << "x�� �� : " << x << std::endl;
	std::cout << "y�� �� : " << y << std::endl;
	std::cout << "z�� �� : " << z << std::endl;
}

int main()
{
#pragma region ��Ʈ��
	// �Է�: << , ���: >> , �ٹٲ�: :endl;
	// �ð��� �帧�� ���� ���������� �߻��ϴ� �������� �帧�Դϴ�.

	// std::cout << "Hello World" << std::endl;
	// std::cout << "Computer" << std::endl;
	// 
	// int data = 0;
	// 
	// std::cout << "data ������ �� �Է� : ";
	// 
	// std::cin >> data;
	// 
	// std::cout << "data ������ �� : " << data << std::endl;

	// ��Ʈ���� �ü���� ���� �����Ǹ�, ��Ʈ�� ��ü�� �������
	// �ӽ� �޸� ������ �����մϴ�.

#pragma endregion

#pragma region ���� �Ҵ�
	// // ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸�
	// // �Ҵ��ϴ� �۾��Դϴ�.
	// 
	// int* ptr = new int;
	// int* dynamicArray = new int[3];
	// 
	// *ptr = 9999;
	// 
	// dynamicArray[0] = 10;
	// dynamicArray[1] = 20;
	// dynamicArray[2] = 30;
	// 
	// for (int i = 0; i < 3; i++)
	// {
	// 	std::cout << "dynamicArray[" << i << "]" << " : " << dynamicArray[i] << std::endl;
	// }
	// 
	// std::cout << "ptr�� ����Ű�� �ִ� �޸� �� : " << *ptr << std::endl;
	// std::cout << "ptr�� ����Ű�� �ִ� �޸� �ּ� : " << ptr << std::endl;
	// 
	// delete [ ] dynamicArray;
	// delete ptr;
#pragma endregion

#pragma region �⺻ �Ű� ����
	// �Լ��� ���� �� ������ �� ����ڰ� �̸� �⺻����
	// ������ �Ű������Դϴ�.

	// OnDamage();
	// OnDamage(99);
	// 
	// Coordinate(10, 20);
	// Coordinate(5, 10, 15);

#pragma endregion

#pragma region ���� ���� ������
	// // ���� �������� ���Ǵ� �ĺ��ڸ� �����ϴµ� ���Ǵ� �������Դϴ�.
	// 
	// char character = 'A';
	// std::cout << "charater ������ �� : " << character << std::endl;
	// 
	// // ���� ���� �����ڴ� ���� ������ ���� �̸��� ���� ������ ����Ǿ���
	// // �� ���� ����� ������ ����� ������ �̸��� ����ϴ� ���� ��Ģ��
	// // �����ϱ� ������ ���� ������ ȣ����� �ʽ��ϴ�.
	// 
	// std::cout << "charater ������ �� : " << ::character << std::endl;
	// 
	// // ���� ���� �����ڸ� ����ϰ� �Ǹ� ���� ���� ������ �����ϰ� �ǹǷ�
	// // ���� ������ ������ �� �ֽ��ϴ�.
#pragma endregion




}