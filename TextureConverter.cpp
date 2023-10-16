#include "TextureConverter.h"
#include <Windows.h>

void TextureConverter::ConvertTextureWICToDDS(const std::string& filePath)
{
	//�e�N�X�`���t�@�C����ǂݍ���
	LoadWICTectureFromFile(filePath);


}

void TextureConverter::LoadWICTectureFromFile(const std::string& filepath)
{
	//�t�@�C���p�X�����C�h������ɕϊ�����
	std::wstring wfilePath = ConvertMultiByteStringToWideString(filepath);
}

std::wstring TextureConverter::ConvertMultiByteStringToWideString(const std::string& mstring)
{
	//���C�h������ɕϊ������ۂ̕�������v�Z
	int filePathBufferSize = MultiByteToWideChar(CP_ACP, 0, mstring.c_str(), -1, nullptr, 0);

	//���C�h������
	std::wstring wString;
	wString.resize(filePathBufferSize);

	//���C�h������ɕϊ�
	MultiByteToWideChar(CP_ACP, 0, mstring.c_str(), -1, &wString[0], filePathBufferSize);

	return wString;
}
