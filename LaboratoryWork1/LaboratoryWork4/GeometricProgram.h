#pragma once
#include <iostream>
#include "ClassRectangle.h"
#include "ClassRing.h"
#include "CollisionManager.h"

using namespace std;

//TODO: ������ �� ������� �����������? (+)
//� ������� ���� ������� ������� ��������� �� ����������� �����
//TODO: � � ���������� ������ ���� �����-�� ��������� �����? ��� �� ������ � ��� - ���� �� �����
//TODO: ��������� ���������. �.�. ����� ��������� - ���, ������ ������ �����������.
static class GeometricProgram
{
	public:
		void DemoRing();
		void DemoRectangleWithPoint();
		void DemoCollision();
};