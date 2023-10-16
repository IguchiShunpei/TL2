#include "TextureConverter.h"
#include <Windows.h>

void TextureConverter::ConvertTextureWICToDDS(const std::string& filePath)
{
	//テクスチャファイルを読み込む
	LoadWICTectureFromFile(filePath);


}

void TextureConverter::LoadWICTectureFromFile(const std::string& filepath)
{
	//ファイルパスをワイド文字列に変換する
	std::wstring wfilePath = ConvertMultiByteStringToWideString(filepath);
}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mstring)
{
	//ワイド文字列に変換した際の文字列を計算
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mstring.c_str(), -1, nullptr, 0);

	//ワイド文字列
	std::wstring wString;
	wString.resize(filePathBufferSize);

	//ワイド文字列に変換
	MultiByteToWideChar(CP_ACP, 0, mstring.c_str(), -1, &wString[0], filePathBufferSize);

	return wString;
}
