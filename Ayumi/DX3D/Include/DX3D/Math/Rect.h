#pragma once
#include <DX3D/Core/Core.h>

namespace dx3d
{
	class Rect
	{
	public:
		Rect() = default;
		Rect(i32 width, i32 height) :left(0), top(0), width(width), height(height) {}
		Rect(i32 left, i32 top, i32 width, i32 height) :left(left), top(top), width(width), height(height) {}
	public:
		i32 left{}, top{}, width{}, height{};

	};
}
