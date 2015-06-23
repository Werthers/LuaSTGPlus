/// @file Utility.h
/// @brief 实用工具
#pragma once
#include "Global.h"

namespace LuaSTGPlus
{
	/// @brief 字符串格式化
	/// @param Format 字符串格式，不支持精度
	std::string StringFormat(const char* Format, ...)LNOEXCEPT;

	/// @brief 字符串格式化 va_list版本
	std::string StringFormatV(const char* Format, va_list vaptr)LNOEXCEPT;

	/// @brief 字符串格式化 宽字符
	/// @param Format 字符串格式，不支持精度
	std::wstring StringFormat(const wchar_t* Format, ...)LNOEXCEPT;

	/// @brief 字符串格式化 宽字符、va_list版本
	std::wstring StringFormatV(const wchar_t* Format, va_list vaptr)LNOEXCEPT;
}
