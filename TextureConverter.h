#pragma once
#include <string>
#include <DirectXTex.h>

//テクスチャコンバーター
class TextureConverter
{
public:
	//テクスチャをWICからDDSに変換する
	void ConvertTextureWICToDDS(const std::string& filePath);

private:
	//テクスチャファイル読み込み
	void LoadWICTectureFromFile(const std::string& filepath);
	//マルチバイト文字列をワイド文字列に変換
	static std::wstring ConvertMultiByteStringToWideString(const std::string& mstring);
};

