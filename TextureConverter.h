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
	//フォルダパスとファイル名を分離する
	void SeparatefilePath(const std::wstring& filePath);
	//DDSテクスチャとしてファイル書き出し
	void SaveDDSTextureToFIle();
//メンバ変数
private:
	//画像の情報
	DirectX::TexMetadata metadata_;
	//画像イメージのコンテナ
	DirectX::ScratchImage scratchImage_;
	//①ディレクトリパス
	std::wstring directoryPath_;
	//②ファイル名
	std::wstring fileName_;
	//③ファイル拡張子
	std::wstring fileExt_;
};

